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

	std::cout << "===============����==============" << std::endl;
	std::cout << "���ݷ�\t\t" << m_att << " + " << addAtt << std::endl;
	std::cout << "����\t\t" << m_def << " + " << addDef << std::endl;
	std::cout << "===============����==============" << std::endl;
	std::cout << "����\t\t" << m_equipWeapon.name << std::endl;
	std::cout << "��\t\t" << m_equipArmor.name << std::endl;
}
