#pragma once
#include "Enemy.h"
#include "Player.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class MainGame
{
private:
	Enemy* enemy;
	Player* player;

	int key;
public:
	MainGame();
	~MainGame();

	//void Init();	//초기화
	void Update(); // 연산
	//void Render(); //그려주는곳
	//void Release();//삭제하는곳

};

