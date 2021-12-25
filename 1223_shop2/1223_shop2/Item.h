#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>


enum class ITEM
{
	ITEM_EMPTY,
	ITEM_ARMOR,
	ITEM_WEAPON,
	ITEM_POTION,
	ITEM_SOLDOUT
};

struct tagItemInfo
{
	ITEM itemKind;
	std::string name;
	std::string description;
	int attribute;
	int price;
	int count;
};