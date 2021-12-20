#include "MainGame.h"

MainGame::MainGame(): key(0)
{
	enemy = new Enemy(100);
	player = new Player(200);
}

MainGame::~MainGame()
{
	delete enemy;
	delete player;
}

void MainGame::Update()
{
	cout << "플레이어 HP :" << player->GetHp() << endl;
	cout << "고블린 HP :" << enemy->GetHp() << endl;

	while (true)
	{
		//참고로 printf가 cout보다 빠름
		cout << "입력해라 : ";
		cin >> key;

		switch ((PLAYERSKILL)key) 
		{
		case PLAYERSKILL::NONE:
			cout <<"아무것도 하지않음." <<endl;
			break;

		case PLAYERSKILL::POSITION:
			cout << "빨간약 섭취." << endl;
			player->SetHp(player->GetHp() + 200);
			cout << "플레이어 체력 " << player->GetHp() << endl;
			break;

		case PLAYERSKILL::SKILL_1:
			cout << "플레이어 공격." << endl;
			enemy->SetHp(enemy->GetHp() - player->GetAtk());
			cout << "고블린 체력 " << enemy->GetHp() << endl;
			break;

		default:
			break;

		}

	}


}
