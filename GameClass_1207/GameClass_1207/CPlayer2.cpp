#include "CPlayer2.h"

CPlayer2::CPlayer2()
{
	average = 0.0f;
	sum = 0;
	//��� �̴ϼȶ������� ������ ���ο��� �ʱ�ȭ���� ����
	for (size_t i =0; i<3; i++) 
	{
		score[i] = 0;
	}

}

CPlayer2::CPlayer2(int s1, int s2, int s3)
{
	std::cout << "���� ������ �����ε�!!" << std::endl;
	average = 0.0f;
	sum = 0;
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}

CPlayer2::~CPlayer2()
{
}

void CPlayer2::SetScore(int s1, int s2, int s3)
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}
void CPlayer2::ShowScore()
{
	for (size_t i= 0; i < 3; i++) {
		std::cout << "����" << i + 1 << ":" << score[i] << std::endl;
	}
	std::cout << "���� : " << sum << std::endl;
	std::cout << "��� : " << average << std::endl;
}

void CPlayer2::SumAverage()
{
	for (size_t i = 0; i < 3; i++)
	{
		sum += score[i];
	}
	average = sum / 3;
}



