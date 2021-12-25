#include "Inventory.h"

Inventory::Inventory()
{
	tagItemInfo itemEmpty = { ITEM::ITEM_EMPTY,"","",0,0,0 };
	m_equipArmor = itemEmpty;
	m_equipWeapon = itemEmpty;
}

Inventory::~Inventory()
{
}

int Inventory::showInventory()
{
	int itemCount = 0;
	for (auto& i : m_vItem)
	{
		std::cout << "=======================" << std::endl;
		std::cout << "������ ��ȣ :" << ++itemCount << std::endl;
		std::cout << "�̸� :" << i.name << std::endl;
		std::cout << "���� :" << i.price << std::endl;
		std::cout << "�ɷ�ġ :" << i.attribute << std::endl;
		std::cout << "���� :" << i.description << std::endl;
		std::cout << "=======================" << std::endl;

	}
	return itemCount;
}

void Inventory::addItem(tagItemInfo item)
{
	if (item.itemKind != ITEM::ITEM_EMPTY) {
		m_vItem.push_back(item);
	}
}

tagItemInfo Inventory::sellItem(const int num, int & gold)
{
	tagItemInfo sellItem;
	m_viItem = m_vItem.begin() + (num - 1);
	sellItem = *m_viItem;
	m_vItem.erase(m_viItem);

	int sellPrice = sellItem.price / 2;

	std::cout << sellItem.name << "�� " << sellPrice << "�� �Ǹ��Ͽ����ϴ�." << std::endl;

	gold += sellPrice;


	return sellItem;
}

void Inventory::equipItem(const int num)
{
	tagItemInfo beforeItem;

	m_viItem = m_vItem.begin() + (num - 1);

	switch (m_viItem->itemKind)
	{
	case ITEM::ITEM_ARMOR:
		beforeItem = getEquipArmor();
		setEquipArmor(*m_viItem);
		m_vItem.erase(m_viItem);

		if (beforeItem.itemKind == ITEM::ITEM_ARMOR)
		{
			m_vItem.push_back(beforeItem);
		}
		break;
	case ITEM::ITEM_WEAPON:
		beforeItem = getEquipWeapon();
		setEquipWeapon(*m_viItem);
		m_vItem.erase(m_viItem);

		if (beforeItem.itemKind == ITEM::ITEM_WEAPON)
		{
			m_vItem.push_back(beforeItem);
		}
		break;
	default:
		break;
	}

}

void Inventory::takeOffItem(const int num)
{
	tagItemInfo beforeItem;
	tagItemInfo itemEmpty = { ITEM::ITEM_EMPTY,"","",0,0,0 };

	switch (static_cast<ITEM>(num))
	{
	case ITEM::ITEM_ARMOR:
		beforeItem = getEquipArmor();
		setEquipArmor(itemEmpty);
		if (beforeItem.itemKind == ITEM::ITEM_ARMOR)
		{
			m_vItem.push_back(beforeItem);
		}
		break;
	case ITEM::ITEM_WEAPON:
		beforeItem = getEquipWeapon();
		setEquipWeapon(itemEmpty);
		if (beforeItem.itemKind == ITEM::ITEM_WEAPON)
		{
			m_vItem.push_back(beforeItem);
		}
		break;
	default:
		break;
	}
}
