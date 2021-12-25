#pragma once
#include "Unit.h"
#include "ModelUnit.h"


struct STMonsterModel
{
	int monsterType;
	string name;
	int maxHp;
	int hp;
	int damage;
	int defence;
	//몬스터 레벨은 나중에 구현
	int level; 
	int exe;
	int maxExe;

};

class Monster : public Unit
{
private :
	int _monsterType;
	//static int _monsterCount;

public :
	Monster();
	Monster(STMonsterModel *model);
	Monster(int type);
	~Monster();

	//int getMonsterCount();
	int GetMonsterType();
	void SetMonsterType(int mosterType);

	string GetName() override;
	bool GetIsDie()override;
	int GetDamage()override;
	int GetTotalDamage()override;
	int GetTotalDefence() override;
	int GetDefence() override;
	int GetExe() override;
	void beAttacked(int damage) override;
	void SetAddExe(int exe) override;
	void ToString() override;

};

