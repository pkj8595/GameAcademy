#include "SlidePuzzle.h"


SlidePuzzle::SlidePuzzle()
{
	Init();
	Play();
}

SlidePuzzle::~SlidePuzzle()
{
}

void SlidePuzzle::Init()
{
	inputKey = ARROW::KEY_ENPTY;
	tempNum = 0;
	x = SLIDE_SIZE - 1, y = SLIDE_SIZE - 1;
	for (size_t i = 0; i < arrSize-1; i++)
	{
		arr[0][i] = i+1;
	}
	Shuffle();
}

void SlidePuzzle::Play()
{
	while (true)
	{
		Display();
		InputArrow();
		
		system("cls");
		if (CheckGameClear())
		{
			Display();
			cout << "-----------------\n----Game Clear----\n-----------------" << endl;
			break;
		}

	}
}

void SlidePuzzle::Display()
{
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
	for (int i = 0; i < SLIDE_SIZE; i++)
	{
		for (int j = 0; j < SLIDE_SIZE; j++)
		{
			cout << arr[i][j]<< "	";
		}
		cout << endl;
	}
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
}

void SlidePuzzle::Shuffle()
{
	int dest, sour, temp;

	for (int i = 1; i < 100; i++)
	{
		dest = rand() % (arrSize-1);
		sour = rand() % (arrSize-1);

		temp = arr[0][dest];
		arr[0][dest] = arr[0][sour];
		arr[0][sour] = temp;
	}

	arr[0][arrSize-1] = 0;

}

void SlidePuzzle::InputArrow()
{
	cout << "화살표로 움직이기 \n 치트 -> 0" << endl;
	int i;
	int cNum;
	i = _getch();
	if (i == 224)
	{
		i = _getch();
		switch (i)
		{
		case 72: 
			//cout << "위쪽";
			if (CheckNum(y - 1))
			{
				tempNum = arr[y][x];
				arr[y][x] = arr[y - 1][x];
				arr[y - 1][x] = tempNum;
				y--;
			}
			break;
		case 80: 
			//cout << "아래쪽";
			if (CheckNum(y + 1))
			{
				tempNum = arr[y][x];
				arr[y][x] = arr[y + 1][x];
				arr[y + 1][x] = tempNum;
				y++;
			}
			break;
		case 75: 
			//cout << "왼쪽";
			if (CheckNum(x - 1))
			{
				tempNum = arr[y][x];
				arr[y][x] = arr[y][x - 1];
				arr[y][x - 1] = tempNum;
				x--;
			}
			break;
		case 77: 
			//cout << "오른쪽"; 
			if (CheckNum(x + 1))
			{
				tempNum = arr[y][x];
				arr[y][x] = arr[y][x + 1];
				arr[y][x + 1] = tempNum;
				x++;
			}
			break;
		
		}
		
	}
	else if (i == 48)
	{
		StartChit();
	}
}

bool SlidePuzzle::CheckGameClear()
{
	for (size_t i = 0; i < arrSize-1; i++)
	{
		if (arr[0][i] != i + 1) 
		{
			return false;
		}
	}

	return true;
}

bool SlidePuzzle::CheckNum(int num)
{
	if (num < 0) return false;
	else if (num > SLIDE_SIZE - 1) return false;

	return true;
}

void SlidePuzzle::StartChit()
{
	for (size_t i = 0; i < arrSize - 1; i++)
	{
		arr[0][i] = i + 1;
	}
	arr[0][arrSize - 1] = arrSize-1;
	arr[0][arrSize - 2] = 0;

	x = SLIDE_SIZE - 2;
	y = SLIDE_SIZE - 1;

}
