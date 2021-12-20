#include "Input_Arr.h"
#include <random>

namespace MY_MEMO_TEST 
{
	void MY_MEMO_TEST::Input_Arr()
	{


		int num[10] = { 0 };
		cout << "입력 3개" << endl;;
		for (int i = 0; i < 10; i++)
		{
			cin >> num[i];
		}

		//cin >> num[0] >> num[1] >> num[2]; // 이렇게 사용하기 위해서는 콘솔에서 스페이스로 띄어줘야 숫자를 제대로 인식
		cout << num[0] << num[1] << num[2];

		/*
			위 두개의 문장은 같은 역할을 한다.
			입력 받을시 ' '으로 나뉘는 이유는 콘솔 유틸리티의 기본적인 셋팅에 관련있다고 한다.
		*/
	}


}


