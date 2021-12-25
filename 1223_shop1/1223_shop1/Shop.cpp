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
	weapon1.name = " 집행검";
	weapon1.description = "개비싼 무기 1억이라니";
	weapon1.ability = 30;
	weapon1.count = 1;
	weapon1.price = 3000;

	_vItem.push_back(weapon1);

	tagItemInfo weapon2;
	weapon2.itemNum = 1;
	weapon2.itemKind = ITEM::ITEM_WEAPON;
	weapon2.kindNum = 2;
	weapon2.name = " 광선검";
	weapon2.description = "스타 ??? 의 무기 좋다.";
	weapon2.ability = 30;
	weapon2.count = 1;
	weapon2.price = 3000;

	_vItem.push_back(weapon2);

	tagItemInfo armor1;
	armor1.itemNum = 2;
	armor1.itemKind = ITEM::ITEM_ARMOR;
	armor1.kindNum = 1;
	armor1.name = "찢어진 청바지";
	armor1.description = "동묘에서 팔고있음";
	armor1.ability = 10;
	armor1.count = 1;
	armor1.price = 2000;

	_vItem.push_back(armor1);

	tagItemInfo acc1;
	acc1.itemNum = 3;
	acc1.itemKind = ITEM::ITEM_ACCERSORY;
	acc1.kindNum = 1;
	acc1.name = "코귀걸이";
	acc1.description = "귀에걸면 귀걸이 코에 걸면 코걸이";
	acc1.ability = 10;
	acc1.count = 1;
	acc1.price = 50;

	_vItem.push_back(acc1);

	tagItemInfo acc2;
	acc2.itemNum = 4;
	acc2.itemKind = ITEM::ITEM_ACCERSORY;
	acc2.kindNum = 2;
	acc2.name = "불타는 귀걸이";
	acc2.description = "귀걸이가 불에 타고 있다.";
	acc2.ability = 20;
	acc2.count = 2;
	acc2.price = 3000;

	_vItem.push_back(acc1);

	tagItemInfo potion1;
	potion1.itemNum = 5;
	potion1.itemKind = ITEM::ITEM_POTION;
	potion1.kindNum = 1;
	potion1.name = "체력 포션";
	potion1.description = "치료를 하는건지 고문하려고 만든건지...";
	potion1.ability = 20;
	potion1.count = 2;
	potion1.price = 500;

	_vItem.push_back(potion1);

	tagItemInfo potion2;
	potion2.itemNum = 6;
	potion2.itemKind = ITEM::ITEM_POTION;
	potion2.kindNum = 2;
	potion2.name = "마나 포션";
	potion2.description = "마나는 회복되지만...";
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

		cout << "=============상점=============" << endl;
		cout << _viItem->kindNum << "번 상품 " << endl;
		cout << "아이템 이름 : " << _viItem->name << endl;
		cout << "아이템 성능 : " << _viItem->ability << endl;
		cout << "아이템 가격 : " << _viItem->price << endl;
		cout << "아이템 수량 : " << _viItem->count << endl;
		cout << "아이템 설명 : " << _viItem->description << endl;
	}

	//for (auto iter = _vItem.begin(); iter != _vItem.end(); ++iter) 
	//{
	//	if (_viItem->itemKind != static_cast<ITEM>(itemNum))continue;
	//	//반복문
	//}


	//for (auto &i : _vItem) 
	//{
	//	if (i.itemKind != static_cast<ITEM>(itemNum))continue;
	//	//반복문
	//}


}

void Shop::BuyItem(int itemKind, int& money)
{
	int indexTemp = -1;

	cout << "0.다른 상품 보기" << endl;
	cout << "================\n상품의 번호를 선택해주십시오" << endl;
	cin >> _selectItemNum;

	if (_selectItemNum == 0)
	{
		return;
	}

	//아이템 원소 찾기
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


	//예외처리
	if (money < _vItem[indexTemp].price)
	{
		cout << "소지금이 부족합니다." << endl;
		cout << "소지금 :" << money << endl;
		return;
	}
	else if (_vItem[indexTemp].count > 0)
	{
		_vItem[indexTemp].count--;
		money -= _vItem[indexTemp].price;
		cout << "소지금 :" << money << endl;
		return;
	}
	else
	{
		cout << "선택한 물건의 재고가 부족합니다." << endl;
	}

}
