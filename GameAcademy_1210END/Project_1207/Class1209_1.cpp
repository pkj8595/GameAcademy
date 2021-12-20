#include "Class_1209.h"
#include <string>

#define EAMPLE_TYPE_STRUCT			1
#define EAMPLE_TYPE_ENUM			2
#define EAMPLE_TYPE_UNION			3
#define EAMPLE_TYPE_CLASS			4

#define EAMPLE_TYPE					EAMPLE_TYPE_UNION


namespace CLASS_1209 
{
	/*
		-사용자 정의 자료형		가장 많이쓰는 순서
		1. 구조체				2(3)
		2. 클래스				1
		3. 공용체				4
		4. 열거형 (enum)			3(2) >> 게임에서는 열거를 많이쓴

		사용자 정의 자료형이란?
		-기존의 자료형을 기반으로 새로운 자료형의 조합을 만드는 기능
			ㄴ 사용자 정의 자료형을 활용하면 특정 데이터의 집합을 표현하는 것이 가능

		C/C++ 언어 사용자 정의 자료형의 종류

		- 열거형 (심볼릭 상수를 정의하는 자료형) 
		- 구조체 (특정 데이터의 집합을 정의하는 자료형)
		- 공용체 (특정 데이터의 집합을 정의하는 자료형)
		- 클래스 (....) >> 구조체의 확장판

		C/C++ 언어 열거형 선언방법

		//특징 : 상수처럼 쓸 수 있다. 순서대로 숫자로 쓸 수 있다.
		enum EUintType
		{
			UNIT_TYPE_A,
			UNIT_TYPE_B,
			UNIT_TYPE_C
		};

		C/C++ 언어 구조체
		-특징은 하나 이상의 변수를 묶어서 새로운 자료형을 정의한다.
		C++에는 엄연히 클래스가 있기 때문에 구조체를 굳이 사용하지 않으려고 하면 
		사용하지 않을 수 있지만 ... C언어와의 호환성 대문에 C++역시 구조체를
		그대로 사용할 수 있다.
		C++ 구조체 (C언어 x)는 구조체의 기능을 확장하여 클래스와 동일한 구조와 기능을 가진다.


		구조체 VS 공용체(유니온)
		-일단 형식은 비슷해 보일지 모르나 사용용도는 전혀 다르다.
		-구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면
		공용체는 하나의 메모리를 가지고 각각의 필드가 서로 공유하는 구조를 지닌다.

		이러한 메모리 구조 때문에 구조체와는 달리 공용체는 필드의 마지막 값만 유효하다.


	*/
	
	enum EUintType
	{
		UNIT_TYPE_A,
		UNIT_TYPE_B,
		UNIT_TYPE_C
	};

	//구조체 선언 방법
	// 8byte
	struct STUnitData 
	{
		int m_nID;
		int m_nLevel;
	};

	//유니온 선언 방법 ST >> struct 약자 표기해서 사용
	// 4byte		do while 친구
	// 4byte의 데이터를 공유하여 같이쓴다. 
	//
	union STUnitDataA
	{
		int m_nID;
		int m_nLevel;
	};
	

	struct tagFamily 
	{
		char* name;
		int age;
		int height;
		float weigth;
		bool wedding;
	};

