#pragma once
#include "Story.h"

Story::Story()
{
	srand(time(NULL));
	_random = rand() % 10 +1;
}

void Story::StartStory()
{
	cout << "������ ���� �˴ϴ�...." << endl;
	ClickForNextStory();
	cout << " IT ȸ�� �� ���θ� �޸��� �ִٴ� ��������� �������� �հ��� �ߴ�.\n ������ ���� ù ��� ��! ����� ���ϴ�." << endl;
	ClickForNextStory();
	cout << " ���� ������� ȸ�翡 ���� ���� �̻��� ����� ���δ�... \n����� ����� �����鼭 �ǽ� ���°� ����� �ƴ� �� �ϴ�.\n ���� ������ �ɱ�? ȸ�翡 ������?" << endl;
	ClickForNextStory();
	cout << " ������ �����Ǵ� ��ü�� ���� ������ �ٰ����� �� �ʹ���..\n ���� ���� ���� ���ӷ����� �޷��´�. \n ����?\n ���ڱ� �� ���� ������ ����. ���� �����Ѱǰ�?" << endl;
	ClickForNextStory();
	cout << " �ν��� �Ҹ��� ����´�.. \n���Ⱑ �����? \n�Ʊ� ���� ���� ��ġ�� �ͱ��� ��ﳪ...." << endl;
	ClickForNextStory();
	cout << " ??? : �̺� ����! ȸ�翡 �������� ���������� ���� �ؾ��� \n����ؼ� �Ḹ �� �ڰ��־�!? \n��븮 �� ȸ�� ���ٿ��״ϱ� \n���� �� ����ġ�� �� ������ �˾Ҿ�?\n ??: �� �˰ڽ��ϴ�." << endl;
	ClickForNextStory();
	cout << " �̻��� ��ȭ �Ҹ��� ��� ������ ������ �� ���� û�������� �������ִ�. \nù ��ٳ����� �̷� ���̶��... �����ľ��Ѵ�." << endl;
	ClickForNextStory();
	cout << " ��븮��� ����� �� �տ��� �����ִ�.\n �� ƴ�� û�������� Ǯ�� ������ �������� ����\n �� ����� ���� �����ƴ�."  << endl;
	ClickForNextStory();

}

int Story::SelectWay()
{
	cout << " ���� ����? \n (1. ���� , 2. ������)" << endl;
	cin >> _selectKey;
	if (!(_selectKey ==1 ||_selectKey ==2)) 
	{
		cout << "�ٽ� �����Ͻʽÿ�." << endl;
		SelectWay();
	}
	ClickForNextStory();

	return _selectKey;
}

//void Story::BattleStr(Player * offense, Monster * deffense)
//{
//	system("cls");
//
//	_random = (rand() % 10) + 1;
//
//	int oneTurn = (offense->GetDamage()) - (deffense->GetDefence());
//	int twoTurn = (deffense->GetDamage()) - (offense->GetDefence());
//
//	cout << "============================================" << endl;
//
//	//�÷��̾� ����
//	if(_random < 8)
//	{
//		cout << offense->GetName() << "�� " << deffense->GetName() << " ���� " << oneTurn << " �� ���ظ� �־���." << endl;
//		deffense->beAttacked(oneTurn);
//	}
//	else 
//	{
//		cout << deffense->GetName() << "�� " << offense->GetName() << "�� ������ ȸ���ߴ�." << endl;
//	}
//	
//	_random = (rand() % 10) + 1;
//
//	//���� ����
//	if (_random < 8) 
//	{
//		cout << deffense->GetName() << "�� " << offense->GetName() << " ���� " << twoTurn << " �� ���ظ� �־���." << endl;
//		offense->beAttacked(twoTurn);
//	}
//	else 
//	{
//		cout << offense->GetName() << "�� " << deffense->GetName() << "�� ������ ȸ���ߴ�." << endl;
//	}
//	cout << "============================================" << endl;
//	
//}

void Story::BattleStr(Unit * offense, Unit * deffense)
{
	system("cls");

	_random = (rand() % 10) + 1;

	int oneTurn = (offense->GetTotalDamage()) - (deffense->GetTotalDefence());
	int twoTurn = (deffense->GetTotalDamage()) - (offense->GetTotalDefence());

	cout << "============================================" << endl;

	//�÷��̾� ����
	if (_random < 8)
	{
		cout << offense->GetName() << "�� " << deffense->GetName() << " ���� " << (oneTurn<0 ? 1 : oneTurn) << " �� ���ظ� �־���." << endl;
		deffense->beAttacked(oneTurn);
	}
	else
	{
		cout << deffense->GetName() << "�� " << offense->GetName() << "�� ������ ȸ���ߴ�." << endl;
	}

	_random = (rand() % 10) + 1;

	//���� ����
	if (_random < 8)
	{
		cout << deffense->GetName() << "�� " << offense->GetName() << " ���� " << (twoTurn < 0 ? 1 : twoTurn) << " �� ���ظ� �־���." << endl;
		offense->beAttacked(twoTurn);
	}
	else
	{
		cout << offense->GetName() << "�� " << deffense->GetName() << "�� ������ ȸ���ߴ�." << endl;
	}
	cout << "============================================" << endl;

}


