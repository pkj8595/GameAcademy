#include<iostream>
#include<time.h>

//using namespace std;

using std::cout;
using std::endl;
using std::cin;

void main() 
{
	/*
		연산자란? 
			-프로그램이 동작 할 때 정해져 있는 특정 역할을 수행하는 키워드 연산자라고 한다.
			연산자를 이용하면 다양한 프로그램 로직을 만들어 내는 것이 가능하다.

			기본적인 연산자 
			산술 연산자 (+, -, *, /, %)
			비교 연산자 (==, !=, <, >, <=, >=)
			할당 연산자 (=, +=, -=, *=, /=, %=)
			비트 연산자 (& , | , ^)
			논리 연산자 (&&, ||, !)
			형변환 연산자 ((특정 자료형))

			비교연산자
			num == num2
			num != num2
			num < num2
			num > num2
			num <= num2
			num >= num2

			논리연산자(bool)
			bool num;
			num			  //num이 true면 실행한다.
			num && num2   //num과 num2가 둘다 true면 실행한다.
			num || num2   //num와 num2 중 하나라도 true면 실행한다.
			!num	      //num false면 실행한다.

			(강제)형변환 연산자
			((특정 자료형)) 변수명
			int Val = 0;
			(float) Val
			- C/C++ 언어에서 형변환 연산자를 이용하면 간단하게 해당 변수의 자료형을 변경하는 것이 가능하다.

			static_cast<int>(obj)

			-C 스타일 명시적 형변환 (type)obj는 경우에 따라 코드의 가독성이 떨어지고 버그가 있다.(강제 형 변환)
			그렇기 때문에 안정성을 우선시 한다면 캐스팅 연산자를 사용한다.

			static_cast<int>(obj); -> obj를 type으로 바꾼다. (단, 논리적으로 가능한 경우에만 변환 ->안정성 up)

	*/
	int NumberA = 0;
		NumberA = 1;
		NumberA++; // a= a+1;j
		NumberA = 6;
		NumberA++;	//7
		NumberA += 5;	//12
		NumberA--;	//11
		NumberA -= 2;	//9
		NumberA *= 3;	//27
		NumberA /= 2;	//13

		cout << NumberA << endl;

		/*
		C/C++언어는 연산자를 이용해서 결과를 만들어 낼때 해당 연산자에 사용된 변수 (데이터) 의 자료형에 따라서 결과가 달라진다.

			ex)
			정수 + 정수 = 정수
			정수 + 실수 = 실수

		반복문
		반복문이란? 프로그램의 특정 부분을 일정 횟수 이상 반복해서 실행하도록 하기 위한 문법이며
		반복문을 이용하면 반복적으로 발생되는 구간을 간단하게 처리하는 것이 가능
			ㄴ 잘 사용하면 편하다.

		C / C++ 반복문의 종류 
		1. for		/ 반복 횟수가 정해져 있을 때 좋음.
		2. while	
		3. do while

		for문 
		-구성
		초기식 : 반복을 위한 변수의 선언 및 초기화 
		조건식 : 반복의 조건을 검사하는 목적으로 선언
		증감식 : 반복의 조건을 거짓으로 만들기 위해 증가 및 감소를 연산

		for(초기식 ; 조건식 ; 증감식)
		{
			반복이 되는 문장
		}

		-초기값은 맨 처음에 한번만 수행되고 조건식이 참인 경우에만 실행된다. 

		*/

		//C스타일은 컴파일러의 버전 때문에 변수를 선언하고 for 문에서 초기화 한다.
		for (int i = 0; i < 10; i++) {
			cout << i <<endl;
		}

		// endl vs \n (개행)에 대해...
		/*
			출력 버퍼라는 것이 남아 있다. 
			endl :은 출력버퍼를 모두 날리고 내려간다.
			\n   :출력버퍼를 두고 내려간다. 속도는 압도적으로 빠르다. 


		*/

		int numberB = 0;
		for (; numberB < 5; numberB++) 
		{
			cout << "이렇게 사용을 하면.. ?" << numberB << endl;
		}

		/*
			for문은 필요에 따라 초기식, 조건식, 증가식 생략이 가능하다.
			
			생략에 따른 for문의 유형
			1.초기화 생략			for(; i<10; i++)
			2. 조건식 생략			for(i =1; ; i++)
			3. 초기화 증감식 생략		for(; i<10;)
			4. 모두 생략				for(;;)

			i++ 는 후위증가
			++i 는 전위증가
		*/
		/*int j = 1;
		for (int i = 0; i < 5; i++) {
			cout << j++ << endl;
			cout << ++j << endl;
		}*/

		for (int i = 1; i < 11; i++) {
			cout << i << endl;
		}
		for (int i = 10; i > 0; i--) {
			cout << i << endl;
		}
		
		//-----------------------99단
		cout << " 구구단 몇 단까지? " << endl;
		int inputGugu = 0;
		cin >> inputGugu;

		cout << " 구구단 몇 행? " << endl;
		int inputRow = 0;
		cin >> inputRow;

		int z = 1;
		int initZ = 1;
		int booZ = z + inputRow;
		inputGugu++;
		while (z < inputGugu)
		{
			for (int j = 1; j < 10; j++) {
				for (z= initZ; z<booZ && z<inputGugu; z++) {
					cout << z << "x" << j << "=" << z * j <<"  ";
				}
				cout << endl;
			}
			cout << endl;
			booZ = booZ + inputRow;
			initZ = initZ + inputRow;
		}
		//-----------------------


		/*
			2.while문 
			무한 (~loop): 반복 조건에 1(true)이 들어갈 경우 무한 루프에 빠지게 된다.
			-> 후에 배울 breake 문으로 빠져나올 수 있다.
			-> 조건이 참(true) 일때만 작동 

			while문은 특정 조건을 주고 그 조건을 만족하는 동안 특정 영역을 계속해서 반복하는 구조
				ㄴ whlie문은 반복의 조건을 거짓(무너뜨리는)으로 만드는 것이 굉장히 굉장히 중요하다.

			3. do While
			-while 문과 차이점 : 조건을 검사하는 시점이 다르다. 
			실행이 되고 조건이 들어감.

			코딩테스트 1번 ~ 2번
			//사용자의 입력을 받은 정수를 모두 더하는 프로그램이 있다.
			사용자는 지금까지 입력한 숫자의 합을 모두 보고 싶고 프로그램을 종료하고 싶다면 특정 키를 누르면 된다.

			do While이 입력받는 이유는 
			정수를 입력 받아야한다. 

			기본적으로 횟수가 정해져 있다면 while <=> do ~while 문이 자연스럽게 바뀌지만 반복의 횟수가 정해져 있지 않고
			언제 종료가 될지 모른다먄 고민이 필요하다. <- 회사에서 물어보는 방식
			위에 작성한 do ~ while 문을 while 문으로 바꾸면 바로 종료된다. 
			강제로 while문 안에 진입을 시키려고 하면 num을 0이 아닌 다른 값으로 초기화 해야하는데 
			"이러면 내가 코드를 컨트롤하는게 아니라 소스에 코딩 방식을 바꿔 나가는 느낌이 든다."

		*/



		int playerHP = 1000;
		while (playerHP > 0) {
			int hit = 100;
			playerHP -= hit;
			cout << "체력 = " << playerHP << endl;
		}

		cout << "\n";
		int numC = 0;
		while (numC < 5) {
			numC++;
			cout << "sadf" << endl;
		}



		/*
			과제 1 랜덤숫자 담기
			1~5까지 랜덤숫자를 인트형 변수에 담아라
			6~19까지 랜덤 숫자를 인트형 변수에 담아라
			23~189까지의 랜덤 숫자를 인트형 뱐수에 담아라

			한줄조사 반복문 +배열 + 조건문
			- 반복문의 종류와 역할에 대해서 조사해온다.
			-공책에 적어온다. 
		*/

		srand(time(NULL));

		//랜덤과제
		cout << "\n랜덤과제 ABC" << endl;
		//과제1
		int num1=0;
		num1 = rand() % (4+1)+1;
		cout << num1 << endl;
		//과제2
		int num2 = 0;
		num2 = rand() % (13+1) + 6;
		cout << num2 << endl;
		//과제3
		int num3 = 0;
		num3 = rand() % ((189-23)+1) + 23;
		cout << num3 << endl;

		//연산자 과제
		cout << "\n연산자 과제 A" << endl;
		int nA, nB;
		cout << "첫번째 수 입력" << endl;
		cin >> nA;
		cout << "두번째 수 입력" << endl;
		cin >> nB;

		cout << "입력 받은 수 :" << nA <<", "<< nB << endl;
		cout << "덧셈 : " << nA + nB << endl;
		cout << "뺄셈 : " << nA - nB << endl;

		cout << "\n연산자 과제 B" << endl;
		int numB1, numB2, numB3 =0;
		cout << "첫번째 수 입력" << endl;
		cin >> numB1;
		cout << "두번째 수 입력" << endl;
		cin >> numB2;
		cout << "세번째 수 입력" << endl;
		cin >> numB3;

		int nResultB = (numB1 + numB2) * (numB3 + numB1) % numB1;
		cout << "입력 받은 수 :" << numB1 << ", " << numB2<<", "<< numB3 << endl;
		cout << "(numB1 + numB2) * (numB3 + numB1) % numB1 = "<<nResultB << endl;

		cout << "\n연산자 과제 C" << endl;
		int numC1, numC2 = 0;
		cout << "첫번째 수 입력" << endl;
		cin >> numC1;
		cout << "두번째 수 입력" << endl;
		cin >> numC2;
		cout << "몫 : "<<numC1 / numC2 << endl;
		cout << "나머지 : "<<numC1 % numC2 << endl;

		cout << "\n for문 99~1" << endl;
		for (int i = 99; i > 0; i--) {
			cout << i << ", ";
		}

		cout << "\n for문 짝수 0~100" << endl;
		for (int i = 0; i < 50; i++) {
			cout << i*2 << ", ";
		}

		int numD1= 100;
		cout << "\n while문 99~1" << endl;
		while (numD1 > 0)
		{
			numD1--;
			cout << numD1 << ", ";
		}

		int  numD2 = 0;
		cout << "\n while문 짝수 0~100" << endl;
		while (numD2 < 50)
		{
			numD2++;
			cout << numD2 * 2 << ", ";
		}

		cout << "\n반복문 숙달" << endl;
		cout << "정수 하나를 입력하세요 (-10~10)" << endl;
		int numF1 = 0;
		cin >> numF1;

		int numF2 = numF1;
		cout << "입력받은 값 : "<< numF1 << endl;

		while (numF1 > -15 && ((numF2 >= -10)&&( numF2<=10)) ) {
			cout << "numF1 : "<< numF1 << endl;
			numF1 = numF1 - 5;
		}




		//반복문 과제

		/*
		- 두개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성

		- 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성

			 (num1 + num2) * (num3 + num1) % num1 = ?

		- 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

			 EX) 7과 2가 입력되면 몫으로 3, 나머지 1이 출력 되면 된다


		과제2. 반복문 출력

		※ for문 버전, While문 버전

		- 99에서 1까지 출력

		- 1부터 100까지 출력-> 짝수만


		*/

		

}