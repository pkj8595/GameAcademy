#include <iostream>
#include "MainGame.h"

using std::cout;
using std::endl;
using std::string;

//
//struct Circle
//{
//	int radius;
//	string color;
//
//	//구조체에서 함수 사용가능
//	double calArea() 
//	{
//		return 3.14 * radius * radius;
//	}
//};
//
////열거형은 이것을 쓰는게 좋음
//enum class MyEnumClass 
//{
//	
//};
//
//class Student
//{
//public:
//	Student();
//	~Student();
//
//	//클래스 내부 정의 
//	//오버로딩
//	//디폴트 매개 변수는 맨 뒤에 있는 매개 변수에 값이 들어가야 쓸 수 있다.
//	void print(int a) { cout << a << endl; }
//	void print(int a, int b) { cout << a << ", " << b<< endl; }
//	//void print(string str = "디폴트 매개 변수") { cout << str << endl; }
//
//	//프로토타입만 있음
//	int sum(int a, int b);
//
//
//private:
//
//};
//
//Student::Student()
//{
//}
//
//Student::~Student()
//{
//}
//

#include"CPlayer2.h"

void Print();
int main() 
{
	//공통된 기능이 있으면 물려 받아서 쓰는 것이 좋다.
	//MainGame mg;

/*
	CPlayer2 p;
	p.SetScore(1, 2, 3);
	p.SumAverage();
	p.ShowScore();

	CPlayer2 p2(2, 3, 4);
	p.SumAverage();
	p.ShowScore();*/

	//POINTER -> 이정표 가리키다
	//메모리의 주소를 저장하는 녀석
	//커플이 펜션에 놀러감 -> 101호에 방을잡음
	//커플이..저녁에..배가고파..배달을 시켰어..치킨과 맥주
	//배달원이 온다.
	//배달원이 일한지 얼마 안됐다
	//치킨 시킨 커플은 어디있나요 하고 사장님항테 물어봄
	//101호를 가리키면서 알려줌
	//여기서 포인터는 사장님이다.

	int a = 10;
	cout << a << endl;
	cout << "변수 a의 주소값 : "<< &a << endl;

	//포인터 변수에는 오로지 주소만 넣을 수 있다.
	//int * pNum = &a;
	
	int num = 10;
	cout << "num : " << num << endl;
	cout << endl;
	cout << "num의 주소값 : " << &num << endl;
	cout << endl;

	int *p = &num;

	cout << "pointer p의 값 : "<< p << endl; //num의 주소값
	cout << endl;

	cout << "p의 주소값 : " << &p << endl;// pointer 변수의 주소값
	cout << endl;

	//역참조
	cout << "p의 값(num의 값) : " << *p << endl;
	cout << endl;

	*p = 777;
	cout << "p의 역참조(num의 값) : " << *p << endl;
	cout << "num의 값 : " << num << endl;
	cout << endl;

	int **pp;
	pp = &p;
	//pp = &num; // 더블포인터는 포인터의 변수를 저장
	cout << "pp의 값 : " << pp << endl;
	cout << "pp의 주소값 : " << &pp << endl;
	cout << "*pp의 값 (num의 주소값): " << *pp << endl;

	**pp = 1234;
	cout << "**pp의 값 (변경된 num의 값)" << num << endl;

	//포인터 변수를 초기화 할때
	int *ptr = nullptr; 
	// 뎅글링 포인터 
	//메모리를 해제하고 나서도 포인터가 메모리 주소값을 가르키기 때문에 쓰고나서 nullptr를 대입해준다.
	//없는 공간을 쓸데없는 포인터가 가르키는 경우 
	//이미 해제한 곳에 포인터가 가르키는 경우


	//배열의 첫번째 인덱스 주소값은 배열의 주소값와 같다
	//int 값의 연속된 주소값을 가진다.
	int arr[3] = { 1,2,3 };
	cout << arr << endl;
	cout << &arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;

	cout << "재귀함수"<< endl;
	Print();

	//컴퓨터는 무조건 메모리의 주소로 접근한다.

	// 쉬프트 연산 비트의 
	//열을 한칸씩 왼쪽으로 이동 할때마다 2배씩 늘어난다.
	//열을 한칸씩 오른쪽으로 이동 할때마다 2배씩 줄어든다.
	//쉬프트 연산이 가장 빠르다.
	int sNum = 15; // 00001111
	int result = sNum << 1; // 쉬프트 연산 //0001 1110
	int result2 = sNum << 2; // 쉬프트 연산 //0111 1000
	int result3 = sNum << 3; // 쉬프트 연산 //1111 0000
	int result4 = sNum << 4; // 쉬프트 연산 //1110 0000
	int result5 = sNum << 5; // 쉬프트 연산 //0001 1110 0000
	
	cout << sNum << endl;
	cout << result << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;
	cout << result5 << endl;

	//컴퓨터는 곱하기가 더 빠르다. 나눗셈보다

	return 0;
}

//int Student::sum(int a, int b)
//{
//	return 0;
//}

//재귀함수의 단점 //퍼포먼스가 떨어진다. // 탈출을 안 만들어 주면 스택에 쌓이다가 스택오버플로우로 펑 터진다.
void Print() 
{
	static int num1 = 0;
	num1++;
	if (num1 == 10) return;
	cout << "재귀 함수 " << endl;
	Print();
}