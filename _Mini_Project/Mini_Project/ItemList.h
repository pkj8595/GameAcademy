#pragma once
#include "stdafx.h"
#include "GameItem.h"

class ItemList
{
private:
	int _allItemSpaceCount;
	int _currentItemCount;
	GameItem** _gameItemList;

public:
	ItemList(int allItemSpaceCount);
	~ItemList();

	void addItem(GameItem* gameitem);
	void ItemListInfo();

};

