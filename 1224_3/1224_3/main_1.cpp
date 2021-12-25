#include <iostream>
#include <time.h>

using std::cout;
using std::endl;
using std::cin;

void bubbleSort(int *arr, int size);
void InputNumArr(int *arr, int count);
void print(int *arr, int count);

int main()
{
	srand(time(NULL));
	int selectNum;
	cout << "숫자 입력" << endl;
	cin >> selectNum;

	int *arr = new int[selectNum]();

	InputNumArr(arr, selectNum);
	bubbleSort(arr, selectNum);
}


void bubbleSort(int *arr, int size)
{
	int temp;
	int count = 0;
	int countTemp = 0;
	while (true)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				count++;
				print(arr, size);
			}
		}
		cout << "---------------------" << endl;

		if (count == countTemp)
		{
			break;
		}
		countTemp = count;
	}
}

void InputNumArr(int *arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		arr[i] = rand() % 100;
	}
}

void print(int * arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
}
