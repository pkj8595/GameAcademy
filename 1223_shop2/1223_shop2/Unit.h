#pragma once
class Unit
{
protected:
	int m_att;
	int m_def;

public:
	Unit() {};
	~Unit() {};

	int GetAtk()const { return m_att; }
	void SetAtt(int att) { m_att = att; }

	int GetDef()const { return m_def; }
	void SetDef(int def) { m_def = def; }

};

