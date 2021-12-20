#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Init()
{
	publicMoney = 20000;
	familyMoney = 50000;
	//privateMoney  : private는 상속받지 못한다.

	cout << "나는 불효자 클래스입니다." << endl;
	cout << "우리집 생활비" << familyMoney<< endl;
	cout << "길에서 주운 돈"<< publicMoney<<endl;

}
