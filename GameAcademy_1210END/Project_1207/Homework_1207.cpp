#include "Homework_1207.h"

#define EVALUATION_COUNT			6
#define ARRAY_SIZE(arr)				sizeof(arr)/sizeof(arr[0])	//�迭 ������

namespace HOMEWORK_1207 
{

	
	void Homework_1207()
	{
		Homework_1207_1();
		Homework_1207_2();
		Homework_1207_3();
	}

	/*
	���� 1. ���� �� ��հ� ���ϱ�
		�׸��� 6��
		-���� �� : ĳ���� ��� ����Ʈ ������ ���� ���̵�(��Ÿ ���)
		 ���� : 1�� �迭�� �� ���� �� ��հ��� ���ؼ� ��� ->�� �Է� �ƴ�
	*/
	void Homework_1207_1()
	{
		string evaluationName[6] = {"ĳ����","���","����Ʈ","������","����","���̵�"};
		float evaluation[6] = {4.7, 3.0, 4.2, 3.5, 5.0, 4.1};

		float sum = 0;
		for (int i = 0; i < ARRAY_SIZE(evaluation); i++)
		{
			cout << evaluationName[i] << "    : " << evaluation[i] << endl;
			sum = sum + evaluation[i];
			//cout << sum << endl;

		}
		cout  <<"����  : "<< sum / EVALUATION_COUNT << endl;
		cout  <<"�迭 ũ�� ����  : "<< sum / ARRAY_SIZE(evaluation) << endl;
		cout  << ARRAY_SIZE(evaluation) << endl;
		
	}

	/*
		���� 2. ���ھ߱�
		-���� �˰��� Ȱ��
		-0~9 ������ ���� �� ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.(�ߺ� x)
		-��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ������ ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����
		-���� ������ ���ڰ� ��ǻ�� ���ڿ� ������ �ڸ����� �ٸ� ��� 1��(1b)
		-���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ���� ��� 1��ũ����ũ (1s)
		-���� �ش�Ǵ� ���ڰ� ������ 1�ƿ� (1out)
		-�̷��� �� �Ͽ� 3S�� ���� ��� (3���� ���ڿ� �ڸ����� ��� ���� ���)
		  ������� ������� ����� �����ָ� ������ ������.
		-ġƮ �ʼ�
	*/
	void Homework_1207_2()
	{
		cout << "======== ���� 2 =======" << endl;

		srand(time(NULL));

		//���� �˰���
		int num[10];
		int dest, sour, temp; //����(�������� �غ�)

		//���� �Ҵ�
		for (int i = 0; i < 10; i++) {
			num[i] = i;
		}

		//����
		for (int i = 0; i < 10; i++)
		{
			dest = rand() % 10;
			sour = rand() % 10;

			temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;
		}
		//���� Ȯ��
		for (int i = 0; i < 3; i++)
		{
			cout << "[" << i << "] = " << num[i] << endl;;
		}

		//���� �� ���� 
		int myNumber = 0;
		int myNumArr[3] = { 0 };
		int sCount = 0, bCount = 0, oCount = 0;
		int allCount = 0;


		cout << num[0]<<num[1]<<num[2] << endl;;
		cout << "0~999���� �Է��ϼ���(�ߺ� x)" << endl;

		do {
			allCount++;
			//ī��Ʈ �ʱ�ȭ
			sCount = 0, bCount = 0, oCount = 0;
			//myNumber �Է¹ޱ�
			cin >> myNumber;
			//myNumber �ɰ��� �迭�� ����
			myNumArr[0] = myNumber/100;
			myNumArr[1] = (myNumber / 10) % 10;
			myNumArr[2] = myNumber % 10;


			//�� �� ī��Ʈ
			for (int i = 0; i < 3; i++) 
			{
				for (int j = 0; j < 3; j++) 
				{
					if (num[i] == myNumArr[j]) 
					{
					
						if (i == j) //��Ʈ����ũ 
						{
							sCount++;
						}
						else //�� 
						{
							bCount++;
						}
					}
				}
			}
			//out Ƚ�� ���밪���� �ޱ�
			oCount = abs((sCount + bCount) - 3);
			cout << "\n";
			cout << " S: " << sCount << "  B: " << bCount << "  O: " << oCount << endl;
		} while (sCount < 3);

		cout << "================== "<< allCount <<"��°���� ���� ==================="<< endl;
	}
	/*
		���� 3. ���Ըӽ�
		-777���� ���� 3���� ���ý� ���ñݾ��� 12��
		-7�� ������ ���� ���� 3�� ���� �� ���ñݾ��� 5��
		-���� ���� 2�� ���ý� ���ñݾ��� 2��
		�׿ܿ��� ���ñݾ� �ұ�
		-ġƮ: ���� 3���� �Է��ؼ� 777�� ��÷�Ǵ� �� Ȯ���� �� �ְ� �����
	*/
	void Homework_1207_3()
	{
		cout << "======== ���� 3 =======" << endl;
		srand(time(NULL));
		int myMoney = 10000;
		int betting = 0;
		int num[3] = { 0 };
		int cheat = -1; //ġƮ
		int randomNum;
		int count=0;
		cout << "MONEY : " << myMoney << endl;

		do 
		{
		count = 0;
		randomNum = rand() % 1000;
		cheat = -1;

		if (myMoney <= 0) 
		{
			cout << " ========= GAME OVER ========= " << endl;
			return;
		}

		cout << "������� : 0, ġƮ��� :1, �׸��ϱ�: 2  " << endl;
		cin >> cheat;

		if (cheat ==1) {
			cout << "ġƮ��� ... �귿�� ���� �������ּ���(0~999)" << endl;

			cin >> cheat;
			randomNum = cheat;
		}
		else if (cheat == 2) {
			cout << "======== ���� 3 ���� =======" << endl;
			break;
		}
		else if (cheat < 0 || cheat > 999) {
			cout << "�ٽ� �Է��� �ּ���. " << endl;
		}

		cout << "MONEY : "<< myMoney << endl;
		cout << "���� �ݾ��� �������ּ���" << endl;
		cin >> betting;

		cout << "randomNum : " <<randomNum << endl;

		num[0] = randomNum / 100;
		num[1] = (randomNum / 10)%10;
		num[2] = randomNum % 10;

		cout << "num[0] : " << num[0] << endl;
		cout << "num[1] : " << num[1] << endl;
		cout << "num[2] : " << num[2] << endl;


		num[0] == num[1] ? count++ : NULL;
		num[1] == num[2] ? count++ : NULL;
		num[0] == num[2] ? count++ : NULL;



		switch (count)
		{
		case 2:case 1:
			myMoney += betting * 2;
			cout << " 2�� ���� 2�� ��÷ " << endl;
			break;

		case 3:
			if (randomNum == 777)
			{
				myMoney += betting * 12;
				cout << " --------777-------- 12�� ��÷ "<< endl;
			}
			else {
				myMoney += betting * 5;
				cout << " 5�� ���� 5�� ��÷ " << endl;
			}
			break;

		default:
			cout << " �� ���ñ��� �Ҿ����ϴ�. " << endl;
			myMoney -= betting;
			break;
		}
		cout << "MONEY : " << myMoney << endl;

		} while (true);

	}

	
	
}

