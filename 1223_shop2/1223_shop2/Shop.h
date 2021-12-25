#pragma once
#include "Item.h"

class Shop
{
private:
	std::vector<tagItemInfo>m_vItem;
	std::vector<tagItemInfo>::iterator m_viItem;

public:
	Shop();
	~Shop();


	void itemSetUp();
	int itemOutput(const int num);

	tagItemInfo buyItem(const int itemKind, const int num, int &gold);

	void addItem(tagItemInfo item);



};

