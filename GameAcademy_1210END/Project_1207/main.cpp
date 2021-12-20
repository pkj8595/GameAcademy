#include "Example_1.h"
#include "Example_2.h"
#include "Example.h"
#include "Homework_1207.h"
#include "test_1208.h"
#include "class1208_.h"
#include "homework_1208.h"
#include "Input_Arr.h"
#include "Class_1209.h"
#include "Class1209_2.h"
#include "HomeWork_1209.h"
#include "Class1210_1.h"


#define STATE_CLASS				1
#define STATE_HOMEWORK			2
#define STATE_TEST				3
#define STATE_PRIVATE_TEST		4

#define STATE					STATE_CLASS


void GameAcademyClass();
void GameAcademyHomework();
void GameAcademyTest();
void PrivateTest();


void main() {

	
#if STATE == STATE_CLASS
	GameAcademyClass();

#elif STATE == STATE_HOMEWORK
	GameAcademyHomework();
	

#elif STATE == STATE_TEST
	GameAcademyTest();

#elif STATE == STATE_PRIVATE_TEST
	PrivateTest();
#endif
}

void GameAcademyClass()
{
	//EXAMPLE_0::PreprocessorClass_1207(); //전처리기 
	//EXAMPLE_1::Example(); //배열 , sizeof
	//EXAMPLE_2::ArrayClass_1207(); //난수, 셔플
	//Class1208::class1208_1(); // 완벽한 난수 예제 , 삼항연산자, 문자열 중요
	//CLASS_1209::Class_1209_1(); // 사용자 정의 자료형
	CLASS_1209::Class_1209_2(); // 문자열 

	//--------------------------------------1210 클래스 설명--------------------------------------------
	/*
	선언문에 의해 생성된 클래스형의 변수를 인스턴스(Instance)라고 한다.
	클래스는 어디까지나 타입일 뿐이지 그 자체가 정보를 저장하는 변수는 아니다.
	구조체를 선언한다고 해서 구조체 변수가 생기는 것이 아닌것 처럼
	클래스를 선언한다고 해서 실제로 값을 기억할 수 있는 메모리가 할당되지 않는다.
	*/

	/*
	클래스 가져오기 
	1.include에서 클래스 헤더 파일을 가져온다.
	2.원하는 곳에서 선언 >> 클래스 생성자 접근
	*/

	
	//정적 할당 -> 게임에서는 좋지 않다. 
	//정적 할당은 런타임에서 실시간으로 메모리를 건들 수 없다.
	Class1210_1 mg;
	mg.outPut();
	cout << "\n";

	//동적 할당  :  저장되어 있는 메모리를 참조만 하겠다.
	//new >> 동적할당 키워드 
	Class1210_1* mainG = new Class1210_1;
	//동적 할당 함수 사용법
	mainG->showPosision();
	mainG->movePosision();
	mainG->setPosision(100, 100);
	mainG->showPosision();
	mainG->movePosision();
	mainG->movePosision();
	mainG->movePosision();
	mainG->showPosision();

	delete mainG; // 메모리에서 삭제

	/*

		과제	 1 클래스 사용법 익히기
		-클래스 5개 생성후 각각 다른 문구 출력 

		Ex) 
		(클래스 이름)클래스 1번
		(클래스 이름)클래스 2번
		(클래스 이름)클래스 3번

		※최소 클래스 갯수는 5개

		과제 2 다마고치 만들기 
		-필수 요소 
		1. 데코 (토트)
		2. 게임 요소 (만족도 , 배고픔, 놀리, 배변 등등+@)
		3. 시간에 따른 성장요소
		4. 현재 요일 및 시간 확인 할 수 있는 정보 
		5. 엔딩 요소


		과제 3 하이 로우 세븐 
		-1~13 까지 카드 4종류 
		종류별 13장의 카드 52장의 카드를 사용
		-필수 : 카드모양
		-52장의 카드를 최소 한번 이상 랜덤으로 섞고 그 후 매턴마다 5씩 뒤집는다.
		-잎쪽에 배치된 다섯장의 카드를 보고 6번째 카드의 숫자를 예측한다.
		-seven(7) 보다 높으면 high 낮으면 low 아니면 같은지 seven 중 하나에 배팅
		-seven이면 13배 배당금 획득
		-카드 버리기 

		과제 4 클래스화
		-과제는 총 2개 
		-가위바위보 + @ 과제를 클래스화 시켜온다.
		-제대로

	*/

}

void GameAcademyHomework()
{	

	//HOMEWORK_1207::Homework_1207(); //게임평가 평균값,슬롯머신, 숫자야구
	//HOMEWORK::homework_1208(); // 로또당첨기 , 주민번호 생성기, 복습과제
	HOMEWORK::HomeWork_1209(); //구조체 , 문자열 과제 , 카드 게임

}

void GameAcademyTest() 
{
	test::Test_1208();	//야구

}

void PrivateTest() 
{
	//MY_MEMO_TEST::Input_Arr();
	MY_MEMO_TEST::ArrPotinter();
}
