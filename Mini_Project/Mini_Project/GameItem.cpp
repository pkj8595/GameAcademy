#include "GameItem.h"

GameItem::GameItem()
{

}

GameItem::GameItem(int number, string name, int damage, int defence, int price, bool isExpendables)
{
	_number = number;
	_name= name;
	_damage = damage;
	_defence = defence;
	_price = price;
	_isExpendables = isExpendables;
}

GameItem::GameItem(STItem * gameItem)
{
	_number = gameItem->number;
	_name = gameItem->name;
	_damage = gameItem->damage;
	_defence = gameItem->defence;
	_price = gameItem->price;
	_isExpendables = gameItem->isExpendables;
}


GameItem::~GameItem()
{

}

void GameItem::SetNumber(int number)
{
	_number = number;
}

int GameItem::GetNumber()
{
	return _number;
}

void GameItem::SetName(string name)
{
	_name = name;
}

string GameItem::GetName()
{
	return _name;
}

void GameItem::SetDamage(int damage)
{
	_damage = damage;
}

int GameItem::GetDamage()
{
	return _damage;
}

void GameItem::SetDefence(int defence)
{
	_defence = defence;
}

int GameItem::GetDefence()
{
	return _defence;
}

void GameItem::SetPrice(int price)
{
	_price = price;
}

int GameItem::GetPrice()
{
	return _price;
}

void GameItem::ToString()
{
	string str1 = (_isExpendables ? "�Ҹ�ǰ" : "���");
	cout << "================================================" << endl;
	cout << "		" <<_name << "		"<< str1 << endl;
	cout << "�ӵ�����				: " << _damage << endl;
	cout << "�Ӱ���					: " << _price << endl;
	cout << "================================================" << endl;
}
