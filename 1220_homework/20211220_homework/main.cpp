#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Monster
{
protected:

public:
	Monster() { cout << "Monster_������" << endl; }
	virtual ~Monster() { cout << "Monster_�Ҹ���" << endl; }

	virtual void Shout() = 0;

};


class BossMonster :public Monster
{
public:
	BossMonster():Monster() { cout << "BossMonster_������" << endl; }
	~BossMonster() { cout << "BossMonster_�Ҹ���" << endl; }

	virtual void Shout()
	{
		cout << "-----------------BossMonster Shout!!!!!" << endl;
	}

};


class Goblem : public Monster
{
public:
	Goblem() :Monster() { cout << "Goblem_������" << endl; }
	~Goblem() { cout << "Goblem_�Ҹ���" << endl; }

private:
	virtual void Shout()
	{
		cout << "----------------Goblem Shout!!!!!" << endl;
	}

};


int main() 
{
	Monster *monster = nullptr;

	monster = new Goblem();
	monster->Shout();
	monster->~Monster();

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;

	monster = new BossMonster();
	monster->Shout();
	monster->~Monster();

}
