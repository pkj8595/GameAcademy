#include "class1208_.h"
#include <random>

#define EXAMPLE_TYPE_PRINT					1
#define EXAMPLE_TYPE_TERNARY_OPERATOR		2
#define EXAMPLE_TYPE_STRING					3

//제어를 위한 구문 
#define EXAMPLE_TYPE						EXAMPLE_TYPE_STRING
namespace Class1208 
{

	//완벽한 난수 예제
	void class1208_1()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		
		int min = 1;
		int max = 10;

		//디바이스 생성
		std::random_device RandomDevice;
		//시드설정
		std::mt19937_64 rnd(RandomDevice());
		//범위설정
		std::uniform_int_distribution<int> range(min,max);

		int randomValue = range(rnd); // 랜덤시드 1~10

		int num[10] = { 0 };
		int temp = 0;
		int rand1, rand2;

		for (int fi = 0; fi< 10; fi++ ) {
			//숫자 생성
			for (int i = 0; i < 10; i++)
			{
				num[i] = i;
			}

			for (int i = 0; i < 20; i++)
			{
				rand1 = range(rnd)-1;
				rand2 = range(rnd)-1;


				temp = num[rand1];
				num[rand1] = num[rand2];
				num[rand2] = temp;
			}

			for (int i = 0; i < 10; i++) {
				if ((num[i] % 3) == 0 && num[i] !=0) {
					cout << num[i] << " ";
				}
			}
			cout << endl;
		}
		



#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

		/*
			삼항연산자란?
			-경우에 따라 if ~ else 문을 일부 대체할 수 있다.
				ㄴ잘 사용하면 코드 간결화 시킬 수 있다.
				ㄴ정말 써야하는 곳에서 쓰는것이 좋다. 
				ㄴ 너무 남발하면 가독성이 매우매우 떨어진다. 

			-문법 
			ㄴ(조건식)		?	true : false;
			ㄴ(numA > numB)		?	dataA : dataB;
		*/

		cout << "삼항 연산자 " << endl;
		int numA, numB =10;
		cout << "정수 입력 ";
		cin >> numA;

		numB = (numA > 0) ? numA : numB * (-1);
		cout << numB << endl;

		printf("\n");
		int numberA;
		int numberB = 10;
		int result;

		cout << "정수 입력 :";
		cin >> numberA;

		result = numberA > 10 ? numberA : numberB;
		cout << "삼항연산자 결과값 : " << result << endl;

#else
		/*
			-문자(열)
			문자열이란?
			-> 문자열이란 문자의 조합을 의미한다. 
			문자열을 활용 할 경우 문자가 조합된 단어 또는 문장을 표현하는 것이 가능하다.
			문자열을 활용하면 화면 상에 문자로 된 정보를 출력하는 작업이 수월하다.

			감이 보이면 넣어 보아라 
			
			char == 1byte
			1byte == 8bit
			1bit : 0 or 1 을 표현할 수 있는 가장 작은 단위
				ㄴ아스키 코드를 사용하여 문자를 표현할 수는 있다.
					ㄴ하지만 int(4byte)로 표현함에 있어 메모리 효율이 int 보다 char형이 어울린다.
					ㄴint 형으로 했을 경우 연상이 빠르다.
					ㄴ하지만 메모리 효율을 보면 char형이 더 좋다.
						ㄴ상황에 맞게 선택을 잘 해야한다.

			integer 가 제일 빠르다. 
			char 2번째
			bool 3번째 
			float 4번째 // 소수는 나눗셈을 반복하면서 사용하기 때문에 제일 느리다.

			저장소 데이터 단위
			BIT >> BYTE >> KB >> MB >> GB >> TB >> HB >> PB(페타) >> EB(엑사) >> ZB(제타)

		*/

		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja)<< "BYTE" << endl;
		cout << sizeof(numA)<< "BYTE" << endl;
		cout << sizeof(numB)<< "BYTE" << endl;
		cout << sizeof(numC)<< "BYTE" << endl;

		/*
			C / C++  언어에서 문자(열)을 다룰때 주의해야 하는 점 
			- C / C++  언어 타입에 굉장히 엄격하다.
				ㄴ 메모리 접근을 허용하기 때문에 오류를 미리 방지하기 위함

			★문자와 문자열의 차이점이 뭔가요?
				ㄴ 문자는 기본적으로 NULL문자가 삽입이 안된다.
				ㄴ 포인
			
			 
			사람은 문자와 문자열이 구분가능하지만 컴퓨터는 불가능하다.
			문자열은 문자 마지막에 null이 들어온다. 

			NULL 
			- iostream에 정의되어 있다.
			NULL은 0 주소를 의미하며 그렇기에 나중에 
			배울 포인터 변수를 초기화 할 때 사용할 수 있다.

			char *p = NULL;	==		char *p =0;
			int n = NULL;	!=		int   n=0;


		*/

		printf("\n");

		//''->문자
		//""->문자열
		char strA = 'A';
		cout << "strA = " << strA << endl;

		/*
			C / C++  언어의 문자열 표현 방법
			C / C++  언어는 "" 조합을 통해서 문자열을 표현하는 것이 가능하며 이때 char 배열을 이용한다.
			또한, 문자열 상수를 통해 초기화 할 경우 NULL 문자를 명시하지 않아도 된다.

			
		*/
		//배열값은 1byte 가 더 들어간다.
		char strB[4] = "abc";
		cout << "strB = "<<strB << endl;

		/*
			//문자
			char arrA[] = { 'h','i','~' }; // 컴파일러 입장에서 문자 
			//문자열
			char arrB[] = { 'h','i','~', '\0' }; // \0 은 아스키 코드에서 NULLs

			NULL의 포함 여부로 인해 문자와 문자열이 구분된다.
			NULL를 넣는 이유는 ?
			 ->메모리상에 문자열의 끝을 나타내기 위해서이다.

			 char str[100] = {.............}
				ㄴ 시작은 str[0], 끝은 \0 가 위치하고 있다

		*/

		//문자열은 \0를 만날 때 끝난다. 게임에선 스킵을 만들때 사용할 수 있다.

		char strC[20] = "i like game.!";
		cout << strC << endl;
		//출력문 : i like game

		strC[10] = '\0';
		cout << strC << endl;
		//출력문 : i like gam

		strC[2] = '\0';
		cout << strC << endl;
		//출력문 : i




#endif

	}
}
