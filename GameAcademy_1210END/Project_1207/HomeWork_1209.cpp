#pragma warning(disable : 4996)
#include "HomeWork_1209.h"
#include <string>

using std::string;
using HOMEWORK::drawCard;

/*
struct drawCardPatten_1 {
	string card1;
	string card2;
	string card3;
	string card4;
};
*/

void HOMEWORK::HomeWork_1209()
{
	HOMEWORK::HomeWork_1209_1();
	HOMEWORK::HomeWork_1209_2();
	HOMEWORK::HomeWork_1209_3();
	HOMEWORK::HomeWork_1209_4();
}


struct MyGame
{
	string Title;	
	string gita;
	int rating;
	float price;
	float score;

};


/*
	과제1. 구조체를 사용하여 데이터 베이스 만들기
		- 게임 타이틀명, 평점, 가격, 점수, 특이사항
		- 배열을 사용한다.
*/
void HOMEWORK::HomeWork_1209_1()
{
	MyGame mygame[5] = { 
							{"몬스터헌터", " 레이드 및 재료 수집 게임 ", 33000, 9.5f, 9.3f},
							{ "로스트아크", " 국산 핵엔슬래시대작", 45000, 9.2f, 9.7f },
							{ "디아블로3", " 노가다! ", 37000, 8.5f, 8.1f },
							{ "베가펑크", " 망해버렸다. ", 20000, 5.6f, 6.3f },
							{ "발로란트", "  헤드한방 ", 55000, 9.1f, 4.7f },
						};

	for (int i = 0; i < 5; i++) {
		cout << mygame[i].Title;
		cout << mygame[i].gita;
		cout << mygame[i].rating;
		cout << mygame[i].price;
		cout << mygame[i].score;
		cout << endl;
	}

	
}

/*
과제2. 문자열 과제

	-문자를 입력받아 입력받은 문자를 거꾸로 출력
	ex) ABCD -> DCBA

	-있는 그대로 출력하지만 짝수에 있는 문자만 거꾸로 출력
	ex) ASDFG -> AFDSG

	-주민번호 입력하고 -가 제거된 주민번호를 출력
*/
void HOMEWORK::HomeWork_1209_2()
{
	cout<< "과제2 - 1 ==================================" << endl;

	char inputStr[30];
	int strSize = 0;
	cin >> inputStr;
	strSize = strlen(inputStr);

	for (int i = strSize; i >= 0; i--) {
		cout << inputStr[i];
	}
	cout << endl;

	cout << "과제2 - 2 ==================================" << endl;

	strSize = 0;
	cin >> inputStr;
	strSize = strlen(inputStr);

	int back = 0;
	int temp = 0;
	back = strSize;
	if (strSize % 2 != 0) //홀수
		back--;
	for (int i = 0; i <= strSize; i++)
	{
		if (i%2 == 0)  // 짝수
			cout << inputStr[i];
		else 
			cout << inputStr[back];
		back--;
	}
	cout << "\n";

	cout << "과제2 - 3 ==================================" << endl;

	cin >> inputStr;
	strSize = strlen(inputStr);
	/*char* strTest = inputStr;
	cout << inputStr << strTest << endl;

	strtok(inputStr, "-");
	cout << inputStr << endl;

	HOMEWORK::strBackCut(strTest,"-");
	cout << inputStr<< strTest << endl;*/

	for (int i = 0; i < strSize;i++) 
	{
		if (inputStr[i] != '-')
		{
			cout << inputStr[i];
		}
	}

}
void HOMEWORK::strBackCut(char* dest,char* token) 
{
	char* temp = dest;
	while (*dest) 
	{
		dest++;
	}

	while(true)
	{
		dest--;
		if (*dest == *token) 
		{
			while (*dest)
			{
				*temp = *dest;
				dest++;
			}
			*dest = '\0';
			return;
		}
	} 

}

