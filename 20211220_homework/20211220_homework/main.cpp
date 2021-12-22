#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Monster
{
protected:

public:
	Monster() { cout << "Monster_积己磊" << endl; }
	virtual ~Monster() { cout << "Monster_家戈磊" << endl; }

	virtual void Shout() = 0;

};


class BossMonster :public Monster
{
public:
	BossMonster():Monster() { cout << "BossMonster_积己磊" << endl; }
	~BossMonster() { cout << "BossMonster_家戈磊" << endl; }

	virtual void Shout()
	{
		cout << "-----------------BossMonster Shout!!!!!" << endl;
	}

};


class Goblem : public Monster
{
public:
	Goblem() :Monster() { cout << "Goblem_积己磊" << endl; }
	~Goblem() { cout << "Goblem_家戈磊" << endl; }

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

	cout << "ぱぱぱぱぱぱぱぱぱぱぱぱぱぱぱ" << endl;

	monster = new BossMonster();
	monster->Shout();
	monster->~Monster();

}
