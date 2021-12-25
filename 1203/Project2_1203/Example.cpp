#include <iostream>

using namespace std;

//상수 / 변상수
/*
	상수란?
	- 변수와 달리 저장 된 데이터를 변경 할 수 없는 공간에 붙여진 이름을 의미
	-> 상수는 한번 데이터가 저장되고 나면 변경하는 것이 불가능 하다 .

	c / c++ 언어 상수의 종류 

	-리터널 상수 (이름이 없는 상수)  >> 변경이 불가능
	-심볼릭 상수 (이름이 존재하는 상수) >>굳이 바꾸고 싶다면 메모리 쪽으로 들어가서 바꿀 수 있다

	리터널 상수는 이름이 없는 상수를 의미하며 임시 값이라고 지칭한다.
	Ex : 1, 3.14, 'C' 등등...

	심볼릭 상수는 const 키워드를 통해서 선언이 가능하며 
	리터널 상수와 달리 이름을 통해서 안에 저장되어 있는 데이터를 읽어들이는 것이 가능하다.


*/

void main() 
{
	cout << "==리터널 상수==" << endl;
	cout << "정수형" << 10 << ", " << 10L << ", " << 100LL << endl;
	cout << "실수형" << 3.14f << ", " << 3.14 << endl;
	cout << "문자형" << 'A' << endl;
	
	cout << '\n';

	//심볼릭 상수는 저장할 수 있는 시점이 초기화 시점에서만 가능하다.
	cout << "심볼릭 상수" << endl;
	const int nValueA = 0;
	const float fValueB = 3.14f;
	const double dblValueA = 3.14;

	

	//nValueA = 100; 상수이기 때문에 에러가 뜬다.

	cout << "출력 값 : " << nValueA << ", " << fValueB << ", " << dblValueA << endl;

	int numA = 10; //초기화
	int numB; // 선언
	numB = 10; //할당

}