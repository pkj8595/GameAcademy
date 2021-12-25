#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

//namespace A 
//{
//	namespace B 
//	{
//		namespace C 
//		{
//			int num;
//		}
//	}
//}
//
//namespace ABC = A::B::C; 


namespace Equiment {

	namespace A {
		char name[3] = "검";
		int price = 1000;
		int damage = 20;
	}
	namespace B {
		char name[5] = "대검";
		int price = 2000;
		int damage = 30;
	}
	namespace C {
		char name[3] = "활";
		int price = 1000;
		int damage = 15;
	}
	namespace D {
		char name[5] = "단검";
		int price = 500;
		int damage = 10;
	}
	namespace F {
		char name[9] = "바리스타";
		int price = 13000;
		int damage = 80;
	}
	

}

namespace eq = Equiment;
void Draw(int color);
void TextColor(int font, int background);

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7 
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

void main() {

	/*A::B::C::num;
	ABC::num;*/
	/*
		변수선언
		기본 틀 : 변수형태(종류) 변수명

		Ex) int Num;
		
		변수란?
		- 변할 수 있는 숫자나 데이터를 의미 
		- 컴퓨터로 하여금 값을 저장 할 수 있는 메모리 공간에 붙은 이름
		- 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산이 가능하다.

		int Num = 20;
		- 변수의 선언으로 인해서 Num이라는 이름으로 메모리 공강이 할당
		- Num이라고 의미하는 메모리 공간에 20을 넣으라는 의미

		==========자료형 ===========
		c / c++ 언어에서 지원하는 자료형의 종류 
		- 정수형(정수)
		- 실수형(소수)
		- 문자형(문자)
		- 논리형(boolean)

		c / c++ 언어에서 지원하는 정수 자료형의 종류
		-short (2바이트 )
		-int 4byte  43억? 
		-long 8byte
		-long long 8byte
		
		c / c++ 언어에서 지원하는 실수 자료형의 종류
		- float 4byte
		- double 8byte

		c / c++ 언어에서 지원하는 문자 자료형의 종류
		-char (1byte)

		c / c++ 언어에서 지원하는 논리 자료형의 종류
		-bool 1byte 
		& c에서 논리형을 쓰려면 <stdbool.h> 헤더를 삽입 해야함.

		c/c++ 자료형은 기본적으로 음수를 표현하는 것이 가능하지만 
		경우에 따라서 음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.

		unsigned 키워드를 이용하면 음수를 표현하지 않고 양수만을 표현하는 것이 가능

		ex)
		int -> 1, 10, 100, 25556
		float -> 부동소수점 : 123.456f, 3.14f
		bool -> 0 , 1 
		 true : 참을 의미하는 1바이트 데이터 
		 false : 거짓을 의미하는 1바이트 데이터

		 ***bool 자료형은 정수가 와야 할 위치에 오게되면 각각 1과 0으로 반환될 뿐
		 각각 정수1 과 0이 아니다 



	*/

	cout << "오후 수업이다";

	int a = true;
	int b = false;

	int result = a + b;
	cout << "boolean: " << result << endl;
	
	// 변수 선언 : 자료형 + 변수 이름
	// 변수 초기화 방법  (보편적인 방법)

	int num0; // 초기화를 하지 않으니 쓰래기 값이 들어감  -8665456
	//선언 이후 값 변경 
	num0 = 10;

	//변수 선언 방법은 다양하지만 동시에 초기화도 가능하다.
	int num9, num10; //동시 선언 가능
	num9 = num10 = 100; // 동시에 값 변경

	//sizeof 키워드를 사용하면 변수 또는 자료형의 크기 계산을 하는 것이 가능
	cout << "정수 1 사이즈 : " << sizeof(1) << endl;
	cout << "정수 2 사이즈 : " << sizeof(2) << endl;
	cout << "true : " << sizeof(true) << endl;
	cout << "false : " << sizeof(false) << endl;

	//입력

	/*int nvalue = 0;
	cout << "숫자를 입력하세요" << endl;
	cin >> nvalue;

	cout << "내가 입력한 숫자 : " << nvalue << endl;
	cout << endl;*/

	/*printf("정수 입력 : ");
	scanf("%d", &nvalue);*/

	// 정수 타입
	short valuea = 10;
	short valueb = 20;
	short valuec = 30;
	short valued = 40;


	//c++
	cout << "short : " << valuea << ", " << "size" << sizeof(valuea) << endl;
	cout << "short : " << valueb << ", " << "size" << sizeof(valueb) << endl;
	cout << "short : " << valuec << ", " << "size" << sizeof(valuec) << endl;
	cout << "short : " << valued << ", " << "size" << sizeof(valued) << endl;

	printf("short : ");
	printf("%d", valuea);
	printf(", size : ");
	printf("%d", sizeof(valuea));
	printf("\n\n");

	printf("short : %d size : %d \n",valuea,sizeof(valuea));
	printf("short : %d size : %d \n",valueb,sizeof(valueb));
	printf("short : %d size : %d \n",valuec,sizeof(valuec));
	printf("short : %d size : %d \n",valued,sizeof(valued));



	/*
	과제1.무기 만들기
		- 종류와 데미지, 가격이 다른 무기 5종을 만들고 화면에 출력
		- 출력된 화면에는 무기의 종류 + 가격 + 데미지가 함꼐 나열된다.

		과제 2. 도트 마무리
		한줄 조사.반복문 + 배열
		- 반복문의 종류와 역할에 대해서 조사해 온다.
		- 공책에 적어온다.
		
	*/

	
	printf("장비 : %s , 가격 : %d , 공격력 : %d \n", eq::B::name, eq::B::price, eq::B::damage);
	printf("장비 : %s , 가격 : %d , 공격력 : %d \n", eq::C::name, eq::C::price, eq::C::damage);
	printf("장비 : %s , 가격 : %d , 공격력 : %d \n", eq::F::name, eq::F::price, eq::F::damage);

	
	int equiDraw[16][16] = 
	{
		{15,15,15,15,15,15,15,15,15,15,15,15,15,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,15,15,8,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,15,8,8,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,8,8,8,8,8,15},
		{15,15,15,15,15,15,15,15,15,8,8,8,8,8,15,15},
		{15,15,15,15,15,15,15,15,8,8,8,8,8,15,15,15},
		{15,15,15,15,15,15,15,8,8,8,8,8,15,15,15,15},
		{15,15,15,15,15,15,8,8,8,8,8,15,15,15,15,15},
		{15,15,15,15,15,8,8,8,8,8,15,15,15,15,15,15},
		{15,15,15,15,8,8,8,8,8,15,15,15,15,15,15,15},
		{15,15,15,8,8,8,8,8,15,15,15,15,15,15,15,15},
		{15,15,15,8,8,8,8,15,15,15,15,15,15,15,15,15},
		{15,15,6,6,8,8,15,15,15,15,15,15,15,15,15,15},
		{15,6,6,6,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,6,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
	};

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Draw(equiDraw[i][j]);
		}
		printf("\n");
	}
	TextColor(15, 0);
	printf("장비 : %s , 가격 : %d , 공격력 : %d \n", eq::A::name, eq::A::price, eq::A::damage);


	int equiDraw2[16][16] =
	{
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,1,1,1,1,1,15,15,15},
		{15,15,15,15,15,15,15,1,1,1,1,1,15,15,15,15},
		{15,15,15,15,15,15,1,1,1,1,1,15,15,15,15,15},
		{15,15,15,15,15,1,1,1,1,1,15,15,15,15,15,15},
		{15,15,15,15,1,1,1,1,1,15,15,15,15,15,15,15},
		{15,15,15,1,1,1,1,1,15,15,15,15,15,15,15,15},
		{15,15,1,1,1,1,1,15,15,15,15,15,15,15,15,15},
		{15,15,6,6,1,1,15,15,15,15,15,15,15,15,15,15},
		{15,6,6,6,1,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,6,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
	};

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Draw(equiDraw2[i][j]);
		}
		printf("\n");
	}

	TextColor(15, 0);
	printf("장비 : %s , 가격 : %d , 공격력 : %d \n", eq::D::name, eq::D::price, eq::D::damage);



	//랜덤시드 초기화 
	srand(time(NULL));

	int numR;
	//int randemN = rand();
	numR = rand() % 5;
	cout << numR << endl;

	int weaponA = 0;
	
	weaponA = rand() % 6 + 20;
	cout << "무기의 데미지 값 :" << weaponA << endl;


}

void Draw(int color) {
	TextColor(color, 0);
	cout << "■";
}

void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
};

