#pragma once
#include "stdafx.h"
#include "Player.h"
#include "Monster.h"
#include "ModelUnit.h"
#include "Player.h"
#include "Story.h"
#include "GameItem.h"
//#include "ItemList.h"
//#include <Windows.h>


void main()
{
	//���丮 ��ü ����
	Story story;
	//������ �迭 ����
	Monster *monster1[MONSTER_TYPE_COUNT]={nullptr};
	//�÷��̾� ��ü ����
	Player *player = new Player();
	//������ ������ �迭 ����
	GameItem *pGameItem[GAME_ITEM_COUNT]={nullptr};
	//������ ����Ʈ �ν��Ͻ�
	//ItemList itemlist(10);


	//���� ������  
	struct STMonsterModel monsterData[MONSTER_TYPE_COUNT] =
	{
		{1,"���� ��ģ ������",50,50,15,0,1,15,100},
		{2,"������ ���� ������",60,60,20,5,1,20,100},
		{3,"������ ���� ��ģ ������",70,70,20,5,1,20,100},
		{4,"��ü���� ������",20,20,30,0,1,20,100},
		{5,"���ƹ��� ������",100,100,30,10,1,20,100}
	};

	//���� Ŭ������ �Ҵ��� ����ü ������ ������ �ʱ�ȭ
	struct STMonsterModel *poMonsterType = monsterData;

	//���� ����
	for (int i = 0; i < MONSTER_TYPE_COUNT; i++)
	{
		monster1[i] = new Monster(poMonsterType);
		//������ ����
		poMonsterType++;
	}

	//������ ������
	struct STItem STGameItem[GAME_ITEM_COUNT] =
	{
		{1,"��Ʈ��",5,20,1000,false},
		{2,"ġƮŰ",100,100,500,false},
		{3,"��ȭ��",20,5,1000,false}
	};

	//������ �迭 �����Ϳ� ����
	struct STItem *poSTItem = STGameItem;

	//������ ��ü ����
	for (int i = 0; i < GAME_ITEM_COUNT; i++) 
	{
		pGameItem[i] = new GameItem(poSTItem);
		poSTItem++;
	}
	GameItem **dpGameItem = pGameItem;

	/*
	dpGameItem[0]->ToString();
	dpGameItem[1]->ToString();
	dpGameItem[2]->ToString();
	*/

	//���丮 ���� ---------------------------------------
	story.StartStory();
	story.Battle(player, monster1[0]);
	story.Story1();



	//���丮 ����
	switch (story.SelectWay()) 
	{
	case 1:
		story.Story1_1();
		story.Battle(player, monster1[1]);
		break;
	case 2:
		story.Story1_2();
		story.Battle(player, monster1[2]);
		break;
	default:
		break;
	}

	//�÷��̾� ���� üũ 
	if (player->GetIsDie()) {
		story.BadEnd();
		return;
	}
	//���� �̿� �� ����
	player->SetItem(story.Story_Shop(dpGameItem, player));
	//story.Story_Shop(pGameItem[0]);
	
	story.Story_3_1();
	story.Battle(player, monster1[4]);

	if (player->GetIsDie())
	{
		story.BadEnd();
	}
	else 
	{
		story.ClearEnd();
	}

	cout << "\n\n\n			THANK YOU FOR PLAY" << endl;
	story.ClickForNextStory();

	//���丮 end ---------------------------------------



}

//
//void BackGroundColor(int backColor)
//{
//	int color = 0 + backColor * 16;
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
