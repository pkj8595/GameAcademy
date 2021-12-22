#include<iostream>
#include"Stack.h"
#include"Fibonacci_numbers.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
	/*
	int inputNum =0, selectNum=0;
	Stack stack;
	
	while(true)
	{
		cout << "1. push  2. pop  3.print" << endl;
		cin >> selectNum;

		switch (selectNum)
		{
		case 1:
			cout << "삽입할 숫자 입력" << endl;
			cin >> inputNum;
			stack.push(inputNum);
			break;
		case 2:
			stack.pop();
			break;
		case 3:
			stack.print();
			break;
		default:
			break;
		}
		cout << "---------------------------------" << endl;
	}*/

	Fibonacci_numbers fNum;

	fNum.ComputeFor(10);

	cout << endl << fNum.ComputeRecursive(10) << endl;



}