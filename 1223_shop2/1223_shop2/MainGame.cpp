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
	std::cout << "=============��ġ=============" << std::endl;
	std::cout << "1. ���� 2. �κ� [�Ǹ�] 3. �κ�[����]" << std::endl;
	std::cin >> m_selectNum;
	SetLocation(m_selectNum);

}

void MainGame::SetShowPage()
{
	while (true)
	{
		system("cls");
		std::cout << "============����===========" << std::endl;
		std::cout << "1. �� 2. ���� 3.�Ǽ� 4.����" << std::endl;
		std::cout << "����ȭ������ ������ �ʹٸ� 0��" << std::endl;

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
		std::cout << "���� �ݾ� : " << m_gold << std::endl;
		std::cout << "������ ������ ��ȣ �Է�" << std::endl;
		std::cout << "itemCount" << itemCount << std::endl;
		std::cout << "==== ���� �޴��� ������ ���ϸ� 0��===" <<
			std::endl;

		std::cin >> m_selectNum;

		if (m_selectNum == 0)break;
		else if (m_selectNum<0 || m_selectNum > itemCount)
		{
			std::cout << "�߸��� �Է�" << std::endl;
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
		std::cout << "==========�κ��丮=========" << std::endl;
		std::cout << "���� ��� : " << m_gold << std::endl;
		std::cout << "�Ǹ��� ������ ��ȣ �Է�" << std::endl;
		std::cout << "itemCount" << itemCount << std::endl;
		std::cout << "====���� �޴��� ���� ���ϸ� 0��" << std::endl;

		std::cin >> m_selectNum;

		if (m_selectNum == 0)
		{
			SetMainPage();
			break;
		}
		else if ((m_selectNum < 0) || m_selectNum > itemCount)
		{
			std::cout << "�߸��� �Է�" << std::endl;
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

		std::cout << "==========�κ��丮=========" << std::endl;
		std::cout << "���� ��� : " << m_gold << std::endl;
		std::cout << "itemCount : " << itemCount << std::endl;
		std::cout << "1.����  2.�������" << std::endl;
		std::cout << "====���� �޴��� ���� ���ϸ� 0��" << std::endl;
		std::cin >> selectLocationTemp;

		if (selectLocationTemp == 0)
		{
			SetMainPage();
			break;
		}
		else if ((selectLocationTemp < 1) || selectLocationTemp > 2)
		{
			std::cout << "�߸��� �Է�" << std::endl;
		}
		else
		{
			if (selectLocationTemp == 1)
			{
				std::cout << "������ ������ ��ȣ �Է�" << std::endl;
				std::cin >> m_selectNum;
				if ((m_selectNum < 0) || m_selectNum > itemCount)
				{
					std::cout << "�߸��� �Է�" << std::endl;
				}
				else
				{
					m_player->equipItem(m_selectNum);
				}

			}
			else
			{
				std::cout << "1.������ 2.��������" << std::endl;
				std::cin >> m_selectNum;
				if (m_selectNum == 1 || m_selectNum == 2)
				{
					m_player->takeOffItem(m_selectNum);
				}
				else
				{
					std::cout << "�߸��� �Է�" << std::endl;
				}

			}
		}
		Sleep(1000);
	}

}
