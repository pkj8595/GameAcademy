#include "MainGame.h"

MainGame::MainGame()
{
	m_shop = new Shop;
	m_shop->itemSetUp();
	m_player = new Player;
	m_gold = 10000;
	m_selectNum = 0;

	SetMainPage();
}

MainGame::~MainGame()
{
	delete m_shop;
	delete m_player;
}

void MainGame::SetLocation(const int num)
{
	switch (static_cast<LOCATION>(num))
	{
	case LOCATION::LOCATION_SHOP:
		SetShowPage();
		break;
	case LOCATION::LOCATION_SELL_INVENTORY:
		SetSellInventoryPage();
		break;
	case LOCATION::LOCATION_INVENTORY:
		SetInventoryPage();
		break;
	default:
		SetMainPage();
		break;
	}

}

void MainGame::SetMainPage()
{
	system("cls");
	std::cout << "=============위치=============" << std::endl;
	std::cout << "1. 상점 2. 인벤 [판매] 3. 인벤[장착]" << std::endl;
	std::cin >> m_selectNum;
	SetLocation(m_selectNum);

}

void MainGame::SetShowPage()
{
	while (true)
	{
		system("cls");
		std::cout << "============상점===========" << std::endl;
		std::cout << "1. 방어구 2. 무기 3.악세 4.포션" << std::endl;
		std::cout << "메인화면으로 나가고 싶다면 0번" << std::endl;

		std::cin >> m_selectNum;

		if (m_selectNum == 0)
		{
			SetMainPage();
			break;
		}
		else
		{
			SetShowItemPage(m_selectNum);
		}

	}
}

void MainGame::SetShowItemPage(const int itemKind)
{
	int itemCount = 0;
	while (true)
	{
		system("cls");
		itemCount = m_shop->itemOutput(itemKind);
		std::cout << "현재 금액 : " << m_gold << std::endl;
		std::cout << "구매할 아이템 번호 입력" << std::endl;
		std::cout << "itemCount" << itemCount << std::endl;
		std::cout << "==== 상점 메뉴로 나가길 원하면 0번===" <<
			std::endl;

		std::cin >> m_selectNum;

		if (m_selectNum == 0)break;
		else if (m_selectNum<0 || m_selectNum > itemCount)
		{
			std::cout << "잘못된 입력" << std::endl;
		}
		else
		{
			m_player->addItem(m_shop->buyItem(itemKind, m_selectNum, m_gold));
		}
		Sleep(1000);


	}
}

void MainGame::SetSellInventoryPage()
{
	int itemCount = 0;
	while (true)
	{
		system("cls");
		itemCount = m_player->showInventory();
		std::cout << "==========인벤토리=========" << std::endl;
		std::cout << "현재 골드 : " << m_gold << std::endl;
		std::cout << "판매할 아이템 번호 입력" << std::endl;
		std::cout << "itemCount" << itemCount << std::endl;
		std::cout << "====메인 메뉴로 가길 원하면 0번" << std::endl;

		std::cin >> m_selectNum;

		if (m_selectNum == 0)
		{
			SetMainPage();
			break;
		}
		else if ((m_selectNum < 0) || m_selectNum > itemCount)
		{
			std::cout << "잘못된 입력" << std::endl;
		}
		else
		{
			m_shop->addItem(m_player->sellItem(m_selectNum, m_gold));
		}
		Sleep(1000);

	}
}

void MainGame::SetInventoryPage()
{
	int itemCount = 0;
	int selectLocationTemp = 0;
	while (true)
	{
		system("cls");
		m_player->ShowState();
		itemCount = m_player->showInventory();

		std::cout << "==========인벤토리=========" << std::endl;
		std::cout << "현재 골드 : " << m_gold << std::endl;
		std::cout << "itemCount : " << itemCount << std::endl;
		std::cout << "1.장착  2.장비해제" << std::endl;
		std::cout << "====메인 메뉴로 가길 원하면 0번" << std::endl;
		std::cin >> selectLocationTemp;

		if (selectLocationTemp == 0)
		{
			SetMainPage();
			break;
		}
		else if ((selectLocationTemp < 1) || selectLocationTemp > 2)
		{
			std::cout << "잘못된 입력" << std::endl;
		}
		else
		{
			if (selectLocationTemp == 1)
			{
				std::cout << "장착할 아이템 번호 입력" << std::endl;
				std::cin >> m_selectNum;
				if ((m_selectNum < 0) || m_selectNum > itemCount)
				{
					std::cout << "잘못된 입력" << std::endl;
				}
				else
				{
					m_player->equipItem(m_selectNum);
				}

			}
			else
			{
				std::cout << "1.방어구해제 2.무기해제" << std::endl;
				std::cin >> m_selectNum;
				if (m_selectNum == 1 || m_selectNum == 2)
				{
					m_player->takeOffItem(m_selectNum);
				}
				else
				{
					std::cout << "잘못된 입력" << std::endl;
				}

			}
		}
		Sleep(1000);
	}

}
