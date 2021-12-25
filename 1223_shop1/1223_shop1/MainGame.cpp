#include "MainGame.h"

MainGame::MainGame()
{
	_shop = new Shop;
	_shop->itemSetup();
	_money = 100000;
	_selectNum = 0;
	setMainPage(); //���� ������ ����

}

MainGame::~MainGame()
{
	delete _shop;
}

//
void MainGame::setLocation(int number)
{
	switch (static_cast<LOCATION>(number))
	{
	case LOCATION::LOCATION_SHOP:
		setShopPage();
		break;
	case LOCATION::LOCATION_INVEN:
		setInvenPage();
		break;
	}
}

void MainGame::setMainPage()
{
	cout << "======================" << endl;
	cout << "1.����		2.�κ��丮" << endl;
	cout << "======================" << endl;

	cin >> _selectNum;

	system("cls");
	setLocation(_selectNum);



}

void MainGame::setShopPage()
{
	while (true)
	{
		cout << "======================" << endl;
		cout << "1.����  2.��  3.�Ǽ�����  4.����" << endl;

		cin >> _selectNum;
		_shop->itemOutput(_selectNum);

		if (_selectNum != 0)
		{
			_shop->BuyItem(_selectNum, _money);
		}
	}
}

void MainGame::setInvenPage()
{
}
