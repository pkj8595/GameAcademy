#pragma once

enum class PLAYERSKILL
{
	NONE,POSITION,SKILL_1
};
class Player
{
private:
	int m_hp;
	int player_atk;
public:
	Player(int hp);
	~Player();

	//const ����ġ ���� ���������� �ִ°� ����
	int GetHp()const { return m_hp; }
	int GetAtk()const { return player_atk; }

	void SetHp(const int hp) { m_hp = hp; }
};