	struct tagPlayer
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};

	/*
		열거형 상수는 기본적으로 특정 값을 할당하지 않으면 컴파일러에 의해서 
		자동으로 0부터 순서대로 값이 부여된다.
		단, 특정 상수에 값이 할당했을 경우 해당 상수 밑으로는 차례대로 해당 상수에 
		할당된 값 이후부터 들어간다.
	*/

	enum EColor_Type
	{
		RED,		// 1
		GREEN,		// 2
		BLUE =1000, // 1000 값을 지정해주면 값이 들어가고 다음 값이 지정된 값에서 증가한다.
		BLACK,		// 1001
		WHITE		// 1002
	};

	//	면접 질문 : enum 클래스가 무엇인가요?

	//이넘 친구들은 대문자로 쓴다.
	//enum의 데이터는 전역으로 들어온다. 
	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN,
	};

	//현업에서는 enum class 을 쓰고 쪼여서 쓴다. c++ 11 부터 추가 
	//enum키워드의 데이터는 전역으로 쓰여서 쓰기가 힘들다. 
	//enum의 
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN,
	};

	//익명 enum선언
	//	ㄴ 익명의 규칙은 다른 사용자 정의 자료형에도 그대로 적용된다.
	enum 
	{
		UNIIT_SIZE = 5
	};

	union STData 
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	class MyClass
	{
	
	};
	


	void Class_1209_1()
	{
		//C 콘솔에서 bool을 출력하면 0 || 1 값이 뜨는데  하단의 문장을 쓰면 true || false 로 출력이 된다.
		cout << std::boolalpha;

#if EAMPLE_TYPE == EAMPLE_TYPE_STRUCT

		//C 스타일
		//struct tagFamily Famaily;

		//구조체를 메모리롤 올린다. 선언
		// C++ 방식

		//c++에서 . 이 보이면 할당이 어떻게 됐을까 고민해야한다. (동적할당인지 )
		//구조체는 정적할당만 가능 
		//클래스는 동적 정적 둘다 가능
		tagFamily human;

		human.name = "춘리";
		human.age = 18;
		human.height = 230;
		human.wedding = false;
		human.weigth = 45;

		cout << "이름 : " << human.name << "\n"
			<< "age : " << human.age << "\n"
			<< "height : " << human.height << "\n"
			<< "wedding : " << human.wedding << "\n"
			<< "weigth : " << human.weigth << "\n" << endl;
		
		tagPlayer player;
		player.hp = 100;
		player.mp = 100;
		player.att = 100;
		player.def = 100;
		player.speed = 100;

		tagPlayer marin = { 100,150,10,1,0};

		cout << "\n";

		//스트럭처 배열이 가능할까?

		tagPlayer arrPlayer[4] ={
									{100,100,100,100,100},
									{90 ,90 ,90 ,90,90},
									{80,80,80,80,80},
									{7,7,7,7,7},
								};

		for (int i = 0; i < 4; i++) 
		{
			cout << i + 1 << "번째 플레이어" << endl;
			cout << "hp : "<< arrPlayer->hp << endl;
			cout << "hp : " << arrPlayer[i].hp << endl;
			cout << "======================"<< endl;
		}
		


		
#elif EAMPLE_TYPE == EAMPLE_TYPE_ENUM

		// 이넘 클래스에서 선언된 수는 생성을 하지 않아도 상수처럼 쓸 수 있다?
		cout << "BLACK : " << BLACK << endl;
		cout << "RED   : " << EColor_Type::RED << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		switch (m_motion)
		{
		case R_WALK:
			cout << "오른쪽 걷기" << endl;
			break;
		case L_WALK:
			cout << "왼쪽 걷기" << endl;
			break;
		case 3:
			cout << "오른쪽 뛰기" << endl;
			break;
		case 4:
			cout << "왼쪽 뛰기" << endl;
			break;
		default:
			break;
		}

		if (m_motion == L_WALK) 
		{
			m_motion = R_RUN;
			if (m_motion == R_RUN) 
			{
				cout << "오른쪽으로 뛴다." << endl;
			}
		}


#elif EAMPLE_TYPE == EAMPLE_TYPE_UNION
/*
	사용하는 이유 : 여러개의 데이터형들이 모여 있을때 잘 사용하면 메모리 공간 절약
	잘못 사용하면 데이터가 날아감 

	인벤토리 아이템 수를 표현 할때 쓰면 편하다.

*/
STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== 공용체 ==" << endl;
cout << "정수 데이터 : " << stData.m_nDataA << endl;
cout << "정수 데이터 : " << stData.m_fData << endl;

cout << "정수 데이터 : " << stData.m_nDataB << endl;

#else

#endif
	}
}

