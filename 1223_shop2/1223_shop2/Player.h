#pragma once
#include "Unit.h"
#include "Inventory.h"

class Player :public Unit, public Inventory
{
public:
	Player();
	~Player();

	void initPlayer();
	void ShowState();
};

