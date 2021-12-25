#pragma once
#include "Player.h"
#include "Shop.h"

enum class LOCATION
{
	LOCATION_SHOP = 1,
	LOCATION_SELL_INVENTORY,
	LOCATION_INVENTORY
};

class MainGame
{
private:
	Shop* m_shop;
	Player* m_player;
	LOCATION m_loc;

	int m_gold;
	int m_selectNum;

public:
	MainGame();
	~MainGame();

	void SetLocation(const int num);
	void SetMainPage();
	void SetShowPage();
	void SetShowItemPage(const int itemKind);
	void SetSellInventoryPage();
	void SetInventoryPage();

};

