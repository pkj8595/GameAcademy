#pragma once
#include "stdafx.h"
#include "Aclass_Skill.h"
#include "Skill_Defence.h"

struct STSkill
{
	int SkillNum;
	string SkillName;
	int SkillDamege;
};

class Skill_Deffence;

class Unit
{
private:
	//스트래티지 패턴 실패
	//Aclass_Skill** _unitSkillList;
	//int _skillCount;
	string _name;
	int _maxHp;
	int _hp;
	int _damage;
	int _totalDamage;
	int _defence;
	int _totalDefence;
	int _level;
	int _exe;
	int _maxExe;
	bool _isDie;
	bool _skillNum[5] = {0};

	//method
	bool IsDead(int hp);
	//void AddUnitSkill(Aclass_Skill* skill);

protected:
	bool IsLevelUp();

public:
	Unit();
	Unit(string name, int maxhp, int hp, int damage, int defence, int level, int exe);
	virtual ~Unit();

	//void WhatIsSkill(int skillNum);

	void SetName(string name);
	virtual string GetName();

	void SetIsDie(bool isDie);
	virtual bool GetIsDie();

	void SetHp(int hp);
	int GetHp();

	void SetMaxHp(int maxHp);
	int GetMaxHp();

	void SetDamage(int damage);
	virtual int GetDamage();

	void SetTotalDamage(int total);
	virtual int GetTotalDamage();

	void SetTotalDefence(int total);
	virtual int GetTotalDefence();

	void SetDefence(int defence);
	virtual int GetDefence();

	void SetLevel(int level);
	int GetLevel();

	void SetExe(int exe);
	virtual int GetExe();

	void SetMaxExe(int maxExe);
	int GetMaxExe();

	virtual void SetAddExe(int exe);
	virtual void beAttacked(int damage);
	void ChangeHp(int hp);

	virtual void ToString();
};