/*
과제 . 3
	-치트필수
	ex) ♠ 1~13	♥ ♣ ◆

	A 는 1
	J 는 11
	Q 는 12
	K 는 13

	- 종류별로 13장의 카드 52장의 카드를 사용															//카드 52장 생성
	- 52장의 카드를 최소 한번 랜덤으로 섞고 그 후 매턴마다 3장씩 뒤집는다.								//배열 3개씩
	- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅									//2장 출력 ,배팅, 최소배팅
	- 배팅후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅금의 두배가 되어 소지금 추가		// a < key < b , 배팅 2배
	- 반대라면 소지금에서 배팅한 만큼 감소																//배팅금 잃기
	- 한번 쓰여진 카드는 쓸수없음																		//카드 버리기

*/
void HOMEWORK::HomeWork_1209_3()
{
	cout << "=============== 과제 3 ===============" << endl;
	//뒤집는 3장 
	string cardPatten[3];
	int card[52];
	int cardNum[3];
	int dest, sour, temp;
	int myMoney = 10000;
	int betting = 0;
	//시드 초기화
	srand(time(NULL));
	//drawCardPatten_1 STCardPatten = { "♠" ,"♥","♣" "◆" };
	

	//카드 생성
	for (int i = 0; i < 52; i++) 
		card[i] = i;
	//카드 섞기
	for (int i = 0; i < 1000; i++) 
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}
	
	cout << " 3장을 뒤집어 세번째 수가 두 수 사이에 있으면 승리합니다." << endl;
	//게임 시작
	for (int i=0; ;i+=3) 
	{
		cout << "MY COIN : " << myMoney<<endl;

		if (i > 52) 
		{
			cout << "카드가 모두 소진되어 ";
			break;
		}
		if (myMoney < 1000) 
		{
			cout << "소지금이 부족하여 ";
			break;
		}

		//카드 3장 출력 및 저장
		for (int j = 0; j < 3; j++) 
		{
			cardPatten[j] = drawCard(card[i + j] / 13);
			cardNum[j] = (card[i + j] % 13) + 1;
			//display
			cout << cardPatten[j] << " : " << ShowCard(cardNum[j]) << endl;

		}
		cout << "베팅금액을 정해주십시오. (1000이상)" << endl;
		
		//베팅금액 설정 및 예외처리
		while (true)
		{
			cin >> betting;
			if (betting >= 1000 && betting <= myMoney)
			{
				break;
			}
			cout << "베팅금액을 다시 설정해주십시오. (1000이상)" << endl;
		}

		//세번째 카드 확인
		cout << "세번째 카드 : ";
		cout << cardPatten[2] << " : " << ShowCard(cardNum[2]) << endl;

		//게임 승리여부 및 정산
		if (cardNum[2] > cardNum[0] && cardNum[2] < cardNum[1] || 
			cardNum[2] < cardNum[0] && cardNum[2] > cardNum[1])
		{
			cout << "베팅 성공 배팅금의 2배 " << endl;
			myMoney += betting * 2;
		}
		else 
		{
			cout << "베팅 실패" << endl;
			myMoney -= betting;
		}
		cout << "\n";
	}
	cout << " 게임이 종료됩니다. " << endl;
}

//안만들어도 상관없을걸 만들었네 
	string HOMEWORK::drawCard(int card)
	{
		
		string cardPatten[] = { "♠", "♥", "♣", "◆"};

		return cardPatten[card];
	}

	string HOMEWORK::ShowCard(int card)
	{
		switch (card)
		{
		case 1:
			return "A";
		case 11:
			return "J";
		case 12:
			return "Q";
		case 13:
			return "K";
		default:
			return std::to_string(card);
		}
	}


/*
	과제 4
	-		 "☆" "★" "◇" "◆"

				"♤" "♠" "♡" "♥"

				"♧" "♣"
	-  사이즈 (5 x4)
	-  짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.
	-  2가지 버전으로 치트 만들기
	1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초 후에 다시 원상 복귀
	2. 치트키를 누르면 한 쌍의 카드를 제외하고 전부 오픈 사용자가 마지막 한쌍을 맞추면서 게임을 종료한다.
*/

	
void HOMEWORK::HomeWork_1209_4()
{
	cout << "과제 4 ========== 못했습니다..(시간부족) " << endl;

	string cardPatten[] = { "☆", "★", "◇", "◆","♤", "♠", "♡", "♥","♧", "♣" };
	int card[20];
	int dest, sour, temp;
	int myMoney = 10000;
	int drawTemp =0;

	//시드 초기화
	srand(time(NULL));
	//카드 생성
	for (int i = 0; i < 20; i++)
		card[i] = i;
	//카드 섞기
	for (int i = 0; i < 150; i++)
	{
		dest = rand() % 20;
		sour = rand() % 20;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	//모든 카드 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++) 
		{
		drawTemp = (card[(i * 4) + j]) % 10;
		//drawTemp = card[(i * 4) + j];
		//cout << "|"<< drawTemp << "|";
		cout << "|"<< cardPatten[drawTemp] << "|";
		}
		cout << "\n";
	}


}