//void Story::BattleStr(Unit *offense, Unit *deffense)
//{
//	//todo ���� �ý��� ����
//	cout << offense->GetName()<< "�� " << deffense->GetName() << "����" << (offense->GetDamage())-(deffense->GetDefence()) << "�� ���ظ� �־���." << endl;
//}
//
//void Story::Battle(Player * player, Monster * monster)
//{
//	system("cls");
//	cout << monster->GetName() << "���� ������ ���۵˴ϴ�." << endl;
//	ClickForNextStory();
//
//	do 
//	{
//		monster->ToString();
//		player->ToString();
//
//		cout << "==================================" << endl;
//		cout << "��� �ؾ����� ? \n 1. ���� " << endl;
//		cin >> _selectKey;
//
//		switch (_selectKey)
//		{
//		case 1:
//			BattleStr(player, monster);
//			break;
//		default:
//			cout << "�ٽ� ������ �ֽʽÿ�" << endl;
//			break;
//		}
//
//		if ((player->GetIsDie())) 
//		{
//			player->ToString();
//			break;
//		}
//		else if ((monster->GetIsDie())) 
//		{
//			monster->ToString();
//			cout << monster->GetName() << "�� ó���߽��ϴ�." << endl;
//			player->SetAddExe(monster->GetExe());
//			break;
//		}
//		ClickForNextStory();
//
//	} while (true);
//
//	ClickForNextStory();
//	system("cls");
//
//}


void Story::Battle(Unit * player, Unit * monster)
{
	system("cls");
	cout << monster->GetName() << "���� ������ ���۵˴ϴ�." << endl;
	ClickForNextStory();

	do
	{
		monster->ToString();
		player->ToString();

		cout << "==================================" << endl;
		cout << "��� �ؾ����� ? \n 1. ���� " << endl;
		cin >> _selectKey;

		switch (_selectKey)
		{
		case 1:
			BattleStr(player, monster);
			break;
		default:
			cout << "�ٽ� ������ �ֽʽÿ�" << endl;
			break;
		}

		if ((player->GetIsDie()))
		{
			player->ToString();
			break;
		}
		else if ((monster->GetIsDie()))
		{
			monster->ToString();
			cout << monster->GetName() << "�� ó���߽��ϴ�." << endl;
			player->SetAddExe(monster->GetExe());
			break;
		}
		ClickForNextStory();

	} while (true);

	ClickForNextStory();
	system("cls");

}


void Story::BadEnd()
{
	cout << "�� ���� ����������. �����ǰ�? \n (��忣��)" << endl;
	
}

void Story::ClearEnd()
{
	cout << "���� 1�� ������ ���� �߷� á��.\n�۾�����~~~~\nŻ�⿡ �����ϴٴ�....\n���� ������ ���� �ع氨�� �� ���� �����´�." << endl;
	ClickForNextStory();
	cout << "������� ���ݾ� ��������.\n���� ������ ���� ���� �Ծ�߰ڴ� \n ( GAME CLEAR )" << endl;
}


void Story::Story1()
{
	cout << "��... ������ ó�� �ߴ�. \n�ϴ� �� ������ ������ �ߴµ�\n�����ʰ� ���ʱ��� ���δ�." << endl;
}

//���ʱ�� ������
void Story::Story1_1()
{
	cout << "���ɽ����� ���� ���ͼ� ���� ��� �Ȱ� �ִ�. \n�� �ǹ� ���ο��� ����� ���� �г��� �Ҹ��� ������ �鸮�� ���� ����\n�� ������ Ʋ���� ���� ���ϴ�. ���� ����� �ִ�..��....." << endl;
	ClickForNextStory();
	cout << "??? : �ʴ� ������? ���� �ͼ�ġ ������? �����ΰ�? " << endl <<  endl;
	cout << "���ڱ� �鸮�� ��Ҹ��� �ϴ� ���� �ڵ� �ȵ��ƺ��� �ٱ� �����ߴ�." << endl;
	ClickForNextStory();

}

