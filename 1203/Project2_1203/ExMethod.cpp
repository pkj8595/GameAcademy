#include <iostream>
#include <random>
#include<string> // string을 쓰기 위한 헤더

using namespace std;

/*
	함수를 사용하는 이유 
	-중복 로직 제거
	-관리 용이
	-가독성 향상
	-편리하다

	함수를 선언하는 방법
	반환 자료형 함수 이름(입력 자료형 (인자))
	{
		<-함수 시작
			함수내용
	}<- 함수 끝

	함수 이름 : 말 그대로 함수의 이름 (함수를 실행(호출)할때 사용)
	인자(인자) : 함수사 해야 할 일의 세부 사항을 지정하며 함수의 작업 거리라고 볼 수 있다.
	반환 자료형 : 함수가 리턴하는 값의 데이터 형이며 함수의 작업 결과
	함수 내용 : {} 안에 함수의 실제 코드가 존재

	함수의 이름은 "기본적"으로 유일해야 한다.
		-> 동일한 이름의 함수를 n개 이상 선언 하는 것이 불가능하다.

	void형 함수란?
	-리턴(반환) 할 값이 없는 함수
	-함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 입/출력이 없다라는 것을 명시

	우리가 알게 모르게 사용한 함수들
	-rand(): 랜덤값을 뽑는 함수 -> 이거 쓰지말고 랜덤템플릿을 사용해서 쓰는 것이 좋다 // 
			 범위가 작다 32000 ~ -32000
	-Sleep(1000) : 1초간 멈추게 하는 함수

	함수를 선언하는 방법에서 지켜야 할 점
	-함수의 선언은 기본적으로 메인함수 윗쪽에 한다.(프로토타입 선언)

	C/C++ 언어의 함수 선언이 필요한 이유
	-C/C+++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.
	이때, 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출할 경우 컴파일러가 
	이데대한 내용을 모르기 때문이다.

	그렇기에 함수의 선언을 통하여 컴파일러에게 해당 함수가 파일 어딘가에서 존재한다는 여부를 반드시 알려줘야 한다.
	즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미 

	함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다.

	

*/

//void
void OutputValueA();
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//ㅁ문자열
void OutputString(string str);
string GetString(string strA, string strB);
int CheckingString(string strA, string strB);

//반환값이 있는 함수
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

//실습 함수 4개 만들기 
//-입력 o , 출력 o
//-입력 o, 출력 x
//- 입력 x, 출력 o
//- 입력 x, 출력 x
int methodIntOutput(int a);
void methodVoidOutput(int a);
int methodIntNotOutput();
void methodVoidNotOutput();

namespace NS_FUNC_A 
{
	void Sample() 
	{
		cout << "내가 바로 NS_FUNC_A 함수!" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "내가 바로 NS_FUNC_B 함수!" << endl;
	}
}


void main() {

	NS_FUNC_A::Sample();
	NS_FUNC_B::Sample();

	cout << "\n";
	//함수 호출
	OutputValueA();
	OutputValueB(5);
	OutputValueC(1,9);

	OutputString("과제가 너무 쉽다.");

	int nResultA = GetAddValue(18, 25);
	OutputValueB(nResultA);
	
	string sResultB = GetString("쉽다","쉬워");
	OutputString(sResultB);

	nResultA = CheckingString("과제 더 내주세요", "과제 더 내주세요");
	OutputValueB(nResultA);
	//string 

	cout << "\n";

	int numL = 0;
	int numR = 0;

	cout << "정수 (2개) 입력" << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d \n", numL , numR, GetAddValue(numL , numR));
	printf("%d - %d = %d \n", numL , numR, GetSubValue(numL, numR));
	printf("%d x %d = %d \n", numL , numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f \n", numL , numR, GetDivideValue(numL, numR));

	/*
	이러한 함수는 정해진 유형을 가지고 있다.
	C/C++ 언어의 함수 유형
	-입력 o , 출력 o
	-입력 o , 출력 x
	-입력 x , 출력 o
	-입력 x , 출력 x

	*/



}

void OutputValueA()
{
	cout << "내가 바로 함수다" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB <<  endl;

}


void OutputString(string str)
{
	cout << str << endl;
}

string GetString(string strA ,string strB)
{
	strA.append(strB); 
	// strA 에 strB를 더 해주겠다. 교수님 추천 : 안전이 보장 되어있다. 
	// append : n문자열 뒤에 n2 문자열을 붙여 넣는다.

	return strA + strB; // 안전이 보장되지 않음.
}

int CheckingString(string strA, string strB)
{
	//같으면 1 다르면0 반환
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;

}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}


//-----------------------실습--------------------
int methodIntOutput(int a)
{
	return a;
}

void methodVoidOutput(int a)
{
	cout << "methodVoidOutput" << endl;
}

int methodIntNotOutput()
{
	return 0;
}

void methodVoidNotOutput()
{
}
