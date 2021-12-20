
//한줄 주석 : 코드에는 영향을 미치지 않는다.
//주석이 많아지면 \
이런식으로도 작성이 가능하다.

/*
단위주석
*/

/*
프로그래밍 언어란?
- 컴퓨터와 대화 또는 명령을 할 수 있는 열련의 명령문을 작성할 수 있는 언어를 의미한다.
>>프로그래밍 언어를 사용하면 컴퓨터와 대화가능  

프로그래밍 언어를 이해하는 법

- 언어로 작성되어 있는

컴파일러는 해당 코드를 컴퓨터가 이해 할 수 있는 언어로 변환된다.

컴파일러가 프로그래밍 언어와 컴퓨터 사이에서 통역사 역할을 하기 때문에 우리는 컴퓨터 언어를 몰라도 컴퓨터에게 명령을 내릴 수 있는 것 이다.

컴파일러 - 모든 코드를 읽는다.(에러가 발생하더라도) 프로젝트가 크면 클수록 속도가 느리다. 
인터프리터 - 코드를 선별적으로 읽는다. 오류가 발생하면 빌드를 멈춘다. 


*/

//헤더파일
/*입출력을 담당하는 C++ 표준 라이브러리 
표준라이브러리는 보통 헤더파일 이렇게 사용한다.
프로그래밍 언어도 결국 사람이 만들었기 때문에 익숙해진다면 유츄가 가능하다.
i = input
o= output
stream은 기본적으로 여러장치에 입출력 작업이 실행되는 것은 "추상화" 시켜 놓은 것
iostream에 선언되어 있는 cout, cin, 그리고 endl
*/
#include <iostream>

/*
C++도 여러 버전이 있음.
 h. 헤더파일은 구버전 (c언어에서 넘어온 친구들이 많다.)
 헤더를 명시할 때 <> <-- 표준 
				"" <-- 사용자 정의 헤더 파일
*/
#include <Windows.h>

using namespace std;
//네임스페이스 std에 선언된 것은 std라는 이름공간의 선언 없이 접근하겠다는 뜻 
// 식별자의 충돌을 방지하기 || 자주 사용하는 std 등등을 생략하기 위해 사용한다. 


/*
메인함수 -> ep
주의점 메인함수는 하나만 존재한다. 
 c / c++ 에서 작성되는 프로그램이 가장 먼저 실행되는 부분
main함수가 없으면 프로그램 자체가 실행되지 않는다.

1. 전처리기 단계 >> 헤더파일 등을 불러온다.
2. 컴파일 단계 >> obj 파일로 만들어서 링커에 던진다.
3. 링크 단계 >> 흩어진 파일들을 연결시켜준다.

*/
void TextColor(int font, int background);

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7 
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15


void main() {
	//std::cout << "hello world \n";
	//자기 소개
	/*std::cout << "hello world" << std::endl;
	std::cout << "문자 출력은 " << " 쌍따옴표 안에 적는다."<< std::endl;
	printf(" hello world \n");*/

	/*std::cout << "이름 : " << "박경재" << std::endl;
	std::cout << "나이 : " << "29" << std::endl;
	std::cout << "연락처 : " << "010 4195 4955" << std::endl;
	std::cout << "주소 : " << "충청북도 청주시 흥덕구 풍년로" << std::endl;
	std::cout << "이메일 : " << "pkj8595@gmail.com" << std::endl;
	std::cout << "각오 : " << "project 4개" << std::endl;
	std::cout << "가고 싶은 회사 : " << "?????" << std::endl;
	std::cout << "만들고 싶은 게임 : " << "베드노스" << std::endl;
	std::cout << "취미 : " << "독서" << std::endl;
	std::cout << "이상형 : " << " 예쁜여자" << std::endl;
	std::cout << "char : " << char(64) << std::endl;*/

	for (int i = 65; i < 123; i++ ) {
		std::cout << "char : "<< i <<" : " << char(i) << std::endl;

	}
	
	/*TextColor(4, 15);*/
	TextColor(15, 0);
	cout << "■■■■■■■■■■■■■■■■■■■■" << endl;

	cout << "■■■■"; 
	TextColor(0, 0); 
	cout << "■■■■"; 
	TextColor(15, 0); 
	cout << "■■■■■■■■"; 
	TextColor(0, 0); 
	cout << "■"; 
	TextColor(15, 0); 
	cout << "■■■" << endl;
	TextColor(15, 0); 
	cout << "■■■"; 
	TextColor(0, 0); 
	cout << "■"; 
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■"<<endl;

	TextColor(15, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■"<<endl;

	TextColor(15, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■" << endl;

	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■"<< endl;

	
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■■";
	TextColor(YELLOW, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■" << endl;

	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(BROWN, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(RED, 0);
	cout << "■";
	TextColor(YELLOW, 0);
	cout << "■■";
	TextColor(RED, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■" << endl;

	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(YELLOW, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■■"; 
	TextColor(15, 0);
	cout << "■" << endl;

	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■" << endl;

	TextColor(15, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(BROWN, 0);
	cout << "■■■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■" << endl;

	TextColor(15, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■■■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(YELLOW, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(YELLOW, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(YELLOW, 0);
	cout << "■■■";
	TextColor(BROWN, 0);
	cout << "■■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(15, 0);
	cout << "■■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■";
	TextColor(0, 0);
	cout << "■■■";
	TextColor(YELLOW, 0);
	cout << "■■";
	TextColor(BROWN, 0);
	cout << "■■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(15, 0);
	cout << "■■■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■■■";
	TextColor(0, 0);
	cout << "■■■";
	TextColor(BROWN, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■■";
	TextColor(15, 0);
	cout << "■■■■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■■■■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■";
	TextColor(BROWN, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■";
	TextColor(0, 0);
	cout << "■";
	TextColor(15, 0);
	cout << "■■■■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■■■■■";
	TextColor(0, 0);
	cout << "■■■■";
	TextColor(15, 0);
	cout << "■■■■■■■" << endl;

	TextColor(15, 0);
	cout << "■■■■■■■■■■■■■■■■■■■■" << endl;
	
	

	TextColor(15, 0);

	

	


}

//cout -> 출력
	//endl -> 줄바꿈

	//프로그래밍에서 그냥은 없다. 
	//<< : 출력 연산자 : cout (c 언어는 printf())
	//<< : 입력 연산자 : cin (c 언어는 scanf())

/*
	c언어의 입출력
	c 입출력 헤더 (stdio.h) >> 입출력 담당

	printf / scanf 함수에서는 서식문자를 이용해야 한다. 
	- 서식문자는 문자열을 출력 또는 입력을 받을 때 해당 서식의 문자의 자리를
	 다른 수로 대체 하기 위한 자리 매김 역할을 하는 문자를 의미
	  서식 문자를 이용하면 고정되어 있지 않는 문자열을 출력 또는 입력 받는 것이 가능하다. 
	  서식 문자의 종류 
	  - %d int 정수
	  - %ld long 정수
	  - %lld long long 정수
	  - %c char 형 정수 
	  - %s 문자열 
	  - %f float형 실수 
	  - %lf double형 실수

	  printf 특수 문자
	  \n : 개행
	  \t : 수평탭
	  \v : 수직탭
	  \\ : \
	  \? : ?
	  \' : '
	  \" : "

*/
/*
	빨간색 밑줄을 보게 된다면 
	1.오타체크 
	2. 세미클론 체크 
*/


/*
 함수 선언
 void : 반환 x

*/
void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
};
