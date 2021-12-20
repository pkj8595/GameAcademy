#include "class1208_.h"
#include <random>

#define EXAMPLE_TYPE_PRINT					1
#define EXAMPLE_TYPE_TERNARY_OPERATOR		2
#define EXAMPLE_TYPE_STRING					3

//��� ���� ���� 
#define EXAMPLE_TYPE						EXAMPLE_TYPE_STRING
namespace Class1208 
{

	//�Ϻ��� ���� ����
	void class1208_1()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		
		int min = 1;
		int max = 10;

		//����̽� ����
		std::random_device RandomDevice;
		//�õ弳��
		std::mt19937_64 rnd(RandomDevice());
		//��������
		std::uniform_int_distribution<int> range(min,max);

		int randomValue = range(rnd); // �����õ� 1~10

		int num[10] = { 0 };
		int temp = 0;
		int rand1, rand2;

		for (int fi = 0; fi< 10; fi++ ) {
			//���� ����
			for (int i = 0; i < 10; i++)
			{
				num[i] = i;
			}

			for (int i = 0; i < 20; i++)
			{
				rand1 = range(rnd)-1;
				rand2 = range(rnd)-1;


				temp = num[rand1];
				num[rand1] = num[rand2];
				num[rand2] = temp;
			}

			for (int i = 0; i < 10; i++) {
				if ((num[i] % 3) == 0 && num[i] !=0) {
					cout << num[i] << " ";
				}
			}
			cout << endl;
		}
		



#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

		/*
			���׿����ڶ�?
			-��쿡 ���� if ~ else ���� �Ϻ� ��ü�� �� �ִ�.
				���� ����ϸ� �ڵ� ����ȭ ��ų �� �ִ�.
				������ ����ϴ� ������ ���°��� ����. 
				�� �ʹ� �����ϸ� �������� �ſ�ſ� ��������. 

			-���� 
			��(���ǽ�)		?	true : false;
			��(numA > numB)		?	dataA : dataB;
		*/

		cout << "���� ������ " << endl;
		int numA, numB =10;
		cout << "���� �Է� ";
		cin >> numA;

		numB = (numA > 0) ? numA : numB * (-1);
		cout << numB << endl;

		printf("\n");
		int numberA;
		int numberB = 10;
		int result;

		cout << "���� �Է� :";
		cin >> numberA;

		result = numberA > 10 ? numberA : numberB;
		cout << "���׿����� ����� : " << result << endl;

#else
		/*
			-����(��)
			���ڿ��̶�?
			-> ���ڿ��̶� ������ ������ �ǹ��Ѵ�. 
			���ڿ��� Ȱ�� �� ��� ���ڰ� ���յ� �ܾ� �Ǵ� ������ ǥ���ϴ� ���� �����ϴ�.
			���ڿ��� Ȱ���ϸ� ȭ�� �� ���ڷ� �� ������ ����ϴ� �۾��� �����ϴ�.

			���� ���̸� �־� ���ƶ� 
			
			char == 1byte
			1byte == 8bit
			1bit : 0 or 1 �� ǥ���� �� �ִ� ���� ���� ����
				���ƽ�Ű �ڵ带 ����Ͽ� ���ڸ� ǥ���� ���� �ִ�.
					�������� int(4byte)�� ǥ���Կ� �־� �޸� ȿ���� int ���� char���� ��︰��.
					��int ������ ���� ��� ������ ������.
					�������� �޸� ȿ���� ���� char���� �� ����.
						����Ȳ�� �°� ������ �� �ؾ��Ѵ�.

			integer �� ���� ������. 
			char 2��°
			bool 3��° 
			float 4��° // �Ҽ��� �������� �ݺ��ϸ鼭 ����ϱ� ������ ���� ������.

			����� ������ ����
			BIT >> BYTE >> KB >> MB >> GB >> TB >> HB >> PB(��Ÿ) >> EB(����) >> ZB(��Ÿ)

		*/

		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja)<< "BYTE" << endl;
		cout << sizeof(numA)<< "BYTE" << endl;
		cout << sizeof(numB)<< "BYTE" << endl;
		cout << sizeof(numC)<< "BYTE" << endl;

		/*
			C / C++  ���� ����(��)�� �ٷ궧 �����ؾ� �ϴ� �� 
			- C / C++  ��� Ÿ�Կ� ������ �����ϴ�.
				�� �޸� ������ ����ϱ� ������ ������ �̸� �����ϱ� ����

			�ڹ��ڿ� ���ڿ��� �������� ������?
				�� ���ڴ� �⺻������ NULL���ڰ� ������ �ȵȴ�.
				�� ����
			
			 
			����� ���ڿ� ���ڿ��� ���а��������� ��ǻ�ʹ� �Ұ����ϴ�.
			���ڿ��� ���� �������� null�� ���´�. 

			NULL 
			- iostream�� ���ǵǾ� �ִ�.
			NULL�� 0 �ּҸ� �ǹ��ϸ� �׷��⿡ ���߿� 
			��� ������ ������ �ʱ�ȭ �� �� ����� �� �ִ�.

			char *p = NULL;	==		char *p =0;
			int n = NULL;	!=		int   n=0;


		*/

		printf("\n");

		//''->����
		//""->���ڿ�
		char strA = 'A';
		cout << "strA = " << strA << endl;

		/*
			C / C++  ����� ���ڿ� ǥ�� ���
			C / C++  ���� "" ������ ���ؼ� ���ڿ��� ǥ���ϴ� ���� �����ϸ� �̶� char �迭�� �̿��Ѵ�.
			����, ���ڿ� ����� ���� �ʱ�ȭ �� ��� NULL ���ڸ� ������� �ʾƵ� �ȴ�.

			
		*/
		//�迭���� 1byte �� �� ����.
		char strB[4] = "abc";
		cout << "strB = "<<strB << endl;

		/*
			//����
			char arrA[] = { 'h','i','~' }; // �����Ϸ� ���忡�� ���� 
			//���ڿ�
			char arrB[] = { 'h','i','~', '\0' }; // \0 �� �ƽ�Ű �ڵ忡�� NULLs

			NULL�� ���� ���η� ���� ���ڿ� ���ڿ��� ���еȴ�.
			NULL�� �ִ� ������ ?
			 ->�޸𸮻� ���ڿ��� ���� ��Ÿ���� ���ؼ��̴�.

			 char str[100] = {.............}
				�� ������ str[0], ���� \0 �� ��ġ�ϰ� �ִ�

		*/

		//���ڿ��� \0�� ���� �� ������. ���ӿ��� ��ŵ�� ���鶧 ����� �� �ִ�.

		char strC[20] = "i like game.!";
		cout << strC << endl;
		//��¹� : i like game

		strC[10] = '\0';
		cout << strC << endl;
		//��¹� : i like gam

		strC[2] = '\0';
		cout << strC << endl;
		//��¹� : i




#endif

	}
}
