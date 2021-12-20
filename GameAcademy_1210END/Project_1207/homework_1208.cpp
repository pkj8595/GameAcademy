#include "homework_1208.h"
#include <random>

#define ARR_SIZE(arr)		sizeof(arr)/sizeof(arr[0])

namespace HOMEWORK 
{
	

	void homework_1208()
	{

		homework_1208_01();
		homework_1208_02();
		homework_1208_03();
	}

	/*
		과제1 . 로또 당첨기

		-당첨번호 6개 + 보너스 번호 1개

		1등 : 당첨번호 6개와 내가 입력한 6개의 숫자가 같을때					//
		2등 : 당첨번호 5개 + 보너스 번호 1개와 내가 입력한 6개 숫자가 같을때
		3등 : 당첨번호 5개와 내가 입력한 5개의 숫자가 같을때
		4등 : 당첨번호 4개와 내가 입력한 4개의 숫자가 같을때
		5등 : 당첨번호 3개와 내가 입력한 3개의 숫자가 같을때
		
		1.45개의 번호 >>배열
		2.셔플
		3.com : 7  
		4.입력 my :6

		5.조건만드는것
		6.번호 비교  7 6 
		7. 결과 
		


		과제3. 복습 과제
		-두 정수 사이의 합을 구하는 프로그램을 만든다.			함수?
		-두개의 숫자를 사용자를 통해 입력 받는다.				정수입력
		-입력한 두 숫자 사이의 합을 출력하면 ok
		-예외처리 필수 : 5번과 1을 누른다. -> X
		-숫자의 합이 100 이상이면 프로그램은 종료된다.
		-ex ) 1과 5을 입력 -> 결과값 : 9

	*/
	void homework_1208_01()
	{

		srand(time(NULL));

		cout << "=========== 과제1 . 로또 당첨기 ===========" << endl;

		int comNumber[45];
		
		for (int i = 0; i < 45; i++)
		{
			comNumber[i] = i;
		}

		for (int i = 0; i < 1000; i++)
		{
			int sour = rand() % 45;
			int dest = rand() % 45;

			int temp = comNumber[sour];
			comNumber[sour] = comNumber[dest];
			comNumber[dest] = temp;
		}

		//로또 당첨 번호 출력
		for (int i = 0; i < 7; i++)
		{
			cout << comNumber[i] << "  ";
		}
		cout << endl;
		
		int myNumber[6] = { 0 };
		int count = 0;
		bool isLuck= false;

		cout << "숫자를 6개 입력해주세요" << endl;
		for (int i = 0; i < 6; i++) 
		{
			cout << i+1 << " : ";
			cin >> myNumber[i];
		}
		//숫자 비교
		for (int i = 0; i < 6; i++) 
		{
			for (int j = 0; j < 7; j++) {
				if (myNumber[i] == comNumber[j]) 
				{
					if (myNumber[i] == comNumber[6])
					{
						isLuck = true;
					}
					count++;
				}
			}
		}

		cout << "결과추첨 "  <<endl;
	
		//case문 3,4,5 줄일 수 있음
		switch (count) {
		case 3:
			cout << "5등 당첨 " << endl;
			break;
		case 4:
			cout << "4등 당첨 " << endl;
			break;
		case 5:
			cout << "3등 당첨 " << endl;
			break;
		case 6:
			if (isLuck) {
				cout << "2등 당첨 " << endl;
			}
			else {
				cout << "1등 당첨 " << endl;
			}
			break;
		
		}
	}

	/*
	과제 2. 주민번호 생성기

		-시작하면 원하는 생년 입력을 받는다.(4자리 , 2자리)		입력
			ㄴ EX : 1975 / 75
		-월과 일을 입력 (2자리,1자리 처리)
			ㄴex: 06/6
		-예외처리 : 31일이 있는 달과 30일 까지만 있는 달, 2월도 처리
		-성별선택 (남자는 1 또는 3, 여자는 2 또는 4)
		다른값을 입력하면 성별을 랜덤으로 결정
		-마지막 6자리 랜덤으로 출력 (단 0이 오면 안된다.)

	*/
	void homework_1208_02()
	{
		int min = 1;
		int max = 9;
		std::random_device RandomDevice;
		std::mt19937_64 rnd(RandomDevice());
		std::uniform_int_distribution<int> range(min, max);
		
		int socialNum[13] = { 0 };
		int inputNum = 0;
		int month = 0, day = 0;

		cout << "태어난 년도 입력 (4자리 or 2자리)" <<endl;
		cin >> inputNum;
		socialNum[0] = (inputNum /10)%10;
		socialNum[1] = inputNum % 10;

	BACK_:

		cout << "태어난 월 입력 (2자리 or 1자리)" <<endl;
		cin >> month;
		socialNum[2] = month / 10;
		socialNum[3] = month % 10;

		cout << "태어난 일 입력 (2자리 or 1자리)" <<endl;
		cin >> day;
		socialNum[4] = day / 10;
		socialNum[5] = day % 10;

		if (!CheckMonth(month,day)) 
		{
			cout << "태어난 월과 일을 다시 입력해주세요" << endl;
			goto BACK_;
		}

		cout << "성별 입력 (남자 1,3  여자 2,4)" <<endl;
		cin >> inputNum;
		socialNum[6] = inputNum % 10;

		socialNum[7] =range(rnd);
		socialNum[8] =range(rnd);
		socialNum[9] =range(rnd);
		socialNum[10] =range(rnd);
		socialNum[11] =range(rnd);
		socialNum[12] =range(rnd);

		for (int i = 0; i < ARR_SIZE(socialNum); i++) {
			cout << socialNum[i];
			if (i == 5)
				cout << " - ";
		}
		cout << "\n";
		cout << "============= 과제 2 END ============="<<endl;

	}

	bool CheckMonth(int month , int day)
	{
		bool isPossible = true;
		int checkDay = 0;
		//31 : 1 3 5 7 8 10 12
		switch (month) 
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				checkDay = 31;
				break;
			case 2:
				checkDay = 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				checkDay = 30;
				break;
			default:
				isPossible = false;
				break;
		}
		if (day > checkDay) {
			isPossible = false;
		}
		else {
			isPossible = true;

		}

		return isPossible;
	}

	

	void homework_1208_03()
	{
		cout << "=========== 과제3 . 복습과제 ===========" << endl;
		cout << "두 정수를 입력하고 두 정수 사이의 값을 더해서 출력합니다." << endl;

		int num[2] = { 0 };
		int sum = 0;

		while (sum < 100) {

			cin >> num[0];
			cin >> num[1];
			if (num[0] > num[1]) {
				cout << "다시 입력해주십시오" << endl;
			}

			for (int i = num[0] + 1; i < num[1]; i++)
			{
				sum += i;
			}
			cout << "sum : " << sum << endl;
		}

	}

}