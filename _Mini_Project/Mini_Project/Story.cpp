#pragma once
#include "Story.h"

Story::Story()
{
	srand(time(NULL));
	_random = rand() % 10 +1;
}

void Story::StartStory()
{
	cout << "게임이 시작 됩니다...." << endl;
	ClickForNextStory();
	cout << " IT 회사 중 선두를 달리고 있다는 ㅁㅁ기업에 인턴으로 합격을 했다.\n 오늘은 인턴 첫 출근 날! 기분이 묘하다." << endl;
	ClickForNextStory();
	cout << " 좋은 기분으로 회사에 들어가는 도중 이상한 사람이 보인다... \n흐느적 흐느적 걸으면서 피식 웃는게 사람은 아닌 듯 하다.\n 저건 좀비같은 걸까? 회사에 좀비라니?" << endl;
	ClickForNextStory();
	cout << " 좀비라고 추정되는 물체가 점점 나에게 다가오는 듯 싶더니..\n 좀비가 나를 향해 전속력으로 달려온다. \n 어어엇?\n 갑자기 눈 앞이 깜깜해 졌다. 나는 기절한건가?" << endl;
	ClickForNextStory();
	cout << " 부스럭 소리가 들려온다.. \n여기가 어디지? \n아까 좀비가 나를 덮치는 것까진 기억나...." << endl;
	ClickForNextStory();
	cout << " ??? : 이봐 신입! 회사에 들어왔으면 정신차리고 일을 해야지 \n출근해서 잠만 퍼 자고있어!? \n김대리 나 회의 갔다올테니까 \n신입 안 도망치게 잘 감시해 알았어?\n ??: 예 알겠습니다." << endl;
	ClickForNextStory();
	cout << " 이상한 대화 소리를 듣고 정신을 차리니 내 몸이 청테이프로 감겨져있다. \n첫 출근날부터 이런 일이라니... 도망쳐야한다." << endl;
	ClickForNextStory();
	cout << " 김대리라는 사람이 내 앞에서 졸고있다.\n 그 틈에 청테이프를 풀고 문으로 나가려는 순간\n 그 사람과 눈이 마추쳤다."  << endl;
	ClickForNextStory();

}

