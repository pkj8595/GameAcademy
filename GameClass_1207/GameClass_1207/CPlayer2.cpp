#include "CPlayer2.h"

CPlayer2::CPlayer2()
{
	average = 0.0f;
	sum = 0;
	//멤버 이니셜라이져와 생성자 내부에서 초기화와의 차이
	for (size_t i =0; i<3; i++) 
	{
		score[i] = 0;
	}

}

CPlayer2::CPlayer2(int s1, int s2, int s3)
{
	std::cout << "나는 생성자 오버로딩!!" << std::endl;
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
		std::cout << "점수" << i + 1 << ":" << score[i] << std::endl;
	}
	std::cout << "총점 : " << sum << std::endl;
	std::cout << "평균 : " << average << std::endl;
}

void CPlayer2::SumAverage()
{
	for (size_t i = 0; i < 3; i++)
	{
		sum += score[i];
	}
	average = sum / 3;
}



