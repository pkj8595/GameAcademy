#pragma once
#include<iostream>
#include<time.h>
#include<vector>
#include<string>
#include<Windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

#define BINGO_SIZE 3

struct STCard
{
	int num;
	string img;
};

class Bingo
{
private:
	vector<int> checkVec;
	vector<int>::iterator iter;

	STCard arr[BINGO_SIZE][BINGO_SIZE];
	//int *parr = arr[0];
	int selecNum = 0;
	int size;
	int lineCount = 0;


public:
	Bingo();
	~Bingo();

	void Play();
	void Display();
	void InputNum();
	void Shuffle();
	void Init();
	bool IsInputNum(int num);
	void CheckLine();
};

