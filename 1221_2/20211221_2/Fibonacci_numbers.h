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

	// 1 1 2 3 5 8 13 21 ¹Ýº¹¹® Àç±Í ²¿¸®Àç±Í
	void ComputeFor(int count); // ¹Ýº¹
	int ComputeRecursive(int num); // Àç±Í
	int Tail(int count); // ²¿¸®Àç±Í

};

