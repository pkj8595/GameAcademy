#pragma once
#include<iostream>
#include<time.h>
#include<string>
#include<Windows.h>

using std::cout;
using std::endl;
using std::string;
using std::cin;

#define BINGO_SIZE		4


struct STCard
{
	int num;
	string img;
};

class Bingo
{
private:

	int _size;
	int _totalSize;
	//STCard **arr;
	STCard arr[4][4];
	int _lineCount = 0;
	bool _isPlayer;
	int _inputNum;


public:
	Bingo();
	Bingo(bool ispalyer);
	//Bingo(bool ispalyer, int size);
	~Bingo();

	int GetLineCount() const { return _lineCount; }
	bool GetIsPlayer() const { return _isPlayer; }
	void Shuffle();
	void Init();
	void Display();
	int CallNumber();
	void CheckNumber(int inputNum);
	void CheckLine();


	//bool IsInputNum(int num);
};

/*
	빙고 판 만들기 , 셔플 

	라인 체크

*/