int Story::SelectWay()
{
	cout << " 어디로 갈까? \n (1. 왼쪽 , 2. 오른쪽)" << endl;
	cin >> _selectKey;
	if (!(_selectKey ==1 ||_selectKey ==2)) 
	{
		cout << "다시 선택하십시오." << endl;
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
//	//플레이어 어택
//	if(_random < 8)
//	{
//		cout << offense->GetName() << "가 " << deffense->GetName() << " 에게 " << oneTurn << " 의 피해를 주었다." << endl;
//		deffense->beAttacked(oneTurn);
//	}
//	else 
//	{
//		cout << deffense->GetName() << "가 " << offense->GetName() << "의 공격을 회피했다." << endl;
//	}
//	
//	_random = (rand() % 10) + 1;
//
//	//몬스터 어택
//	if (_random < 8) 
//	{
//		cout << deffense->GetName() << "가 " << offense->GetName() << " 에게 " << twoTurn << " 의 피해를 주었다." << endl;
//		offense->beAttacked(twoTurn);
//	}
//	else 
//	{
//		cout << offense->GetName() << "가 " << deffense->GetName() << "의 공격을 회피했다." << endl;
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

	//플레이어 어택
	if (_random < 8)
	{
		cout << offense->GetName() << "가 " << deffense->GetName() << " 에게 " << (oneTurn<0 ? 1 : oneTurn) << " 의 피해를 주었다." << endl;
		deffense->beAttacked(oneTurn);
	}
	else
	{
		cout << deffense->GetName() << "가 " << offense->GetName() << "의 공격을 회피했다." << endl;
	}

	_random = (rand() % 10) + 1;

	//몬스터 어택
	if (_random < 8)
	{
		cout << deffense->GetName() << "가 " << offense->GetName() << " 에게 " << (twoTurn < 0 ? 1 : twoTurn) << " 의 피해를 주었다." << endl;
		offense->beAttacked(twoTurn);
	}
	else
	{
		cout << offense->GetName() << "가 " << deffense->GetName() << "의 공격을 회피했다." << endl;
	}
	cout << "============================================" << endl;

}


//void Story::BattleStr(Unit *offense, Unit *deffense)
//{
//	//todo 공격 시스템 구현
//	cout << offense->GetName()<< "가 " << deffense->GetName() << "에게" << (offense->GetDamage())-(deffense->GetDefence()) << "의 피해를 주었다." << endl;
//}
//
//void Story::Battle(Player * player, Monster * monster)
//{
//	system("cls");
//	cout << monster->GetName() << "와의 전투가 시작됩니다." << endl;
//	ClickForNextStory();
//
//	do 
//	{
//		monster->ToString();
//		player->ToString();
//
//		cout << "==================================" << endl;
//		cout << "어떻게 해야하지 ? \n 1. 공격 " << endl;
//		cin >> _selectKey;
//
//		switch (_selectKey)
//		{
//		case 1:
//			BattleStr(player, monster);
//			break;
//		default:
//			cout << "다시 선택해 주십시오" << endl;
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
//			cout << monster->GetName() << "을 처리했습니다." << endl;
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
	cout << monster->GetName() << "와의 전투가 시작됩니다." << endl;
	ClickForNextStory();

	do
	{
		monster->ToString();
		player->ToString();

		cout << "==================================" << endl;
		cout << "어떻게 해야하지 ? \n 1. 공격 " << endl;
		cin >> _selectKey;

		switch (_selectKey)
		{
		case 1:
			BattleStr(player, monster);
			break;
		default:
			cout << "다시 선택해 주십시오" << endl;
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
			cout << monster->GetName() << "을 처리했습니다." << endl;
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
	cout << "눈 앞이 깜깜해진다. 죽은건가? \n (배드엔딩)" << endl;
	
}

void Story::ClearEnd()
{
	cout << "나는 1층 현관을 힘껏 발로 찼다.\n퍼엉어어엉~~~~\n탈출에 성공하다니....\n지금 느껴져 오는 해방감에 온 몸이 떨려온다." << endl;
	ClickForNextStory();
	cout << "허기짐이 조금씩 느껴진다.\n빨리 집으로 가서 밥을 먹어야겠다 \n ( GAME CLEAR )" << endl;
}


void Story::Story1()
{
	cout << "후... 간신히 처리 했다. \n일단 문 밖으로 나오긴 했는데\n오른쪽과 왼쪽길이 보인다." << endl;
}

//왼쪽길로 갔을때
void Story::Story1_1()
{
	cout << "조심스럽게 문을 나와서 왼쪽 길로 걷고 있다. \n이 건물 내부에선 사람의 비명과 분노의 소리가 간간히 들리는 것을 봐선\n내 선택이 틀리지 않은 듯하다. 여긴 사람이 있느..ㄴ....." << endl;
	ClickForNextStory();
	cout << "??? : 너는 누구지? 얼굴이 익숙치 않은데? 신입인가? " << endl <<  endl;
	cout << "갑자기 들리는 목소리에 일단 나는 뒤도 안돌아보고 뛰기 시작했다." << endl;
	ClickForNextStory();

}

//오른쪽 길로 갔을때
void Story::Story1_2()
{
	cout << "조심히럽게 움직이다 보니 엘레베이터가 눈 앞에 보인다. \n나는 엘레베이터를 탈까 잠깐 고민했지만 \n이내 그만두고 계단을 찾기로 했다. " << endl;
	ClickForNextStory();
	cout << "팅~~ "<< endl;
	cout << "엘레베이터가 열리기 시작하고...\n그와 동시에 뒤에서 고함소리가 들린다. \n나는 일단 전속력으로 뛰었다." << endl;
	ClickForNextStory();

}

void Story::Story_3()
{
	cout << "위험했어... 소리가 안들리는 걸로 봐선 무사히 따돌린 듯하다. \n무사히 나갈 수 있겠지?" << endl;
	ClickForNextStory();
	cout << "...내 눈이 이상한 건가? \n눈 앞에 있는 자판기의 내용물을 보면 \n누구든 이런 생각을 하지 않을까? . " << endl;
	ClickForNextStory();
}


//
//void Story::Story_Shop(GameItem *gameItem)
//{
//	cout << "눈 앞의 자판기 LED 기판에 환영한다는 문구가 적혀있다.\n묘하게 눈길을 끈다." << endl;
//	cout << "==========================================" << endl;
//	for (int i =0; i<GAME_ITEM_COUNT; i++)
//	{
//		(gameItem)->ToString();
//		(gameItem)++;
//	}
//	cout << "==========================================" << endl;
//
//}


//todo : 자판기 고치기 완료
GameItem* Story::Story_Shop(GameItem **gameItem , Player* player)
{
	
	cout << "정신없이 길을 헤매다보니 눈 앞의 자판기 LED 기판에 \"환영합니다.\"(이)라는 문구가 적혀있다.\n묘하게 눈길을 끈다." << endl;
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
	cout << "아쉬운 마음으로 발길을 돌렸다." << endl;
	*/
	
	//이 방법으로는 넘어 온다
	for (int i = 0; i < GAME_ITEM_COUNT; i++)
	{
		gameItem[i]->ToString();
	}
	
	cout << "==========================================" << endl;
	

	for (int i = 0; i < GAME_ITEM_COUNT; i++)
	{
		cout << i<< ". " <<gameItem[i]->GetName()<< " ";
	}
	cout << GAME_ITEM_COUNT + 1 << ". 사지 않는다." << endl;
	cout << "==========================================" << endl;

	while (true) 
	{
		cout << "어떤 것을 살까?" << endl;
		cout << "소지금 : " << player->GetGold() << endl;
		cin >> _selectKey;

		//입력 예외처리
		if (_selectKey < 0 || _selectKey > (GAME_ITEM_COUNT + 2))
		{
			cout << "입력을 잘못하셨습니다. 다시 입력해주세요" << endl;
			ClickForNextStory();
		}
		else 
		{
			if (_selectKey == GAME_ITEM_COUNT + 1)
			{
				cout << "아쉬운 마음으로 발길을 돌렸다." << endl;
				ClickForNextStory();
				return nullptr;
			}
			else
			{
				//아이템을 살 수 있는지 금액 체크 
				if ((player->GetGold()) >= (gameItem[_selectKey]->GetPrice()))
				{
					int temp = -1 * (gameItem[_selectKey]->GetPrice());
					player->ChangeGold(temp);
					cout << "소지금 : " << (player->GetGold()) << endl;
					cout << gameItem[_selectKey]->GetName() << "을 샀다." << endl;
					ClickForNextStory();
					return gameItem[_selectKey];
				}
				else 
				{
					cout << "금액이 부족합니다." << endl;
				}
			}
		}
	}
	
}

void Story::Story_3_1()
{
	cout << "헉헉...무사히 도망쳤다. \n정신없이 도망치다 보니 눈앞에 계단이 보였다." << endl;
	ClickForNextStory();
	cout << "계단을 조심히타고 내려와 1층으로 내려오니.\n익숙한 목소리가 들려온다." <<endl;
	ClickForNextStory();
	cout << "??? : 어딜 그렇게 가리려고 그러나? 크크크\n넌 이제 집으로 돌아갈 수 있을거라고 생각하지마라!" << endl;
	ClickForNextStory();

}

void Story::ClickForNextStory()
{
	cout << "\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
}


