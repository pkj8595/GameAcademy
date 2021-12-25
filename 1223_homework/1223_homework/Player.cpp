#include "Player.h"


Player::Player() :_name(""), _hp(0), _mp(0), _att(0), _def(0)
{
}

Player::Player(string name, int hp, int mp, int att, int def)
{
	_name = name;
	_hp = hp;
	_mp = mp;
	_att = att;
	_def = def;

}

Player::~Player()
{
}

void Player::ToString()
{
	cout << "-------------------------" << endl;
	cout << "name	:" << _name << endl;
	cout << "hp	:" << _hp << endl;
	cout << "mp	:" << _mp << endl;
	cout << "att	:" << _att << endl;
	cout << "def	:" << _def << endl;
	cout << "-------------------------" << endl;

}
