#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::oct;

void main() 
{
	srand(time(NULL));

	//int comNumber;
	//int myNUmber;

	//comNumber = rand() % 100 + 1; // 1~100

	//cout << "치트 : " << comNumber << endl;
	//cout << "0~ 100 까지 숫자 중 하나를 말해보자 " << endl;

	//while (true) 
	//{
	//	cin >> myNUmber;
	//	Sleep(1000); // 1초간 멈춤 

	//	if (myNUmber == comNumber) 
	//	{
	//		cout << "찾았다! " << endl;
	//		Sleep(3000);
	//		system("cls"); // window 헤더 쌍따옴표 안의 문자열과 같은? (클린시스템의 약자) (시스템퍼즈)
	//		break;

	//	}
	//	else if (myNUmber < comNumber) 
	//	{
	//		cout << "더 큰 수를 입력해보세요 " << endl;

	//	}
	//	else {
	//		cout << "더 작은 수를 입력해보세요 " << endl;
	//	}
	//}
	

	/*
		과제1. 가위바위보 게임
		if()문을 이용해 만든다. (switch문 x ){
		- 총 5판을하면 게임종료


		


		과제3 
		별 찍기
		마름모 찍기
		for
		for
		for if
		for if
		for @ 12


		도전과제   >> for하나랑 if문으로 마름모 찍기 3줄
		
		한줄조사 , 함수 
		과제 중 2가지 이상을 못했을시 깜지 당첨
	*/
	cout << "=====================가바위바보=====================" << endl;
	int a = 0; //가위
	int	b = 1; //바위
	int	c = 2; //보

	for (int i = 0; i < 5; i++) 
	{

		int myNum = -1;
		int computerNumber = rand() % 3; // 0 1 2

		cout << "안내면 진다! 가위! 바위! 보! " << endl;
		do {
			cout << "\n";
			cout << "(0 : 가위, 1: 바위, 2:보) ";
			

			cin >> myNum;
			} while (myNum >2  || myNum <0 );
		
		cout << "내가 낸 것 : " << myNum << endl;
		cout << "컴퓨터가 낸 것 : " << computerNumber << endl;

		if (myNum == computerNumber) 
		{
			cout << "비겼다." << endl;
		}
		else if (((myNum == 0)&& (computerNumber ==1)) ||
					((myNum == 1)&&(computerNumber==2)) ||
					((myNum == 2)&& (computerNumber == 0))) 
		{
			cout << "졌다." << endl;
		}
		else 
		{
			cout << "이겼다." << endl;
		}
		cout << endl;

	}
	cout << "=================가위바위보 종료====================" << endl;

	/*
	과제 2 
		-조건문 
		-시작하면 사용자 입력을 받고 입력한 숫자에 따라 ??일 인지 출력
		4입력시 >> 4월은 30일 입니다. >> 다시 입력커멘트 활성화
		-1 ~ 12월까지 확인 가능해야하고 이외의 숫자는 예외처리 
		다섯 번입력하면 프로그램 종료
	*/

	/*
	  1                January     31
	  2                February    28 (non-leap) / 29 (leap)
	  3                March       31
	  4                April       30
	  5                May         31
	  6                June        30
	  7                July        31
	  8                August      31
	  9                September   30
	  10                October     31
	  11               November    30
	  12               December    31
	*/

	cout << "====================과제2======================"<< endl;

	int inputMonth = -1 , nCount = 0;
	
	do{
		cout << "달을 입력해주세요. (0을 누르면 탈출) "<< nCount << endl;
		cin >> inputMonth;
		switch (inputMonth)
		{
		case 0:
			goto EXIT_1;
		case 1:
			cout << "1월은 31 입니다." << endl;
			break;
		case 2:
			cout << "2월은 29 입니다." << endl;
			break;
		case 3:
			cout << "3월은 31 입니다." << endl;
			break;
		case 4:
			cout << "4월은 30 입니다." << endl;
			break;
		case 5:
			cout << "5월은 31 입니다." << endl;
			break;
		case 6:
			cout << "6월은 30 입니다." << endl;
			break;
		case 7:
			cout << "7월은 31 입니다." << endl;
			break;
		case 8:
			cout << "8월은 31 입니다." << endl;
			break;
		case 9:
			cout << "9월은 30 입니다." << endl;
			break;
		case 10:
			cout << "10월은 31 입니다." << endl;
			break;
		case 11:
			cout << "11월은 30 입니다." << endl;
			break;
		case 12:
			cout << "12월은 31 입니다." << endl;
			break;
		default:
			cout << "1 ~ 12 사이의 수를 입력해 주세요." << endl;
			break;
		}
	} while (++nCount < 5);
	EXIT_1:
		
		cout << "====================과제2 END======================" << endl << endl;


		/*과제3 
		별 찍기
		마름모 찍기
		for2
		for2
		for1 if
		for1 if
		for1 @ 12*/

		cout << "==================== 과제3 ========================" << endl << endl;

		// for
		for (int i = 0; i < 5; i++) {
			for (int j = i; j < 5; j++) {
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		//for
		for (int i = 1; i < 6; i++) {
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;

	
		//for if  if문이 돌아가야 할 루프 1 3 6 10  
		for (int i = 1 , z = 1, temp = 1; i < 16; i++){
			cout << "*";

			if (i == z) 
			{  
				// 팩토리얼 일때 
				//temp++;
				z = z + (++temp); // 1 3 7 15 
				cout << endl;
			}
		}
		cout << endl;

		for (int i = 15, z2 = 15, temp2 = 1; i > 0; i--) {
			cout << "*";

			if (i == z2)
			{
				//temp2++;
				z2 = z2 - (++temp2); // 1 3 7 15 
				cout << endl;
			}
		}
		cout << endl;

		for (int i = 15, z2 = 11, temp2 = 5; i > 0; i--) {
			cout << "*";

			if (i == z2) // 11 
			{
				//temp2--; //4 3 2 1 
				z2 = z2 - (--temp2); // 11 7 4 2 1 
				cout << endl;
			}
		}
		cout << endl;
		//포문 마름모
		for (int i = 0, t = 5, p = 0 ; i < 9; i++) {
			
			if (i > 4) t--;
			else t++;
			p = 9 - t;

			for (int j = 0; j < t; j++) 
			{
				if (j <= p)  
					cout << " ";
				else 
					cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		for (int i = 0, t = 4, p = 0; i < 9; i++) {

			if (i > 4) t--;
			else t++; 
			p = 9 - t; 

			for (int j = 0; j < t; j++)
			{
				if (j < p)  //5
					cout << " ";
				else
					cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		//포문을 한번만 사용하면서 별을 찍기 위해선 반복의 횟수가 많아지거나 한번에 찍는 양을 늘려야한다.
		//반복의 횟수가 많아진 경우 if문으로 cout<<endl를 하기 위해선 해당 순서을 알아야한다.
		//일단 for if 만으로 만들어 보자 
		//만들었는데 이걸 줄이는 건 힘들 듯하다. 
		//반복의 횟수가 많아지는 것이 답이 아니라 출력문에서 바뀌는 노선으로 만들어보자
		for (int i = 0, t = 5, p = 5, z = 0, a=0; i < 61; i++) {
			if (i == p) 
			{ //6 7 8 9 10 9 8 7 6   
				cout << endl;
				a = 0;
				if (i < 31) 
				{
					p = p + (++t); // 5 11 18 26 35 45 44 52 59 65 
				}
				else 
				{
					p = p + (--t); // 5 
				}
			}

			z = 9 - t; //4
			if (a < z) 
			{
				cout << " ";
			}  
			else 
			{
				cout << "*";
			}
			a++;
			
		}
		cout << endl;

		//의도하진 않았지만 좀더 간단한 코드가 나왔다. 하지만 이중 포문...
		//41 33 25 17 09 17 25 33 41 
		//  8  8  8  8  8  8  8  8  8진법?
		int n8 = 41;
		for (int i = 0 ; i < 9; i++) 
		{
			for (int j = 0; j < ((n8 / 10) + (n8 % 10)); j++ ) 
			{
				if (j < n8/10) 
					cout << " ";
				else 
					cout << "*";
			}
			if (i<4) 
				n8 -=8;
			else 
				n8 +=8;
			cout << endl;
		}

			
		 //5  11  18  26  35  45  52  59  65
		



		cout << "==================== 과제3 END ====================" << endl << endl;



		
}

