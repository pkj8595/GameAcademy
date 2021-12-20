#include "ItemList.h"

ItemList::ItemList(int allItemSpaceCount) : _allItemSpaceCount(allItemSpaceCount)
{
	_gameItemList = {nullptr};
	//아이템 공간 할당
	_gameItemList = new GameItem*[allItemSpaceCount];
	_currentItemCount = 0;
}

ItemList::~ItemList()
{
}

//아이템 넣기
void ItemList::addItem(GameItem* gameitem)
{
	_gameItemList[_currentItemCount] = gameitem;
	_currentItemCount++;
}

//아이템 정보 출력
void ItemList::ItemListInfo()
{
	for (int i = 0; i < _currentItemCount; i++) 
	{
		_gameItemList[i]->ToString();
	}
}


