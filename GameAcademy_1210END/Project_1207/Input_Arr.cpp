#include "Input_Arr.h"
#include <random>

namespace MY_MEMO_TEST 
{
	void MY_MEMO_TEST::Input_Arr()
	{


		int num[10] = { 0 };
		cout << "�Է� 3��" << endl;;
		for (int i = 0; i < 10; i++)
		{
			cin >> num[i];
		}

		//cin >> num[0] >> num[1] >> num[2]; // �̷��� ����ϱ� ���ؼ��� �ֿܼ��� �����̽��� ������ ���ڸ� ����� �ν�
		cout << num[0] << num[1] << num[2];

		/*
			�� �ΰ��� ������ ���� ������ �Ѵ�.
			�Է� ������ ' '���� ������ ������ �ܼ� ��ƿ��Ƽ�� �⺻���� ���ÿ� �����ִٰ� �Ѵ�.
		*/
	}


}


