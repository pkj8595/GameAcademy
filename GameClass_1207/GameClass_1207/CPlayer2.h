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

	//함수 내에서는 멤버 변수의 값을 바꾸지 않겠다.
	//변하지 않을 함수라면 무조건 const를 붙여라
	//함수 뒤에 const -> 이 함수 내에서는 맴버 변수의 값을 변경하지 않겠다.
	//const를 붙인채 내부를 바꾸면 오류가 뜬다.

	int GetNum() const{ return num; }
	//				^ 지우면 밑에 오류 뜸
	void Print() const
	{
		std::cout << GetNum() << std::endl;
		//-> const 함수 내에서 const가 아닌 함수의 호출이 제한된다.
	}

public:
	CPlayer2();
	//생성자 오버로딩
	CPlayer2(int s1, int s2, int s3);
	~CPlayer2();
};

