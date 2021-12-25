#include <iostream>
#include<time.h>
#include<string>


using std::endl;
using std::cout;
using std::cin;
using std::string;

string ComString(int com);

void main() 
{
	srand(time(NULL));

	int myMoney = 10000;
	int bettingMoney = 0;
	int comNumber = -1; 
	int myNumber = -1;


	for (int i= 0; i < 5;i++) {

		cout << "보유 금액 : " << myMoney << endl<< endl;
		if (myMoney <0) {
			cout << " --------GAME OVER------ " << endl;
			break;
		}

		comNumber = rand() % 3;
		cout << "comNumber : " << comNumber << " comDisplay : " << ComString(comNumber) << endl;

		cout << "배팅 금액 입력" << endl;
		cin >> bettingMoney;
		if (bettingMoney < 1000) 
		{
			cout << "1000원 이상 배팅 가능합니다." << endl;
			i--;
			continue;
		}

		cout << "0 : 가위, 1 : 바위, 2 : 보" << endl;
		cin>> myNumber;
		cout << "myNumber : " << myNumber << " myDisplay : " << ComString(myNumber) << endl;

		if (myNumber >2 || myNumber < 0) {
			cout << "다시 입력하세요. (0~2)" << endl;
			i--;
			continue;
		}

		switch (myNumber - comNumber)
		{
		case 0:
			cout << "비김" << endl;
			myMoney += bettingMoney * 5;
			break;

		case 1 :case -2:
			cout << "이김" << endl;
			myMoney += bettingMoney * 3;
			break;

		case 2 : case -1:
			cout << "짐" << endl;
			myMoney -= bettingMoney * 7;
			break;

		default:
			cout << "다시 입력해 주세요 "<< endl;
			break;
		}
		cout << "배팅 금액 : " << bettingMoney << endl;
 	}


}

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

string ComString(int com)
{
	string comString ;

	switch (com)
	{
	case 0:
		comString = "가위";
		break;
	case 1:
		comString = "바위";
		break;
	case 2:
		comString = "보";
		break;
	default:
		break;
	}
	return comString;
}
