#include "Example_1.h"

//코드 관리를 위해서 전처리문 (선택적 컴파일)
#define EXAMPLE_TYPE_PRINT					1

#define ARRAY_TYPE_SIMPLE					1
#define ARRAY_TYPE_MULTI_DIMENSION			2

//제어를 위한 구문 
#define EXAMPLE_TYPE						EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE							ARRAY_TYPE_SIMPLE

#define ARRAY_SIZE_2						(sizeof(anNums) / 4)
#define ARRAY_SIZE_3(arr)					(sizeof(arr) / 4)

//Example_1
/*
	-배열 : 연속되는 나열된!

	배열이란?
	-동일란 자료형의 데이터는 N개 이상 선언해서 제어 및 관리가 가능한 기능을 의미한다.
	배열을 이용하면 간단하게 여러 데이터를 조작하는 것이 가능

	C/C++ 언어의 배열 선언 방법

	-자료형 배열이름[배열크기];

	Ex)
	int value[5]; <- int형 데이터 5개를 보관할 수 있는 배열 선언

	배열의 크기는 기본적으로 리터널 상수만을 지원한다.
	(주의점: 컴파일러에 따라서 심볼릭 상수 또는 변수를 이용해서 배열을 선언하는 것이 가능)

	배열의 크기는 컴파일 타임에 결정되기 반면, 변수의 값은 런타임에 할당되기 때문에
	기본적으로 배열의 크기를 변수로 정의하는 것이 불가능하다.

	C/C++ 언어의 배열 접근 방법
	-배열은 [] (인덱스 연산자)와 인덱스 번호를 통해서 특정 데이터에 접근하는 것이
	가능하며 인덱스 번호의 범위는 0 ~ 배열의 크기 -1을 지닌다.

	배열을 사용할 때 가장많이 하는 실수
	-배열을 이용할 때 잘못된 인덱스 번호를 통해서 데이터의 접근을 시도하면
	버그 또는 프로그램이 종료되는 현상을 맞이한다.

*/

namespace EXAMPLE_1 
{
#define ARRAY_SIZE							5

	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "효율적인 방법" << endl;
		cout << "\n";

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << "\n";

		//0~5
		//1차원 배열\
		int : 자료형 , num : 배열의 이름, [6]:배열의 길이
		int num[5];

		cout << num << endl;
		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << "\n";

		//배열은 이렇게 사용도 가능하다 -> 선언과 동시에 초기화가 가능
		int anNums[6] = { 0,1,2,3,4,5 };

		for (int i = 0; i < 6; i++) {
			cout << anNums[i] << endl;	
		}
		/*
			sizeof 연산자는 지정된 자료형 또는 변/상수의 바이트 크기를 
			계산하는 역할을 한다.

			그렇기 때문에 연산자를 배열에 활용 할 경우 
			배열 전체의 바이트 크기를 계산하는 것이 가능하다.

			ex) 
			int anValues[5];

			sizeof(anValues)				 <<- 배열의 전체 크기
			sizeof(anValues[0])				 <<- 배열의 요소 크기

			C/C++ 언어 배열의 초기화 방법 
			-int anValuesA[10] = {0};			10개 모두 0으로 초기화
			-int anValuesB[] = {1,2,3,4,5};		


			배열 사이즈 구하기 sizeof(ARR)/sizeof(ARR[0])

		*/
		cout << "배열 사이즈 구하기 sizeof(anNums)/sizeof(int)" <<endl;
		for (int i = 0; i < (sizeof(anNums) / 4); i++) 
		{
			cout << anNums[i] << endl;
		}

		cout << "매크로 상수 선언" << endl;
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			cout << anNums[i] << endl;
		}

		cout << "매크로 상수 선언 (함수 넣고 실행)" << endl;
		for (int i = 0; i < ARRAY_SIZE_2; i++)
		{
			cout << anNums[i] << endl;
		}

		for (int i = 0; i < ARRAY_SIZE_3(anNums); i++)
		{
			cout << anNums[i] << endl;
		}

		




#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE

		int anValuesA[ARRAY_SIZE] = { 1,2,3,4,5 };
		int anValuesB[] = { 1,2,3,4,5 };

		const int SizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int SizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		printf("%d, %d, %d, %d, %d, %d", anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4], anValuesA[5]);
		

		cout << "\n";

		for (int i = 0; i < SizeA; ++i) {
			//sizeA는 상수다 상수는 왠만하면 for문을 돌리지 말아라
			//printf("%d%c",anValuesA[i], (i <= SizeA -2) ? ',' :' ');
		}
		cout << "\n";

		for (int i = 0; i < SizeB; ++i) {
			printf("%d%c", anValuesB[i], (i <= SizeB - 2) ? ',' : ' ');
		}

		//2차원
		int anMatrix[5][5] = {  {1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5} };
		//3차원
		int anDimensionMatrix[5][5][5];


#else
		cout << "asdasd";
		

#endif		//<- EXAMPLE_TYPE
#endif		//<- ARRAY_TYPE

	}

}


//Example_1
/*
	-----------배열-----------
	c++에서는 배열의 중요도가 낮아진다.
	대체할만한게 많다.

	vector 사람에 의해 나올 수 있는 실수를 예외처리를 해준다.
	multimap 배열 대체 가능

*/