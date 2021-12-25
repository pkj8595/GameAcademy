#pragma once
#include "stdafx.h"

struct STItem
{
	int number;
	//string name;
	string name;
	int damage;
	int defence;
	int price;
	bool isExpendables;

};

//todo : 아이템 만들어야함
class GameItem 
{

private:
	int _number;
	string _name;
	int _damage;
	int _defence;
	int _price;
	bool _isExpendables;



public :
	void SetNumber(int number);
	int GetNumber();

	void SetName(string name);
	string GetName();

	void SetDamage(int damage);
	int GetDamage();

	void SetDefence(int defence);
	int GetDefence();

	void SetPrice(int price);
	int GetPrice();

	void ToString();

	GameItem();
	GameItem(int number, string name, int damage, int defence, int price, bool isExpendables);
	GameItem(STItem *gameItem);
	~GameItem();

};