#include "Bingo.h"

Bingo::Bingo()
{
	
}
//
//Bingo::Bingo(bool ispalyer , int size)
//{
//	srand(time(NULL));
//	_isPlayer = ispalyer;
//	_size = size;
//	_totalSize = size * size;
//	Init();
//	Shuffle();
//	
//}


Bingo::Bingo(bool ispalyer)
{
	_isPlayer = ispalyer;
	_size = BINGO_SIZE;
	_totalSize = BINGO_SIZE * BINGO_SIZE;
	Init();
	Shuffle();

}

Bingo::~Bingo()
{

}

void Bingo::Init()
{
	//2차 배열 동적 생성
	/*arr = new STCard*[_size];
	for (int i = 0; i < _size; i++)
	{
		arr[i] = new STCard[_size];
	}*/

	//배열 초기화
	for (int i = 0; i < _totalSize; i++)
	{
		arr[0][i].img = "■";
		arr[0][i].num = i + 1;
	}
}


void Bingo::Shuffle()
{
	int dest, sour, temp;

	for (int i = 0; i < 20; i++)
	{
		dest = rand() % _totalSize;
		sour = rand() % _totalSize;

		temp = arr[0][dest].num;
		arr[0][dest].num = arr[0][sour].num;
		arr[0][sour].num = temp;
	}
}

void Bingo::Display()
{
	if (_isPlayer)
	{
		cout << "player" << endl;
		cout << "bingo : "<<_lineCount << endl;
	}
	else 
	{
		cout << "computer" << endl;
		cout << "bingo : " << _lineCount << endl;
	}
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if (arr[i][j].num == 0)
			{
				cout << arr[i][j].img << "	";
			}
			else
			{
				cout << arr[i][j].num << "	";
			}
		}
		cout << endl;
	}
	cout << "========================" << endl;
}

int Bingo::CallNumber()
{
	if (_isPlayer) 
	{
		cout<< "빙고 숫자 입력" << endl;
		cin >> _inputNum;
	}
	else 
	{
		_inputNum = (rand() % _totalSize) + 1;
	}

	if (_inputNum > _totalSize || _inputNum == 0)
	{
		cout << "잘못된 입력" << endl;
		CallNumber();
	}

	
	return _inputNum;
}

void Bingo::CheckNumber(int inputNum)
{
	for (int i = 0; i < _totalSize; i++)
	{
		if (arr[0][i].num == inputNum)
		{
			arr[0][i].num = 0;
			arr[0][i].img = "X";
		}
	}
}

void Bingo::CheckLine()
{
	_lineCount = 0;
	bool xBool , yBool,cross1,cross2;
	//cout << "Bingo::CheckLine" << endl;
	for (int i = 0; i < _size; i++)
	{
		xBool = true;
		yBool = true;
		//열 체크 
		for (int x = 0; x < _size; x++)
		{
			if (arr[i][x].num != 0) 
			{
				xBool = false;
			}
		}

		//행 체크
		for (int y = 0; y < _size; y++)
		{
			if (arr[y][i].num != 0)
			{
				yBool = false;
			}
		}
		if (xBool ) _lineCount++;
		if (yBool ) _lineCount++;
	}

	cross1 = true;
	for (int i = 0; i < _size; i++) {
		if (arr[i][i].num != 0)
		{
			cross1 = false;
		}
	}
	if (cross1) _lineCount++;

	cross2 = true;
	for (int i = 0, temp=0; i < _size; i++) 
	{
		temp = (_size - 1) - i;
		if (arr[i][temp].num != 0)
		{
			cross2 = false;
		}
	}
	if (cross2) _lineCount++;

}
