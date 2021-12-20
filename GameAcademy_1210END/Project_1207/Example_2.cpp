#include "Example_2.h"
#include <random>

namespace EXAMPLE_2
{

	void ArrayClass_1207() 
	{
		/*
			����(Random Number) : �������� ����� ���� �� �� ���� ��
				������ �о߿��� �� ���� ��Ʈ�� �ް� �߿��ϴ�.
				���и� �������� ���� ���� OR ���� �������� �� �� ������ �ϱ� ���� ������ �ʿ��ϴ�.
				��rand() �Լ��� ȣ���ϸ� 0~32767 �� ������ �� �ϳ��� �ҷ��´�. 2^16
				��rand() �Լ� ������ ��Ģ�� ���� ������ �����ϴµ� ��Ģ�� �׻� ���� ������ �����ϴ� ���� ���� �׻� ����.


			�迭�� �ʱ�ȭ�� ������ ����� �Ѵ�.

			srand�� ������ 
			��ǻ�Ϳ� ���� ��������� �����̱� ������ ������ �����ϴ�.
		*/
		srand(time(NULL));
		int damage = (rand() % 10) + 1;
		cout << "������ : " << damage << endl;

		for (int i = 0; i < 10; i++) {
			printf("%d\t", rand());
		}

		//���� �˰���
		int num[10];
		int dest, sour, temp; //����(�������� �غ�)

		for (int i = 0; i < 10;i++) {
			num[i] = i;
		}

		for (int i = 0; i < 10; i++) {
			cout << num[i] << endl;
		}

		//����
		for (int i=0; i<10; i++) 
		{
			dest = rand() % 10;
			sour = rand() % 10;

			temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;

		}

		//���� Ȯ��
		for (int i = 0; i < 10; i++)
		{
			cout << "[" << i << "] = " << num[i] << endl;;
		}

		//========= �Ϻ��� ���� ==========
		/*
			srand() / rand() �Լ��� ������ �Ϻ��� ������ ������ �� ���� ������ C++11 ����
			���� �߰��� ����̽��� �̿��ؾ� �Ϻ��� ������ �����ϴ� ���� �����ϴ�.
				�� Random Number Generator(�������鶧 �̰� ����)
			
			�������
			#include <random>
		*/
		//-----------------------------------------

		int RandomMin = 1;
		int RandomMax = 10;
		//����̽� ����
		std::random_device ORandomDevice;

		//�õ弳��
		std::mt19937_64 rnd(ORandomDevice());

		cout << "RandomDevice : \n" <<rnd << endl;

		//���� ����
		std::uniform_int_distribution<int> range(RandomMin, RandomMax);


		//�Ǽ�
		//std::uniform_int_distribution<float>
		//���԰� (����)
		//std::normal_distribution<double>
		cout << "\n";

		//���¹� 1
		int RandomValue = range(rnd);
		cout << "���Ⱚ :" << RandomValue << endl;
		//------------------------------------------------------------
		//���¹� 2
		int nNumberA = (ORandomDevice() % 10) + 1;
		int nNumberB = (ORandomDevice() % 10) + 1;

	}
}

