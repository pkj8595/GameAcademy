#include "Shop.h"

Shop::Shop()
{
}

Shop::~Shop()
{
}

void Shop::itemSetup()
{
	/*
	ITEM_WEAPON = 1,
	ITEM_ARMOR,
	ITEM_ACCERSORY,
	ITEM_POTION,
	ITEM_END,
	*/

	tagItemInfo weapon1;
	weapon1.itemNum = 0;
	weapon1.itemKind = ITEM::ITEM_WEAPON;
	weapon1.kindNum = 1;
	weapon1.name = " �����";
	weapon1.description = "����� ���� 1���̶��";
	weapon1.ability = 30;
	weapon1.count = 1;
	weapon1.price = 3000;

	_vItem.push_back(weapon1);

	tagItemInfo weapon2;
	weapon2.itemNum = 1;
	weapon2.itemKind = ITEM::ITEM_WEAPON;
	weapon2.kindNum = 2;
	weapon2.name = " ������";
	weapon2.description = "��Ÿ ??? �� ���� ����.";
	weapon2.ability = 30;
	weapon2.count = 1;
	weapon2.price = 3000;

	_vItem.push_back(weapon2);

	tagItemInfo armor1;
	armor1.itemNum = 2;
	armor1.itemKind = ITEM::ITEM_ARMOR;
	armor1.kindNum = 1;
	armor1.name = "������ û����";
	armor1.description = "�������� �Ȱ�����";
	armor1.ability = 10;
	armor1.count = 1;
	armor1.price = 2000;

	_vItem.push_back(armor1);

	tagItemInfo acc1;
	acc1.itemNum = 3;
	acc1.itemKind = ITEM::ITEM_ACCERSORY;
	acc1.kindNum = 1;
	acc1.name = "�ڱͰ���";
	acc1.description = "�Ϳ��ɸ� �Ͱ��� �ڿ� �ɸ� �ڰ���";
	acc1.ability = 10;
	acc1.count = 1;
	acc1.price = 50;

	_vItem.push_back(acc1);

	tagItemInfo acc2;
	acc2.itemNum = 4;
	acc2.itemKind = ITEM::ITEM_ACCERSORY;
	acc2.kindNum = 2;
	acc2.name = "��Ÿ�� �Ͱ���";
	acc2.description = "�Ͱ��̰� �ҿ� Ÿ�� �ִ�.";
	acc2.ability = 20;
	acc2.count = 2;
	acc2.price = 3000;

	_vItem.push_back(acc1);

	tagItemInfo potion1;
	potion1.itemNum = 5;
	potion1.itemKind = ITEM::ITEM_POTION;
	potion1.kindNum = 1;
	potion1.name = "ü�� ����";
	potion1.description = "ġ�Ḧ �ϴ°��� ���Ϸ��� �������...";
	potion1.ability = 20;
	potion1.count = 2;
	potion1.price = 500;

	_vItem.push_back(potion1);

	tagItemInfo potion2;
	potion2.itemNum = 6;
	potion2.itemKind = ITEM::ITEM_POTION;
	potion2.kindNum = 2;
	potion2.name = "���� ����";
	potion2.description = "������ ȸ��������...";
	potion2.ability = 20;
	potion2.count = 2;
	potion2.price = 500;

	_vItem.push_back(potion2);

}

void Shop::itemOutput(int itemNum)
{
	for (_viItem = _vItem.begin(); _viItem != _vItem.end(); ++_viItem)
	{
		if (_viItem->itemKind != static_cast<ITEM>(itemNum))continue;

		cout << "=============����=============" << endl;
		cout << _viItem->kindNum << "�� ��ǰ " << endl;
		cout << "������ �̸� : " << _viItem->name << endl;
		cout << "������ ���� : " << _viItem->ability << endl;
		cout << "������ ���� : " << _viItem->price << endl;
		cout << "������ ���� : " << _viItem->count << endl;
		cout << "������ ���� : " << _viItem->description << endl;
	}

	//for (auto iter = _vItem.begin(); iter != _vItem.end(); ++iter) 
	//{
	//	if (_viItem->itemKind != static_cast<ITEM>(itemNum))continue;
	//	//�ݺ���
	//}


	//for (auto &i : _vItem) 
	//{
	//	if (i.itemKind != static_cast<ITEM>(itemNum))continue;
	//	//�ݺ���
	//}


}

void Shop::BuyItem(int itemKind, int& money)
{
	int indexTemp = -1;

	cout << "0.�ٸ� ��ǰ ����" << endl;
	cout << "================\n��ǰ�� ��ȣ�� �������ֽʽÿ�" << endl;
	cin >> _selectItemNum;

	if (_selectItemNum == 0)
	{
		return;
	}

	//������ ���� ã��
	for (_viItem = _vItem.begin(); _viItem != _vItem.end(); ++_viItem)
	{
		if (static_cast<int>(_viItem->itemKind) == itemKind)
		{
			if (_selectItemNum == _viItem->kindNum)
			{
				indexTemp = _viItem->itemNum;
				break;
			}
		}
	}


	//����ó��
	if (money < _vItem[indexTemp].price)
	{
		cout << "�������� �����մϴ�." << endl;
		cout << "������ :" << money << endl;
		return;
	}
	else if (_vItem[indexTemp].count > 0)
	{
		_vItem[indexTemp].count--;
		money -= _vItem[indexTemp].price;
		cout << "������ :" << money << endl;
		return;
	}
	else
	{
		cout << "������ ������ ��� �����մϴ�." << endl;
	}

}
