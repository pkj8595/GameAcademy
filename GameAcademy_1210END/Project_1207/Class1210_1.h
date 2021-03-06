#pragma once
#include <iostream>

using namespace std;

struct tagPlayer 
{
	int hp;
	int mp;
};

/*
	클래스란?
	-속성에 해당하는 필드 (필수)와 행위에 
	해당하는 메서드(함수)의 집합을 클래스라고 한다.
	변수와 함수의 집합

	class CUint
	{
	}; << 클래스에 세미콜론이 붙는다.

	-C /C++ 언어의 클래스는 접근 제어 지시자를 이용해서 변수 
	또는 함수에 접근 할 수 있는 영역을 제한하는 것이 가능하다.

	- class 하면 떠올릴 3가지 (접근제어 지시자 종류)

	1.private (클래스에 포함 된 함수에서만 접근이 가능하도록 허용) -> 개인정보에 비유 가능
		-이 속성을 가진 멤버는 외부에서 엑세스 할 수 없으며 구조체의 멤버 함수만 엑세스 할 수 있다.(캡슐화)
		외부에서는 당연히 private 멤버를 읽을 수도 없고 존재 자체도 알려지지 않는다.

	2.public (어디서든 접근이 가능하도록 허용) -> 이름에 비유할 수 있을 듯
		-이 속성을 가진 멤버는 외부로 공개되어 누구나 읽고 쓸 수 있으면 함수의 경우는 호출까지 가능하다. 
		구조체가 자신의 속성이나 동작을 외부로 공개하는 수단이 되며
		public 멤버를 소위 "interface"라고 할 수있따.

	3.protected(상속 관계에 있을 때 자신 클래스에서 부모 클래스에 접근 하도록 허용)
		-private과 마찬가지로 외부에서는 엑세스 할 수 없으나 상속된 파생 클래스는 이 멤버를 엑세스 할 수있다.


	-구조체와 클래스의 차이점
		ㄴ 구조체는 공개하고 클래스는 숨긴다.

	다중 상속 지원하나?	지원하네?	다중상속은 쓰지말기(작성 할때 꼬여 버림)
	슈퍼 키워드를 쓰면 최상위 부모 객체를 불러온다. 

	★★ 중요

	-클래스는 객체의 안정성을 위해 외부에서 함부로 값을 건들이지 못하도록 멤버를 숨기는 경향이 있지만 
	구조체는 가급적으로 멤버를 공개하는 성향이 있다.

	-구조체의 디폴트 엑세스 지정이 public 일 수 밖에 없는 이유는 C 언어와의 호환성 때문 
		(구조체는 c++에서 필요없다고 했지만 c의 호환성 때문에 지원)

	질문 ㅣ 클래스와 구조체의 차이점? (data segment??) 
	-class는 구조체의 확장형이다.
		ㄴ 디폴트 엑세스 지정자는 public ->구조체
		ㄴ 디폴트 엑세스 지정자는 private ->클래스

	-클래스는 기본적으로 접근제어 지시자를 명시하지 않알을 경우 기본적으로 private으로 선언


*/

class Class1210_1
{
	//클래스가 아직 익숙하지 않다
	//	ㄴ 익숙하지 않다면 무조건 변수는 일단 private
	//__super		부모객체 접근

	//클래스의 멤버 변수에는 "_" 를 붙여서 사용하는게 약속
private:
	int _Number;
	int _x;
	int _y;
	tagPlayer _Player[3];

	//클래스 내에서 변수를 선언하고 초기화할때 기본 정석은 변수 따로, 초기화 따로
	//	ㄴ 변수명 선언은 헤더 파일에서
	//	ㄴ 값을 넣는건 cpp 파일에서 한다.

	//c++11부터 멤버변수를 헤더에서 값을 줄 수 있게 되었지만 왠만하면 나눠서 값을 할당(초기화)해라

	//클래스에서 심볼릭 상수 변수 선언
	//	ㄴ 반드시 헤더에서 초기화를 진행하고 시작해야 한다.
	const int m_nConstValue = 0;


	//public 에서는 당분간 함수를 선언하자. 변수 선언도 가능 
	//헤더파일에서 연산은 하지 말자
	//인라인 함수와 템플릿 함수는 헤더에서 작성
public :
	//함수 선언 (몸통 x)
	//몸통은 cpp에서 구현한다. 
	void outPut();

	//위치 좌표를 보여주는 함수 
	void showPosision(void);

	//위치좌표를 증가시킬 함수
	void movePosision(void);

	//위치 좌표를 세팅하는 함수
	void setPosision(int x,int y);

	//생성자	: 주로 멤버 변수의 값을 원하는 값으로 대입하는 작업을 한다.
	//또한 그 외 객체가 동작하는데 필요한 모든 초기화 처리를 담당하기도 한다.
	Class1210_1();

	//소멸자 : 객체가 바꿔 놓은 환경을 원래대로 돌려 놓거나 할당한 자원을 회수하는 역할을 한다.

	~Class1210_1();

	//나중가면 생성자와 소멸자를 직접만들어서 쓴다.

};

