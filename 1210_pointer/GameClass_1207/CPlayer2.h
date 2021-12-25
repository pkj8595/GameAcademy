#pragma once
#include <iostream>


class CPlayer2
{
private:
	int sum;
	int score[3];
	double average;

	int num;

public:
	void SetScore(int s1, int s2, int s3);
	void ShowScore();
	void SumAverage();

	//�Լ� �������� ��� ������ ���� �ٲ��� �ʰڴ�.
	//������ ���� �Լ���� ������ const�� �ٿ���
	//�Լ� �ڿ� const -> �� �Լ� �������� �ɹ� ������ ���� �������� �ʰڴ�.
	//const�� ����ä ���θ� �ٲٸ� ������ ���.

	int GetNum() const{ return num; }
	//				^ ����� �ؿ� ���� ��
	void Print() const
	{
		std::cout << GetNum() << std::endl;
		//-> const �Լ� ������ const�� �ƴ� �Լ��� ȣ���� ���ѵȴ�.
	}

public:
	CPlayer2();
	//������ �����ε�
	CPlayer2(int s1, int s2, int s3);
	~CPlayer2();
};

