#pragma once
#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	Unit::SetName("개발 지망생 하뇽이");
	Unit::SetMaxHp(100);
	Unit::SetHp(100);
	Unit::SetDamage(15);
	Unit::SetDefence(5);
	Unit::SetLevel(1);
	_gold = 1000;
	_playerItem = nullptr;
}

Player::~Player()
{

}

void Player::SetGold(int gold)
{
	_gold = gold;
}

void Player::ChangeGold(int gold)
{
	_gold += gold;
}

int Player::GetGold()
{
	return _gold;
}


string Player::GetName()
{
	return Unit::GetName();
}

bool Player::GetIsDie()
{
	return Unit::GetIsDie();
}

int Player::GetDamage()
{
	return Unit::GetDamage();
}

int Player::GetTotalDamage()
{
	int temp = 0;
	if (_playerItem != nullptr)
	{
		temp = (Unit::GetDamage()) + (_playerItem->GetDamage());
		Unit::SetTotalDamage(temp);
		return temp;
	}
	else
	{
		return Unit::GetDamage();
	}
}

int Player::GetDefence()
{
	return Unit::GetDefence();
}

int Player::GetTotalDefence()
{
	int temp = 0;
	if (_playerItem != nullptr)
	{
		temp = (Unit::GetDefence()) + (_playerItem->GetDefence());
		Unit::SetTotalDefence(temp);
		return temp;
	}
	else
	{
		return Unit::GetDefence();
	}
}

int Player::GetExe()
{
	return Unit::GetExe();
}

void Player::beAttacked(int damage)
{
	if (GetTotalDefence() > damage) {
		damage = 1;
	}
	Unit::beAttacked(damage);
}


void Player::SetAddExe(int exe)
{
	Unit::SetAddExe(exe);
	if (Unit::IsLevelUp())
	{
		cout << "\n"<< Unit::GetName() << "가 레벨업을 했습니다." << endl;
		ToString();
	}
}

void Player::ToString()
{
	Unit::ToString();
	if (_playerItem != nullptr ) 
	{
		cout << "소지 아이템 : "<< _playerItem->GetName() <<"의 효과로 데미지가 "<< _playerItem->GetDamage()<< "만큼 상승합니다."<<endl;
		cout << "소지 아이템 : "<< _playerItem->GetName() <<"의 효과로 방어력이 "<< _playerItem->GetDefence()<< "만큼 상승합니다."<<endl;
		
	}
}

void Player::SetItem(GameItem * item)
{
	_playerItem = item;
}

void Player::RemoveItem()
{
	_playerItem = nullptr;
}

GameItem * Player::GetItem()
{
	return nullptr;
}