//������ ��� ������
void Story::Story1_2()
{
	cout << "���������� �����̴� ���� ���������Ͱ� �� �տ� ���δ�. \n���� ���������͸� Ż�� ��� ��������� \n�̳� �׸��ΰ� ����� ã��� �ߴ�. " << endl;
	ClickForNextStory();
	cout << "��~~ "<< endl;
	cout << "���������Ͱ� ������ �����ϰ�...\n�׿� ���ÿ� �ڿ��� ���ԼҸ��� �鸰��. \n���� �ϴ� ���ӷ����� �پ���." << endl;
	ClickForNextStory();

}

void Story::Story_3()
{
	cout << "�����߾�... �Ҹ��� �ȵ鸮�� �ɷ� ���� ������ ������ ���ϴ�. \n������ ���� �� �ְ���?" << endl;
	ClickForNextStory();
	cout << "...�� ���� �̻��� �ǰ�? \n�� �տ� �ִ� ���Ǳ��� ���빰�� ���� \n������ �̷� ������ ���� ������? . " << endl;
	ClickForNextStory();
}


//
//void Story::Story_Shop(GameItem *gameItem)
//{
//	cout << "�� ���� ���Ǳ� LED ���ǿ� ȯ���Ѵٴ� ������ �����ִ�.\n���ϰ� ������ ����." << endl;
//	cout << "==========================================" << endl;
//	for (int i =0; i<GAME_ITEM_COUNT; i++)
//	{
//		(gameItem)->ToString();
//		(gameItem)++;
//	}
//	cout << "==========================================" << endl;
//
//}


//todo : ���Ǳ� ��ġ�� �Ϸ�
GameItem* Story::Story_Shop(GameItem **gameItem , Player* player)
{
	
	cout << "���ž��� ���� ��Ŵٺ��� �� ���� ���Ǳ� LED ���ǿ� \"ȯ���մϴ�.\"(��)��� ������ �����ִ�.\n���ϰ� ������ ����." << endl;
	cout << "==========================================" << endl;
	/*for (int i = 0; i < GAME_ITEM_COUNT; i++)
	{
		if (*gameItem != nullptr)
		{
			(*gameItem)->ToString();
			(*gameItem)++;
		}
	}
	cout << "==========================================" << endl;
	cout << "�ƽ��� �������� �߱��� ���ȴ�." << endl;
	*/
	
	//�� ������δ� �Ѿ� �´�
	for (int i = 0; i < GAME_ITEM_COUNT; i++)
	{
		gameItem[i]->ToString();
	}
	
	cout << "==========================================" << endl;
	

	for (int i = 0; i < GAME_ITEM_COUNT; i++)
	{
		cout << i<< ". " <<gameItem[i]->GetName()<< " ";
	}
	cout << GAME_ITEM_COUNT + 1 << ". ���� �ʴ´�." << endl;
	cout << "==========================================" << endl;

	while (true) 
	{
		cout << "� ���� ���?" << endl;
		cout << "������ : " << player->GetGold() << endl;
		cin >> _selectKey;

		//�Է� ����ó��
		if (_selectKey < 0 || _selectKey > (GAME_ITEM_COUNT + 2))
		{
			cout << "�Է��� �߸��ϼ̽��ϴ�. �ٽ� �Է����ּ���" << endl;
			ClickForNextStory();
		}
		else 
		{
			if (_selectKey == GAME_ITEM_COUNT + 1)
			{
				cout << "�ƽ��� �������� �߱��� ���ȴ�." << endl;
				ClickForNextStory();
				return nullptr;
			}
			else
			{
				//�������� �� �� �ִ��� �ݾ� üũ 
				if ((player->GetGold()) >= (gameItem[_selectKey]->GetPrice()))
				{
					int temp = -1 * (gameItem[_selectKey]->GetPrice());
					player->ChangeGold(temp);
					cout << "������ : " << (player->GetGold()) << endl;
					cout << gameItem[_selectKey]->GetName() << "�� ���." << endl;
					ClickForNextStory();
					return gameItem[_selectKey];
				}
				else 
				{
					cout << "�ݾ��� �����մϴ�." << endl;
				}
			}
		}
	}
	
}

void Story::Story_3_1()
{
	cout << "����...������ �����ƴ�. \n���ž��� ����ġ�� ���� ���տ� ����� ������." << endl;
	ClickForNextStory();
	cout << "����� ������Ÿ�� ������ 1������ ��������.\n�ͼ��� ��Ҹ��� ����´�." <<endl;
	ClickForNextStory();
	cout << "??? : ��� �׷��� �������� �׷���? ũũũ\n�� ���� ������ ���ư� �� �����Ŷ�� ������������!" << endl;
	ClickForNextStory();

}

void Story::ClickForNextStory()
{
	cout << "\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
}


