#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Player
{
private:
	string _name;
	int _hp;
	int _mp;
	int _att;
	int _def;

	Player();

public:

	Player(string name, int hp, int mp, int att, int def);
	~Player();

	void ToString();


};

