#include "Example_1.h"

//�ڵ� ������ ���ؼ� ��ó���� (������ ������)
#define EXAMPLE_TYPE_PRINT					1

#define ARRAY_TYPE_SIMPLE					1
#define ARRAY_TYPE_MULTI_DIMENSION			2

//��� ���� ���� 
#define EXAMPLE_TYPE						EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE							ARRAY_TYPE_SIMPLE

#define ARRAY_SIZE_2						(sizeof(anNums) / 4)
#define ARRAY_SIZE_3(arr)					(sizeof(arr) / 4)

//Example_1
/*
	-�迭 : ���ӵǴ� ������!

	�迭�̶�?
	-���϶� �ڷ����� �����ʹ� N�� �̻� �����ؼ� ���� �� ������ ������ ����� �ǹ��Ѵ�.
	�迭�� �̿��ϸ� �����ϰ� ���� �����͸� �����ϴ� ���� ����

	C/C++ ����� �迭 ���� ���

	-�ڷ��� �迭�̸�[�迭ũ��];

	Ex)
	int value[5]; <- int�� ������ 5���� ������ �� �ִ� �迭 ����

	�迭�� ũ��� �⺻������ ���ͳ� ������� �����Ѵ�.
	(������: �����Ϸ��� ���� �ɺ��� ��� �Ǵ� ������ �̿��ؼ� �迭�� �����ϴ� ���� ����)

	�迭�� ũ��� ������ Ÿ�ӿ� �����Ǳ� �ݸ�, ������ ���� ��Ÿ�ӿ� �Ҵ�Ǳ� ������
	�⺻������ �迭�� ũ�⸦ ������ �����ϴ� ���� �Ұ����ϴ�.

	C/C++ ����� �迭 ���� ���
	-�迭�� [] (�ε��� ������)�� �ε��� ��ȣ�� ���ؼ� Ư�� �����Ϳ� �����ϴ� ����
	�����ϸ� �ε��� ��ȣ�� ������ 0 ~ �迭�� ũ�� -1�� ���Ѵ�.

	�迭�� ����� �� ���帹�� �ϴ� �Ǽ�
	-�迭�� �̿��� �� �߸��� �ε��� ��ȣ�� ���ؼ� �������� ������ �õ��ϸ�
	���� �Ǵ� ���α׷��� ����Ǵ� ������ �����Ѵ�.

*/

namespace EXAMPLE_1 
{
#define ARRAY_SIZE							5

	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		cout << "ȿ������ ���" << endl;
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
		//1���� �迭\
		int : �ڷ��� , num : �迭�� �̸�, [6]:�迭�� ����
		int num[5];

		cout << num << endl;
		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << "\n";

		//�迭�� �̷��� ��뵵 �����ϴ� -> ����� ���ÿ� �ʱ�ȭ�� ����
		int anNums[6] = { 0,1,2,3,4,5 };

		for (int i = 0; i < 6; i++) {
			cout << anNums[i] << endl;	
		}
		/*
			sizeof �����ڴ� ������ �ڷ��� �Ǵ� ��/����� ����Ʈ ũ�⸦ 
			����ϴ� ������ �Ѵ�.

			�׷��� ������ �����ڸ� �迭�� Ȱ�� �� ��� 
			�迭 ��ü�� ����Ʈ ũ�⸦ ����ϴ� ���� �����ϴ�.

			ex) 
			int anValues[5];

			sizeof(anValues)				 <<- �迭�� ��ü ũ��
			sizeof(anValues[0])				 <<- �迭�� ��� ũ��

			C/C++ ��� �迭�� �ʱ�ȭ ��� 
			-int anValuesA[10] = {0};			10�� ��� 0���� �ʱ�ȭ
			-int anValuesB[] = {1,2,3,4,5};		


			�迭 ������ ���ϱ� sizeof(ARR)/sizeof(ARR[0])

		*/
		cout << "�迭 ������ ���ϱ� sizeof(anNums)/sizeof(int)" <<endl;
		for (int i = 0; i < (sizeof(anNums) / 4); i++) 
		{
			cout << anNums[i] << endl;
		}

		cout << "��ũ�� ��� ����" << endl;
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			cout << anNums[i] << endl;
		}

		cout << "��ũ�� ��� ���� (�Լ� �ְ� ����)" << endl;
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
			//sizeA�� ����� ����� �ظ��ϸ� for���� ������ ���ƶ�
			//printf("%d%c",anValuesA[i], (i <= SizeA -2) ? ',' :' ');
		}
		cout << "\n";

		for (int i = 0; i < SizeB; ++i) {
			printf("%d%c", anValuesB[i], (i <= SizeB - 2) ? ',' : ' ');
		}

		//2����
		int anMatrix[5][5] = {  {1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5},
								{1,2,3,4,5} };
		//3����
		int anDimensionMatrix[5][5][5];


#else
		cout << "asdasd";
		

#endif		//<- EXAMPLE_TYPE
#endif		//<- ARRAY_TYPE

	}

}


//Example_1
/*
	-----------�迭-----------
	c++������ �迭�� �߿䵵�� ��������.
	��ü�Ҹ��Ѱ� ����.

	vector ����� ���� ���� �� �ִ� �Ǽ��� ����ó���� ���ش�.
	multimap �迭 ��ü ����

*/