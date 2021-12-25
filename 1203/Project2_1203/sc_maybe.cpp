#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void main() {
		

	/*
		-조건문 
		- 프로그램이 실행되는 동안 정해져 있는 경우에 수에 맞춰서 서로 다른 결과를
		초출하기 위한 문법을 의미한다.
		조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능

		C/C++ 조건문

		-if ~else 문 
		-switch ~ case문 

		1. if ~else 문 
		- 조건석 실행 
		- 조건을 만족하는 IF 문을 발견하면 나머지는 if문을 건너뛴다.
		- if 와 else 문에서 조건의 만족 여부 검사는 위에서 아래로 절차지행적 방식을 따라간다.

		- 조건이 만족되어 해당 블록을 실행하고 나면 마지막 else까지도 건너뛴다.
		-하지만 조건이 만족하지 않으면 마지막의 else 문을 실행한다.

		if(조건식)
		{
			조건이 참이면 실행
		}
		else if()
		{
			조건이 참이면 실행
		}
		else
		{
			위 조건을 만족하지 않으면 실행 될 코드
		}

		if()
		if()
		if() >>> 이렇게 쓰면 컴파일러가 계속 if 문을 돌려본다.

		if()
		else if()
		else ()  >>>if문에서 만족을 했으면 else if 문을 컴파일러가 바로 넘긴다.
					로직이 복잡해 질 수록 속도면에서 압도적으로 유리

		else if 문을 것
	*/

	int nOperrator;
	cout << "내가 입력한 숫자 = ";
	cin >> nOperrator;

	if (nOperrator == 0) 
	{
		cout << "if 문 " << endl;
	}
	else if (nOperrator == 1)
	{
		cout << "else if 문" << endl;
	}
	else 
	{
		cout << "else 문" << endl;
	}

	/*
		2.switch문
		switch(인자값)
		case : 
		-인자 값에는 int형과 char형이 올 수 있다.
		하지만 보통 int 형을 많이 쓴다.

		switch ~ case 조건문의 default 키워드는 if 

		단, switch ~ case 조건문은 if else조건문과는 달리 범위에 해당되는 조건을 
		줄 수  없을 뿐만 아니라 조건문으로 사용될 수 있는 자료형은 정수형만을 취급한다.
		(정수형 이외에 값을 조건으로 줄 수 있지만 올바른 결과값이 안나올때가 많다.)

		switch문은 인자값에 따라서 실행 할 영역을 결정한다. 

		break 문은 반복문을 탈출하는 용도로 사용된다.
		break 문의 유무에 결과가 완전히 달라진다.

		스위치문에서 if문을 바꾸고 
		if에서 스위치문을 바꾸는 것을 연습하면 실력이는다.

	*/

	int intputNumber;
	cout << "0번, 1 번, 2번 중 하나를 선택하세요" << endl;
	cin >> intputNumber;

	switch (intputNumber) 
	{
	case 0:
		cout << "0번 입력시 출력" << endl;
		break;

	case 1:
		cout << "1번 입력시 출력" << endl;
		break;

	case 2:
		cout << "2번 입력시 출력" << endl;
		break;

	default:
		cout << " 그 외 입력시 출력" << endl;
		break;
	}

	/*
		스위치 문을 사용하는 경우는 일일이 조건 별로 셋팅을 해주기가 매우 용이
		주로 상태변화, 조건이 많은 경우에 사용된다.
		구조적으로 if문과 흡사하다.
			ㄴ switch문으로 돠는건 전부 if문으로 바꿀 수 있다.
			(단, 코드량이 엄청 나게 길어질 수 있다는건 감안해야 한다.)

			C/C++ 언어 제어문의 종류 
			1. return : 조건문에서 다시 첫 if 문으로 돌려 보낸다.
				ㄴ 함수에서는 값을 반환하고 초기화함.

			2.countinue : 조건문에서는 바로 이전 문항으로 
				ㄴ while문에서는 연산을 하지않고 뛰어넘는다.

			3.break : 만나면 멈춘다. while문에서는 while문을 탈출한다.

			4. goto : 보통 "점프문"이라고 불리며 goto에 있는 레이블에 따라서 중간에 
					  있는 코드를 싹다 무시하고 해당 레이블로 즉시 이동한다.
				ㄴ 보통 쓰지 말라고 한다. 프로그래머가 매우매우 괴롭다. 스파게티 코드가 된다.(기본기 면접때도 많이 나온다.)
				확신이 1000% 있을때 사용 (C 언어 문법)

	*/

	/*
		전위/ 증감
	*/
	int nValue = 10;

	cout << "증/감 연산 결과 출력  " << endl;

	cout << "전위 증감 연산 후 = " << ++nValue << endl; //11
	cout << "전위 증감 연산 후 = " << --nValue << endl; //10
	cout << "후위 증감 연산 후  = " << nValue++ << endl; //10
	cout << "후위 증감 연산 후  = " << nValue-- << endl; //11

	cout << "nValue의 값 : " << nValue << endl; // 10

	cout << "\n";

	int nValueA = 10;
	int nValueB = 10;
	int nValueC = 10;
	int nValueD = 10;

	cout << "증/감 연산 결과 출력" << endl;

	if ((nValueA == nValueB++)&&(nValueC++ < nValueD)) 
	{
		cout << "증/감 연산 결과 출력" << endl;

		cout << nValueA << endl;
		cout << nValueB << endl;
		cout << nValueC << endl;
		cout << nValueD << endl;

	}
	else {
		//조건이 false 이더라도 증감식은 작동해서 수를 증감시킨다.
		cout << nValueA << endl; //10
		cout << nValueB << endl; // 11
		cout << nValueC << endl; //11
		cout << nValueD << endl; //10
	}

	cout << "\n" << endl;
	for (int i = 2; i < 100 + 2; i++) {
		//cout << "출력 값 : "<< i*2 << endl;
		/*if (i%2==0) {
			cout << "출력 값 : " << i << endl;
		}*/
		if (i % 2 == 0) {
			cout << "출력 값 : " << i << endl;
		}


	}


	/*
		문제의 goto문... 
		문법 : goto 레이블;
	*/
	cout << "----------------goto----------------" << endl;

	for (int i = 2; i < 10; i +=1) 
	{
		for (int j = 1; j < 10; j += 1) 
		{
			if (i % 2 == 0) { // 2 4 6 8 
				goto EXIT_1;
			}
			if (i % 5 ==0 ) { // 5단에서 탈출
				goto EXIT_2;
			}
			cout << i << "x" << j << " = " << i * j << endl << endl;

		}
		EXIT_1:
			cout << "i 출력 후 실행 : " << i << endl << endl;
	}
	EXIT_2: 
		cout << "반복문 탈출" << endl;


}