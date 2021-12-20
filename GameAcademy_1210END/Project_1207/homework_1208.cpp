#include "homework_1208.h"
#include <random>

#define ARR_SIZE(arr)		sizeof(arr)/sizeof(arr[0])

namespace HOMEWORK 
{
	

	void homework_1208()
	{

		homework_1208_01();
		homework_1208_02();
		homework_1208_03();
	}

	/*
		����1 . �ζ� ��÷��

		-��÷��ȣ 6�� + ���ʽ� ��ȣ 1��

		1�� : ��÷��ȣ 6���� ���� �Է��� 6���� ���ڰ� ������					//
		2�� : ��÷��ȣ 5�� + ���ʽ� ��ȣ 1���� ���� �Է��� 6�� ���ڰ� ������
		3�� : ��÷��ȣ 5���� ���� �Է��� 5���� ���ڰ� ������
		4�� : ��÷��ȣ 4���� ���� �Է��� 4���� ���ڰ� ������
		5�� : ��÷��ȣ 3���� ���� �Է��� 3���� ���ڰ� ������
		
		1.45���� ��ȣ >>�迭
		2.����
		3.com : 7  
		4.�Է� my :6

		5.���Ǹ���°�
		6.��ȣ ��  7 6 
		7. ��� 
		


		����3. ���� ����
		-�� ���� ������ ���� ���ϴ� ���α׷��� �����.			�Լ�?
		-�ΰ��� ���ڸ� ����ڸ� ���� �Է� �޴´�.				�����Է�
		-�Է��� �� ���� ������ ���� ����ϸ� ok
		-����ó�� �ʼ� : 5���� 1�� ������. -> X
		-������ ���� 100 �̻��̸� ���α׷��� ����ȴ�.
		-ex ) 1�� 5�� �Է� -> ����� : 9

	*/
	void homework_1208_01()
	{

		srand(time(NULL));

		cout << "=========== ����1 . �ζ� ��÷�� ===========" << endl;

		int comNumber[45];
		
		for (int i = 0; i < 45; i++)
		{
			comNumber[i] = i;
		}

		for (int i = 0; i < 1000; i++)
		{
			int sour = rand() % 45;
			int dest = rand() % 45;

			int temp = comNumber[sour];
			comNumber[sour] = comNumber[dest];
			comNumber[dest] = temp;
		}

		//�ζ� ��÷ ��ȣ ���
		for (int i = 0; i < 7; i++)
		{
			cout << comNumber[i] << "  ";
		}
		cout << endl;
		
		int myNumber[6] = { 0 };
		int count = 0;
		bool isLuck= false;

		cout << "���ڸ� 6�� �Է����ּ���" << endl;
		for (int i = 0; i < 6; i++) 
		{
			cout << i+1 << " : ";
			cin >> myNumber[i];
		}
		//���� ��
		for (int i = 0; i < 6; i++) 
		{
			for (int j = 0; j < 7; j++) {
				if (myNumber[i] == comNumber[j]) 
				{
					if (myNumber[i] == comNumber[6])
					{
						isLuck = true;
					}
					count++;
				}
			}
		}

		cout << "�����÷ "  <<endl;
	
		//case�� 3,4,5 ���� �� ����
		switch (count) {
		case 3:
			cout << "5�� ��÷ " << endl;
			break;
		case 4:
			cout << "4�� ��÷ " << endl;
			break;
		case 5:
			cout << "3�� ��÷ " << endl;
			break;
		case 6:
			if (isLuck) {
				cout << "2�� ��÷ " << endl;
			}
			else {
				cout << "1�� ��÷ " << endl;
			}
			break;
		
		}
	}

	/*
	���� 2. �ֹι�ȣ ������

		-�����ϸ� ���ϴ� ���� �Է��� �޴´�.(4�ڸ� , 2�ڸ�)		�Է�
			�� EX : 1975 / 75
		-���� ���� �Է� (2�ڸ�,1�ڸ� ó��)
			��ex: 06/6
		-����ó�� : 31���� �ִ� �ް� 30�� ������ �ִ� ��, 2���� ó��
		-�������� (���ڴ� 1 �Ǵ� 3, ���ڴ� 2 �Ǵ� 4)
		�ٸ����� �Է��ϸ� ������ �������� ����
		-������ 6�ڸ� �������� ��� (�� 0�� ���� �ȵȴ�.)

	*/
	void homework_1208_02()
	{
		int min = 1;
		int max = 9;
		std::random_device RandomDevice;
		std::mt19937_64 rnd(RandomDevice());
		std::uniform_int_distribution<int> range(min, max);
		
		int socialNum[13] = { 0 };
		int inputNum = 0;
		int month = 0, day = 0;

		cout << "�¾ �⵵ �Է� (4�ڸ� or 2�ڸ�)" <<endl;
		cin >> inputNum;
		socialNum[0] = (inputNum /10)%10;
		socialNum[1] = inputNum % 10;

	BACK_:

		cout << "�¾ �� �Է� (2�ڸ� or 1�ڸ�)" <<endl;
		cin >> month;
		socialNum[2] = month / 10;
		socialNum[3] = month % 10;

		cout << "�¾ �� �Է� (2�ڸ� or 1�ڸ�)" <<endl;
		cin >> day;
		socialNum[4] = day / 10;
		socialNum[5] = day % 10;

		if (!CheckMonth(month,day)) 
		{
			cout << "�¾ ���� ���� �ٽ� �Է����ּ���" << endl;
			goto BACK_;
		}

		cout << "���� �Է� (���� 1,3  ���� 2,4)" <<endl;
		cin >> inputNum;
		socialNum[6] = inputNum % 10;

		socialNum[7] =range(rnd);
		socialNum[8] =range(rnd);
		socialNum[9] =range(rnd);
		socialNum[10] =range(rnd);
		socialNum[11] =range(rnd);
		socialNum[12] =range(rnd);

		for (int i = 0; i < ARR_SIZE(socialNum); i++) {
			cout << socialNum[i];
			if (i == 5)
				cout << " - ";
		}
		cout << "\n";
		cout << "============= ���� 2 END ============="<<endl;

	}

	bool CheckMonth(int month , int day)
	{
		bool isPossible = true;
		int checkDay = 0;
		//31 : 1 3 5 7 8 10 12
		switch (month) 
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				checkDay = 31;
				break;
			case 2:
				checkDay = 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				checkDay = 30;
				break;
			default:
				isPossible = false;
				break;
		}
		if (day > checkDay) {
			isPossible = false;
		}
		else {
			isPossible = true;

		}

		return isPossible;
	}

	

	void homework_1208_03()
	{
		cout << "=========== ����3 . �������� ===========" << endl;
		cout << "�� ������ �Է��ϰ� �� ���� ������ ���� ���ؼ� ����մϴ�." << endl;

		int num[2] = { 0 };
		int sum = 0;

		while (sum < 100) {

			cin >> num[0];
			cin >> num[1];
			if (num[0] > num[1]) {
				cout << "�ٽ� �Է����ֽʽÿ�" << endl;
			}

			for (int i = num[0] + 1; i < num[1]; i++)
			{
				sum += i;
			}
			cout << "sum : " << sum << endl;
		}

	}

}