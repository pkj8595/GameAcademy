#include "Bingo.h"
#include "Bingo.h"

Bingo::Bingo()
{
	srand(time(NULL));
	size = BINGO_SIZE * BINGO_SIZE;
	checkVec.reserve(size);

	Init();
	Play();

}

Bingo::~Bingo()
{
}

void Bingo::Play()
{
	while (true)
	{
		cout << "빙고 : " << lineCount << endl;
		Display();
		InputNum();

		Sleep(500);
		system("cls");
	}

}

void Bingo::Display()
{
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			if (IsInputNum(arr[i][j].num))
			{
				cout << arr[i][j].img << " | ";
			}
			else
			{
				cout << arr[i][j].num << " | ";
			}
		}
		cout << endl;
	}
	cout << "========================" << endl;
}

void Bingo::InputNum()
{
	cin >> selecNum;

	if (selecNum > size || selecNum == 0)
	{
		cout << "잘못된 입력" << endl;
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[0][i].num == selecNum)
		{
			checkVec.push_back(arr[0][i].num);
			arr[0][i].img = "X";
		}
	}

}

void Bingo::Shuffle()
{
	int dest, sour, temp;

	for (int i = 1; i < 100; i++)
	{
		dest = rand() % size;
		sour = rand() % size;

		temp = arr[0][dest].num;
		arr[0][dest].num = arr[0][sour].num;
		arr[0][sour].num = temp;
	}
}

void Bingo::Init()
{
	//cout << sizeof(parr) <<endl;		4
	for (int i = 0; i < size; i++)
	{
		//*(parr+i) = i+1;
		arr[0][i].img = "■";
		arr[0][i].num = i + 1;
	}

	//for (int i = 0; i < size; i++)
	//{
	//	//cout << *(parr + i) << endl;
	//	cout << arr[0][i] << endl;
	//}
	Shuffle();
}

bool Bingo::IsInputNum(int num)
{
	for (iter = checkVec.begin(); iter != checkVec.end(); ++iter)
	{
		if (*iter == num) return true;
	}
	return false;
}

void Bingo::CheckLine()
{
	int num = 0;
	iter = find(checkVec.begin(), checkVec.end(), num);
	for (int i = 0; i < BINGO_SIZE; i++)
	{

	}
	lineCount++;
}
