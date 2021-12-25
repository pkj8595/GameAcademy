#pragma once
#include "stdafx.h"
#include "Unit.h"
#include "GameItem.h"

class Player : public Unit
{
private :
	int _gold;
	GameItem* _playerItem;


public :
	Player();
	~Player();

	void SetGold(int gold);
	void ChangeGold(int gold);
	int GetGold();


	void SetItem(GameItem * item);
	void RemoveItem();
	GameItem* GetItem();

	//bool IsLevelUp();

	//오버라이드 함수들 업캐스팅으로 넘겨줄때 사용
public:
	string GetName() override;
	bool GetIsDie()override;
	int GetDamage()override;
	int GetTotalDamage()override;
	int GetDefence() override;
	int GetTotalDefence() override;
	int GetExe() override;
	void beAttacked(int damage) override;
	void SetAddExe(int exe) override;
	void ToString() override;
};

