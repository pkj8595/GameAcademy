#pragma once
#include "stdafx.h"
#include "Monster.h"

Monster::Monster()
{
	//_monsterCount++;
	//_monsterType = 1;
}

Monster::Monster(STMonsterModel *model)
{
	_monsterType = (*model).monsterType;
	Unit::SetName((*model).name);
	Unit::SetMaxHp((*model).maxHp);
	Unit::SetHp((*model).hp);
	Unit::SetDamage((*model).damage);
	Unit::SetDefence((*model).defence);
	Unit::SetLevel((*model).level);
	Unit::SetExe((*model).exe);
	Unit::SetMaxExe((*model).maxExe);

}

Monster::Monster(int mosterType)
{
	
	_monsterType = mosterType;
}

Monster::~Monster()
{
	delete this;
}

//int Monster::getMonsterCount()
//{
//	return _monsterCount;
//}

int Monster::GetMonsterType()
{
	return _monsterType;
}

void Monster::SetMonsterType(int monsterType)
{
	_monsterType = monsterType;
}


string Monster::GetName()
{
	return Unit::GetName();
}

bool Monster::GetIsDie()
{
	return Unit::GetIsDie();
}

int Monster::GetDamage()
{
	return Unit::GetDamage();
}

int Monster::GetTotalDamage()
{
	return Unit::GetDamage();
}

int Monster::GetTotalDefence()
{
	return Unit::GetDefence();
}

int Monster::GetDefence()
{
	return Unit::GetDefence();
}

int Monster::GetExe()
{
	return Unit::GetExe();
}

void Monster::beAttacked(int damage)
{
	Unit::beAttacked(damage);
}


void Monster::SetAddExe(int exe)
{
	Unit::SetAddExe(exe);
	if (Unit::IsLevelUp())
	{
		cout << "\n" << Unit::GetName() << "가 레벨업을 했습니다." << endl;
		ToString();
	}
}

void Monster::ToString() 
{
	//cout << "Monster type			:" << _monsterType << endl;
	__super::ToString();
}
