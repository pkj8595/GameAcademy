#include "ItemList.h"

ItemList::ItemList(int allItemSpaceCount) : _allItemSpaceCount(allItemSpaceCount)
{
	_gameItemList = {nullptr};
	//������ ���� �Ҵ�
	_gameItemList = new GameItem*[allItemSpaceCount];
	_currentItemCount = 0;
}

ItemList::~ItemList()
{
}

//������ �ֱ�
void ItemList::addItem(GameItem* gameitem)
{
	_gameItemList[_currentItemCount] = gameitem;
	_currentItemCount++;
}

//������ ���� ���
void ItemList::ItemListInfo()
{
	for (int i = 0; i < _currentItemCount; i++) 
	{
		_gameItemList[i]->ToString();
	}
}


