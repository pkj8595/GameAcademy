#include "Class1208_1.h"

//헤더 -> 중요도와 무게가 다르다.(메모리)
//#include <iostream>
//#include <time.h>
//#include <Windows.h> // 씹 돼지 iostream보다 10배 이상 무겁다.

// 코드 정리 
//안된거 꼴도 보기 싫음. 

void Class1208::class1208_2()
{
	//로또 번호 추출 
	//	ㄴ ^^

	srand(time(NULL));

	cout << "한방에 가자 " << endl;
	int number[45];

	for (int i = 0; i < 45; i++ ) 
	{
		number[i] = i;
	}

	for (int i = 0; i < 1000; i++)
	{
		int sour = rand() % 45;
		int dest = rand() % 45;

		int temp = number[sour];
		number[sour] = number[dest];
		number[dest] = temp;
	}

	for (int i = 0; i < 7; i++) 
	{
		cout << number[i] << endl;
	}

	


}
