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

	//void Init();	//�ʱ�ȭ
	void Update(); // ����
	//void Render(); //�׷��ִ°�
	//void Release();//�����ϴ°�

};

