#pragma once
#include "stdafx.h"
#include "Unit.h"
#include "Player.h"
#include "Monster.h"
#include <time.h>
#include "GameItem.h"



class Story
{
private:
	char _anyKey;
	int _selectKey;
	int _random;

	void BattleStr(Unit *offense, Unit *deffense);
	//void BattleStr(Player *offense, Monster *deffense);

public:
	Story();

	void StartStory();
	int SelectWay();
	//void BattleStr(Unit *offense, Unit *deffense);

	void BadEnd();
	void ClearEnd();

	void Story1();
	void Story1_1();
	void Story1_2();
	void Story_3();
	void Story_3_1();
	//void Story_Shop(GameItem *gameItem);
	GameItem* Story_Shop(GameItem **gameItem, Player* player);
	
	//void Battle(Player *player, Monster *monster);
	void Battle(Unit *player, Unit *monster);

	void ClickForNextStory();

};

