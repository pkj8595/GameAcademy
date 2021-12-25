#pragma once
#include<iostream>
#include<vector>
#include<string>
//#include<forward_list> �ܹ��� ����Ʈ
//#include<list> ����� ����Ʈ

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

enum class ITEM
{
	ITEM_WEAPON = 1,
	ITEM_ARMOR,
	ITEM_ACCERSORY,
	ITEM_POTION,
	ITEM_END,

};

struct tagItemInfo
{
	int itemNum;
	ITEM itemKind;	//
	int kindNum;	//
	string name;
	string description;
	int ability;
	int price;
	int count;		//
};

class Shop
{
private:
	vector<tagItemInfo> _vItem;
	vector<tagItemInfo>::iterator _viItem;
	int _selectItemNum;

public:
	Shop();
	~Shop();

	void itemSetup();
	void itemOutput(int itemNum);
	void BuyItem(int itemKind, int& money);


};

