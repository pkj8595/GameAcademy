#include "Shop.h"

Shop::Shop()
{
}

Shop::~Shop()
{
}

void Shop::itemSetUp()
{
	tagItemInfo armor1;
	armor1.itemKind = ITEM::ITEM_ARMOR;
	armor1.name = "û����";
	armor1.description = "û������";
	armor1.price = 100;
	armor1.attribute = 50;
	armor1.count = 1;
	m_vItem.push_back(armor1);

	tagItemInfo armor2;
	armor2.itemKind = ITEM::ITEM_ARMOR;
	armor2.name = "�������";
	armor2.description = "����̴�";
	armor2.price = 100;
	armor2.attribute = 50;
	armor2.count = 1;
	m_vItem.push_back(armor2);

	tagItemInfo weapon1;
	weapon1.itemKind = ITEM::ITEM_WEAPON;
	weapon1.name = "����";
	weapon1.description = "��������?";
	weapon1.price = 200;
	weapon1.attribute = 100;
	weapon1.count = 1;
	m_vItem.push_back(weapon1);

	tagItemInfo weapon2;
	weapon2.itemKind = ITEM::ITEM_WEAPON;
	weapon2.name = "������ ���� ��";
	weapon2.description = "��������?";
	weapon2.price = 500;
	weapon2.attribute = 200;
	weapon2.count = 1;
	m_vItem.push_back(weapon2);

}

int Shop::itemOutput(const int num)
{
	int itemCount = 0;
	m_viItem = m_vItem.begin();

	for (m_viItem; m_viItem != m_vItem.end(); ++m_viItem)
	{
		//������ ���� ������ continue;
		if (m_viItem->itemKind != static_cast<ITEM>(num))continue;

		std::cout << "=================" << std::endl;
		std::cout << "������ ��ȣ : " << ++itemCount << std::endl;
		std::cout << "�̸� : " << m_viItem->name << std::endl;
		std::cout << "���� : " << m_viItem->price << std::endl;
		std::cout << "�ɷ�ġ : " << m_viItem->attribute << std::endl;
		std::cout << "���� : " << m_viItem->description << std::endl;
		std::cout << "���� : ";
		(m_viItem->count > 0) ? std::cout << m_viItem->count << std::endl : std::cout << "sold out" << std::endl;
		std::cout << "=================" << std::endl;
	}

	return itemCount;
}

tagItemInfo Shop::buyItem(const int itemKind, const int num, int & gold)
{
	tagItemInfo buyItem;
	buyItem.itemKind = ITEM::ITEM_EMPTY;
	int itemCount = 0;
	m_viItem = m_vItem.begin();

	for (m_viItem; m_viItem != m_vItem.end(); ++m_viItem)
	{
		if (m_viItem->itemKind != static_cast<ITEM>(itemKind))continue;

		if (++itemCount == num)
		{
			if (gold >= m_viItem->price)
			{
				if (m_viItem->count > 0)
				{
					std::cout << m_viItem->name << "�� " << m_viItem->price << "�� �����ϼ̽��ϴ�." << std::endl;
					gold -= m_viItem->price;
					m_viItem->count--;
					buyItem = *m_viItem;
				}
				else
				{
					std::cout << "���ȸ� ����" << std::endl;
				}
			}
			else
			{
				std::cout << "�� ������" << std::endl;
			}
		}
	}

	return buyItem;
}

void Shop::addItem(tagItemInfo item)
{
	bool isNewItem = true;
	m_viItem = m_vItem.begin();

	for (m_viItem; m_viItem != m_vItem.end(); ++m_viItem)
	{
		if (m_viItem->itemKind != item.itemKind)continue;

		if (m_viItem->name.compare(item.name) == 0)
		{
			m_viItem->count++;
			isNewItem = false;
			break;
		}
	}
	if (isNewItem == true)
	{
		m_vItem.push_back(item);
	}
}
