#pragma once
#include"shop.h"

enum class LOCATION
{
	LOCATION_SHOP = 1,
	LOCATION_INVEN

};

class MainGame
{
private:
	Shop* _shop;
	LOCATION _location;
	int _money;
	int _selectNum;

public:
	MainGame();
	~MainGame();

	void setLocation(int number);
	void setMainPage();
	void setShopPage();
	void setInvenPage();

};

