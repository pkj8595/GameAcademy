#include "Class1208_1.h"

//��� -> �߿䵵�� ���԰� �ٸ���.(�޸�)
//#include <iostream>
//#include <time.h>
//#include <Windows.h> // �� ���� iostream���� 10�� �̻� ���̴�.

// �ڵ� ���� 
//�ȵȰ� �õ� ���� ����. 

void Class1208::class1208_2()
{
	//�ζ� ��ȣ ���� 
	//	�� ^^

	srand(time(NULL));

	cout << "�ѹ濡 ���� " << endl;
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
