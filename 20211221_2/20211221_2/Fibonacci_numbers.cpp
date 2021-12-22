#include "Fibonacci_numbers.h"

Fibonacci_numbers::Fibonacci_numbers()
{
}

Fibonacci_numbers::~Fibonacci_numbers()
{
}

void Fibonacci_numbers::ComputeFor(int count)
{
	int *num = new int[count](); // ���� �迭 �Ҵ� 0���� �ʱ�ȭ
	
	num[0] = 1;
	num[1] = 1;
	for(int i =0; i<count-2 ; i++)
	{
		num[i+2] = num[i+1] + num[i];
	}

	for (int i = 0; i < count; i++)
	{
		cout << " | " << num[i] ;
	}
	delete[] num;
}

int Fibonacci_numbers::ComputeRecursive(int num)
{
	//���� 3 ���� 2 
	if (num == 1 || num == 2) 
	{
		return 1;
	}
	else 
	{
		return ComputeRecursive(num - 1) + ComputeRecursive(num - 2);
	}
}

int Fibonacci_numbers::Tail(int num)
{
	if (num == 1 || num == 2) 
	{
		return 1;
	}
	else 
	{
			
	}
	return 0;
}


