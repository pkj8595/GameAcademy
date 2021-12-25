#include<iostream>
#include<time.h>

using namespace std;

/*
과제 1
-switch문을 이용해 만든다.
-치트 기능과 배팅 기능 추가 (초기 소지금 : 10000)
-최소 베팅은 1000원 부터
-5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료
-이기면 판돈에 x3를 얻고 지면 판돈에 x7를 잃는다.
-비길경우 판돈에 x5배 를 얻는다.

과제 2
지금까지 배운 내용들 복습한다.
어떻게 복습을 했는지 구현화 시켜온다.

한줄 조사
공책에 써온다
배열을 비유할 것 생각해 온다.

*/

void main() {
	srand(time(NULL));
	cout << "===========GAME START===========" << endl;


	int betting = 0;
	int myMoney = 10000;
	int comNumber = -1;
	int myNumber = -1;


	for (int i = 0; i < 5; i++) 
	{
		betting = 0;

		//소지 금액 확인
		cout << "my money : " << myMoney << endl;
		if (myMoney < 0 ) 
		{
			cout << "===========GAME OVER=========" << endl;
			return;
		}
		//배팅 금액 설정
		cout << "베팅할 금액을 적어주세요 (1000원 이상)" << endl;
		cin >> betting;

		if (betting < 1000) 
		{
			i--;
			continue;
		}

		//가위바위보 
		comNumber = rand() % 3;
		cout << "컴퓨터 가 낸 것 : " << comNumber << endl;

		cout << "0 :가위, 1: 바위, 2: 보" << endl;
		cin >> myNumber;


		switch (myNumber-comNumber)
		{
		case 0:
			cout << "비김" << endl;
			myMoney += betting * 5;
			break;
		case 1: case-2:
			cout << "이김" << endl;
			myMoney += betting * 3;
			break;

		case 2: case-1:
			cout << "짐" << endl;
			myMoney -= betting * 7;
			break;

		default:
			cout << "다시 입력해 주세요" << endl;
			break;
		}
		cout << endl;


	}

}
