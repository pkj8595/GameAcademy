#pragma warning(disable : 4996)
#include "Class1209_2.h"


void LinePrint();


void CLASS_1209::Class_1209_2()
{
	cout << "" << endl;


	/*
		C/C++  언어 문자열 조작 함수 
		-strlen - 문자열의 길이를 계산하는 기능 
		-strcmp - 문자열의 비교하는 기능 
		-strcpy - 문자열의 복사하는 기능 
		-strcat - 문자열을 합치는 기능
	*/

	char strA[100] = "abcdf";
	int lenA = strlen(strA);

	cout << strlen(strA) << endl;
	cout << "문자열의 길이 : " << lenA << endl;

	LinePrint();

	/*
		2. strcmp(문자열, 문자열) : 문자열 비교----------------------------------
			ㄴ 반환값이 때에 따라 다르다.

			stringA < stringB	=	0보다 작다
			stringA == stringB	=	0
			stringA > stringB	=	0보다 크다

	*/

	char strB[10] = "abc";
	char strC[10] = "abc";
	char strD[10] = "abb";

	int lenB = strcmp(strB, strC);
	int lenC = strcmp(strB, strD);

	cout << "문자열 비교" << lenB << endl;
	cout << "문자열 비교(다를때)" << lenC << endl;

	//3. strcpy(문자열 , 문자열 ) : 문자열 복사 --------------------------------

	char strE[10] = "ABCDEFG";
	char strF[10] = "HIJK";

	cout << "문자열 복사 전 : " << strE << endl;

	strcpy(strF, strE);

	cout << "문자열 복사 후 : " << strF << endl;

	//주의점 : 앞에 있는 문자열의 크기가 복사할 문자열 보다 작게되면 터진다.
	//복사를 받는 자료형이 데이터가 부족하면 배열 오류가 난다.

	//4. strcat(문자열 , 문자열) : 문자열 연결 -------------------------------------

	char strG[100] = "오늘 과제는 ";
	char strH[100] = "없으면 좋겠지?";

	cout << "문자열 연결 전 : " << strG << endl;

	strcat(strG, strH);
	cout << "문자열 연결 후 : " << strG << endl;

	//4대 문자열은 아니지만 파일 입출력에 많이 쓰인다.

	//5. strtok: 문자열 자르기 (자를조건(EX:_ / \ 등등))------------------------------

	char strI[10] = "ABCD EFGH";
	strtok(strI," ");

	cout << "자르고 난 후 : " << strI << endl;

	char strJ[100] = "이곳에 문자를"; //배열의 원소값으로 들어가서 스택에 쌓인다. 
	char* strK = "이렇게도 사용이 가능"; //캐릭터 배열 포인터의 첫 주소를 얻고 문자를 할당 << 리터럴 문자열이라서 안좋다고 한다.
	std::string strZ = "이게 된다";



}

void LinePrint()
{
	cout << "=========================" << endl;

}
