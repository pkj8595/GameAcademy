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
	//privateMoney  : private�� ��ӹ��� ���Ѵ�.

	cout << "���� ��ȿ�� Ŭ�����Դϴ�." << endl;
	cout << "�츮�� ��Ȱ��" << familyMoney<< endl;
	cout << "�濡�� �ֿ� ��"<< publicMoney<<endl;

}
