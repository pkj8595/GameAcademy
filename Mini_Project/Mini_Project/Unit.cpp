#pragma once
#include "Unit.h"

bool Unit::IsLevelUp()
{
	if (_exe >= _maxExe) 
	{
		_level++;
		_exe -= _maxExe;
		_damage += 10;
		_maxExe += 10;
		
		return true;
	}
	else
	{
		return false;
	}
}

//hp ����
bool Unit::IsDead(int hp)
{
	if (_hp > _maxHp)
	{
		_hp = _maxHp;
	}
	else if (_hp <= 0)
	{
		_hp = 0;
		return true;
	}
	return false;


}

Unit::Unit() :_name("����"),
				_hp(100),
				_maxHp(100),
				_damage(10),
				_defence(0),
				_level(1),
				_exe(0),
				_maxExe(10),
				_isDie(false)
				//_unitSkillList(new Aclass_Skill*[Skill_TYPE_COUNT]),
				//_skillCount(0)
{


}

Unit::Unit(string name,int hp, int maxhp, int damage, int defence, int level, int exe)
{
	_name = name;
	_maxHp = maxhp;
	_hp = hp;
	_damage = damage;
	_defence = defence;
	_level = level;
	_exe = exe;
	_isDie = false;
	_totalDamage = _damage;
	_totalDefence = _defence;
	//_unitSkillList = new Aclass_Skill*[Skill_TYPE_COUNT];
	//_skillCount = 0;


}

Unit::~Unit()
{
}

/*
void Unit::AddUnitSkill(Aclass_Skill * skill)
{
	if (_skillCount >= Skill_TYPE_COUNT) 
	{
		cout << "��ų�� �� á���ϴ�." << endl;
	}
	else 
	{
		_unitSkillList[_skillCount] = skill;
		_skillCount++;
	}
}

void Unit::WhatIsSkill(int skillNum)
{
	switch (skillNum) 
	{
	case 1:
		Aclass_Skill* _unitSkilltemp = new Skill_Deffence();
		AddUnitSkill(_unitSkilltemp);
		break;
	}
}
*/


void Unit::SetName(string name)
{
	_name = name;
}

string Unit::GetName()
{
	return _name;
}

void Unit::SetIsDie(bool isDie)
{
	_isDie = isDie;
}

bool Unit::GetIsDie()
{
	return _isDie;
}

void Unit::SetHp(int hp)
{
	_hp = hp;
	_isDie =IsDead(_hp);

}

int Unit::GetHp()
{
	return _hp;
}

void Unit::SetMaxHp(int maxHp)
{
	_maxHp = maxHp;
}

int Unit::GetMaxHp()
{
	return _maxHp;
}

void Unit::SetDamage(int damage)
{
	_damage = damage;
}

//���ݽ� ������ ��������
int Unit::GetDamage()
{
	return _damage;
}

void Unit::SetTotalDamage(int total)
{
	_totalDamage = total;
}

int Unit::GetTotalDamage()
{
	return _totalDamage;
}

void Unit::SetTotalDefence(int total)
{
	_totalDefence = total;
}

int Unit::GetTotalDefence()
{
	return _totalDefence;
}

void Unit::SetDefence(int defence)
{
	_defence = defence;
}

int Unit::GetDefence()
{
	return _defence;
}

void Unit::SetLevel(int level)
{
	_level = level;
}

int Unit::GetLevel()
{
	return _level;
}

void Unit::SetAddExe(int exe)
{
	_exe += exe;
	//������ üũ 
}

void Unit::SetExe(int exe)
{
	_exe = exe;
}

int Unit::GetExe()
{
	return _exe;
}

void Unit::SetMaxExe(int maxExe)
{
	_maxExe = maxExe;
}

int Unit::GetMaxExe()
{
	return _maxExe;
}

//���� ���� �� 
void Unit::beAttacked(int damage)
{
	_hp -= damage;
	_isDie = IsDead(_hp);
}

void Unit::ChangeHp(int hp)
{
	
	_hp += hp;
	_isDie = IsDead(_hp);
}

void Unit::ToString()
{
	cout << "================================================" << endl;

	cout << _name << endl<<endl;
	cout << "���ִ� ü�� / ���� ü��			: " << _hp << "/"<<_maxHp << endl;
	cout << "�ӵ�����				: " << _damage << endl;
	cout << "�ӹ���				: " << _defence << endl;
	cout << "�ӷ���					: " << _level << endl;
	cout << "�Ӱ���ġ				: " << _exe << "/" << _maxExe << endl;
	cout << "================================================" << endl;
	/*
	if (_skillCount != 0) 
	{
		for (int i=0; i<_skillCount; i++) 
		{
			_unitSkillList[i]->ToString();
		}
	}
	*/
}
