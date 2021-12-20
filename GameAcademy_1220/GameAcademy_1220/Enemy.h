#pragma once
class Enemy
{
private:

	int m_hp;
public:
	Enemy(const int hp);
	~Enemy();

	int GetHp() const { return m_hp; }
	void SetHp(const int hp) { m_hp = hp; }
};

