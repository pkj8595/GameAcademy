#include "Homework_1207.h"

#define EVALUATION_COUNT			6
#define ARRAY_SIZE(arr)				sizeof(arr)/sizeof(arr[0])	//배열 사이즈

namespace HOMEWORK_1207 
{

	
	void Homework_1207()
	{
		Homework_1207_1();
		Homework_1207_2();
		Homework_1207_3();
	}

	/*
	과제 1. 게임 평가 평균값 구하기
		항목은 6개
		-게임 평가 : 캐릭터 배경 퀘스트 아이템 과금 레이드(기타 등등)
		 조건 : 1차 배열로 값 정한 뒤 평균값을 구해서 출력 ->값 입력 아님
	*/
	void Homework_1207_1()
	{
		string evaluationName[6] = {"캐릭터","배경","퀘스트","아이템","과금","레이드"};
		float evaluation[6] = {4.7, 3.0, 4.2, 3.5, 5.0, 4.1};

		float sum = 0;
		for (int i = 0; i < ARRAY_SIZE(evaluation); i++)
		{
			cout << evaluationName[i] << "    : " << evaluation[i] << endl;
			sum = sum + evaluation[i];
			//cout << sum << endl;

		}
		cout  <<"평점  : "<< sum / EVALUATION_COUNT << endl;
		cout  <<"배열 크기 평점  : "<< sum / ARRAY_SIZE(evaluation) << endl;
		cout  << ARRAY_SIZE(evaluation) << endl;
		
	}

	/*
		과제 2. 숫자야구
		-셔플 알고리즘 활용
		-0~9 까지의 숫자 중 컴퓨터가 임의로 3개를 뽑는다.(중복 x)
		-컴퓨터가 뽑은 숫자를 플레이어가 임의의 숫자 3개를 선택하여 숫자와 자리수까지 맞추는 게임
		-만약 선택한 숫자가 컴퓨터 숫자와 같으나 자리수가 다를 경우 1볼(1b)
		-만약 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 같을 경우 1스크라이크 (1s)
		-만약 해당되는 숫자가 없으면 1아웃 (1out)
		-이렇게 한 턴에 3S를 만들 경우 (3개의 숫자와 자리까지 모두 맞춘 경우)
		  몇번만에 맞췄는지 결과를 보여주며 게임을 끝낸다.
		-치트 필수
	*/
	void Homework_1207_2()
	{
		cout << "======== 과제 2 =======" << endl;

		srand(time(NULL));

		//셔플 알고리즘
		int num[10];
		int dest, sour, temp; //공간(섞기위한 준비)

		//값을 할당
		for (int i = 0; i < 10; i++) {
			num[i] = i;
		}

		//섞기
		for (int i = 0; i < 10; i++)
		{
			dest = rand() % 10;
			sour = rand() % 10;

			temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;
		}
		//셔플 확인
		for (int i = 0; i < 3; i++)
		{
			cout << "[" << i << "] = " << num[i] << endl;;
		}

		//받을 값 선언 
		int myNumber = 0;
		int myNumArr[3] = { 0 };
		int sCount = 0, bCount = 0, oCount = 0;
		int allCount = 0;


		cout << num[0]<<num[1]<<num[2] << endl;;
		cout << "0~999까지 입력하세요(중복 x)" << endl;

		do {
			allCount++;
			//카운트 초기화
			sCount = 0, bCount = 0, oCount = 0;
			//myNumber 입력받기
			cin >> myNumber;
			//myNumber 쪼개서 배열에 보관
			myNumArr[0] = myNumber/100;
			myNumArr[1] = (myNumber / 10) % 10;
			myNumArr[2] = myNumber % 10;


			//비교 및 카운트
			for (int i = 0; i < 3; i++) 
			{
				for (int j = 0; j < 3; j++) 
				{
					if (num[i] == myNumArr[j]) 
					{
					
						if (i == j) //스트라이크 
						{
							sCount++;
						}
						else //볼 
						{
							bCount++;
						}
					}
				}
			}
			//out 횟수 절대값으로 받기
			oCount = abs((sCount + bCount) - 3);
			cout << "\n";
			cout << " S: " << sCount << "  B: " << bCount << "  O: " << oCount << endl;
		} while (sCount < 3);

		cout << "================== "<< allCount <<"번째만에 성공 ==================="<< endl;
	}
	/*
		과제 3. 슬롯머신
		-777같은 숫자 3개가 나올시 배팅금액의 12배
		-7을 제외한 같은 숫자 3개 나올 시 배팅금액의 5배
		-같은 숫자 2개 나올시 배팅금액의 2배
		그외에는 배팅금액 잃기
		-치트: 숫자 3개를 입력해서 777이 당첨되는 걸 확인할 수 있게 만들기
	*/
	void Homework_1207_3()
	{
		cout << "======== 과제 3 =======" << endl;
		srand(time(NULL));
		int myMoney = 10000;
		int betting = 0;
		int num[3] = { 0 };
		int cheat = -1; //치트
		int randomNum;
		int count=0;
		cout << "MONEY : " << myMoney << endl;

		do 
		{
		count = 0;
		randomNum = rand() % 1000;
		cheat = -1;

		if (myMoney <= 0) 
		{
			cout << " ========= GAME OVER ========= " << endl;
			return;
		}

		cout << "솔직모드 : 0, 치트모드 :1, 그만하기: 2  " << endl;
		cin >> cheat;

		if (cheat ==1) {
			cout << "치트모드 ... 룰렛의 값을 설정해주세요(0~999)" << endl;

			cin >> cheat;
			randomNum = cheat;
		}
		else if (cheat == 2) {
			cout << "======== 과제 3 종료 =======" << endl;
			break;
		}
		else if (cheat < 0 || cheat > 999) {
			cout << "다시 입력해 주세요. " << endl;
		}

		cout << "MONEY : "<< myMoney << endl;
		cout << "베팅 금액을 설정해주세요" << endl;
		cin >> betting;

		cout << "randomNum : " <<randomNum << endl;

		num[0] = randomNum / 100;
		num[1] = (randomNum / 10)%10;
		num[2] = randomNum % 10;

		cout << "num[0] : " << num[0] << endl;
		cout << "num[1] : " << num[1] << endl;
		cout << "num[2] : " << num[2] << endl;


		num[0] == num[1] ? count++ : NULL;
		num[1] == num[2] ? count++ : NULL;
		num[0] == num[2] ? count++ : NULL;



		switch (count)
		{
		case 2:case 1:
			myMoney += betting * 2;
			cout << " 2개 동일 2배 당첨 " << endl;
			break;

		case 3:
			if (randomNum == 777)
			{
				myMoney += betting * 12;
				cout << " --------777-------- 12배 당첨 "<< endl;
			}
			else {
				myMoney += betting * 5;
				cout << " 5개 동일 5배 당첨 " << endl;
			}
			break;

		default:
			cout << " 꽝 배팅금을 잃었습니다. " << endl;
			myMoney -= betting;
			break;
		}
		cout << "MONEY : " << myMoney << endl;

		} while (true);

	}

	
	
}

