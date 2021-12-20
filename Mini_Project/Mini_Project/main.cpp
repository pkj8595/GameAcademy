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
	//스토리 객체 생성
	Story story;
	//포인터 배열 선언
	Monster *monster1[MONSTER_TYPE_COUNT]={nullptr};
	//플레이어 객체 생성
	Player *player = new Player();
	//아이템 포인터 배열 선언
	GameItem *pGameItem[GAME_ITEM_COUNT]={nullptr};
	//아이템 리스트 인스턴스
	//ItemList itemlist(10);


	//몬스터 데이터  
	struct STMonsterModel monsterData[MONSTER_TYPE_COUNT] =
	{
		{1,"조금 미친 개발자",50,50,15,0,1,15,100},
		{2,"정신을 놓은 개발자",60,60,20,5,1,20,100},
		{3,"각성한 조금 미친 개발자",70,70,20,5,1,20,100},
		{4,"시체같은 개발자",20,20,30,0,1,20,100},
		{5,"돌아버린 개발자",100,100,30,10,1,20,100}
	};

	//몬스터 클래스에 할당할 구조체 데이터 포인터 초기화
	struct STMonsterModel *poMonsterType = monsterData;

	//몬스터 생성
	for (int i = 0; i < MONSTER_TYPE_COUNT; i++)
	{
		monster1[i] = new Monster(poMonsterType);
		//포인터 연산
		poMonsterType++;
	}

	//아이템 데이터
	struct STItem STGameItem[GAME_ITEM_COUNT] =
	{
		{1,"노트북",5,20,1000,false},
		{2,"치트키",100,100,500,false},
		{3,"소화기",20,5,1000,false}
	};

	//아이템 배열 포인터에 저장
	struct STItem *poSTItem = STGameItem;

	//아이템 객체 생성
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

	//스토리 시작 ---------------------------------------
	story.StartStory();
	story.Battle(player, monster1[0]);
	story.Story1();



	//스토리 선택
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

	//플레이어 죽음 체크 
	if (player->GetIsDie()) {
		story.BadEnd();
		return;
	}
	//상점 이용 및 장착
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

	//스토리 end ---------------------------------------



}

//
//void BackGroundColor(int backColor)
//{
//	int color = 0 + backColor * 16;
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
