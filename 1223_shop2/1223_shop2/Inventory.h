#pragma once
#include"Item.h"

class Inventory
{
protected:
	std::vector<tagItemInfo> m_vItem;
	std::vector<tagItemInfo>::iterator m_viItem;

	//ÀåÂø
	tagItemInfo m_equipArmor;
	tagItemInfo m_equipWeapon;



public:
	Inventory();
	~Inventory();

	int showInventory();

	void addItem(tagItemInfo item);

	tagItemInfo sellItem(const int num, int &gold);

	void equipItem(const int num);
	void takeOffItem(const int num);

	tagItemInfo getEquipArmor() { return m_equipArmor; }
	void setEquipArmor(tagItemInfo& armor){m_equipArmor = armor;}

	tagItemInfo getEquipWeapon() { return m_equipWeapon; }
	void setEquipWeapon(tagItemInfo& Weapon) { m_equipWeapon = Weapon; }



};

