#include "Player.h"

Player::Player()
{
	initPlayer();
}

Player::~Player()
{
}

void Player::initPlayer()
{
	m_att = 10;
	m_def = 10;
}

void Player::ShowState()
{
	int addAtt = m_equipWeapon.attribute;
	int addDef = m_equipArmor.attribute;

	std::cout << "===============스텟==============" << std::endl;
	std::cout << "공격력\t\t" << m_att << " + " << addAtt << std::endl;
	std::cout << "방어력\t\t" << m_def << " + " << addDef << std::endl;
	std::cout << "===============무기==============" << std::endl;
	std::cout << "무기\t\t" << m_equipWeapon.name << std::endl;
	std::cout << "방어구\t\t" << m_equipArmor.name << std::endl;
}
