#pragma once
#include<iostream>

using std::cout;
using std::endl;

class Fibonacci_numbers
{
private:
	
public:
	Fibonacci_numbers();
	~Fibonacci_numbers();

	// 1 1 2 3 5 8 13 21 �ݺ��� ��� �������
	void ComputeFor(int count); // �ݺ�
	int ComputeRecursive(int num); // ���
	int Tail(int count); // �������

};

