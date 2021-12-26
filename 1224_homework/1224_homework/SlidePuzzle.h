#pragma once
#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

#define SLIDE_SIZE		4

enum class ARROW
{
	KEY_ENPTY,
	KEY_UP =72,
	KEY_DOWN =80,
	KEY_LEFT =75,
	KEY_RIGHT =77,
};

class SlidePuzzle
{
private:
	ARROW inputKey;
	int arr[SLIDE_SIZE][SLIDE_SIZE];
	int tempNum;
	int arrSize = SLIDE_SIZE * SLIDE_SIZE;
	int x, y;


public:
	SlidePuzzle();
	~SlidePuzzle();

	void Init();
	void Play();
	void Display();
	void Shuffle();
	void InputArrow();
	bool CheckGameClear();
	bool CheckNum(int num);
	void StartChit();


};

