#include<iostream>
#include<time.h>

using namespace std;

/*
���� 1
-switch���� �̿��� �����.
-ġƮ ��ɰ� ���� ��� �߰� (�ʱ� ������ : 10000)
-�ּ� ������ 1000�� ����
-5���� �ϰų� ���� ���� ���� ���� ������ ���� ����
-�̱�� �ǵ��� x3�� ��� ���� �ǵ��� x7�� �Ҵ´�.
-����� �ǵ��� x5�� �� ��´�.

���� 2
���ݱ��� ��� ����� �����Ѵ�.
��� ������ �ߴ��� ����ȭ ���ѿ´�.

���� ����
��å�� ��´�
�迭�� ������ �� ������ �´�.

*/

void main() {
	srand(time(NULL));
	cout << "===========GAME START===========" << endl;


	int betting = 0;
	int myMoney = 10000;
	int comNumber = -1;
	int myNumber = -1;


	for (int i = 0; i < 5; i++) 
	{
		betting = 0;

		//���� �ݾ� Ȯ��
		cout << "my money : " << myMoney << endl;
		if (myMoney < 0 ) 
		{
			cout << "===========GAME OVER=========" << endl;
			return;
		}
		//���� �ݾ� ����
		cout << "������ �ݾ��� �����ּ��� (1000�� �̻�)" << endl;
		cin >> betting;

		if (betting < 1000) 
		{
			i--;
			continue;
		}

		//���������� 
		comNumber = rand() % 3;
		cout << "��ǻ�� �� �� �� : " << comNumber << endl;

		cout << "0 :����, 1: ����, 2: ��" << endl;
		cin >> myNumber;


		switch (myNumber-comNumber)
		{
		case 0:
			cout << "���" << endl;
			myMoney += betting * 5;
			break;
		case 1: case-2:
			cout << "�̱�" << endl;
			myMoney += betting * 3;
			break;

		case 2: case-1:
			cout << "��" << endl;
			myMoney -= betting * 7;
			break;

		default:
			cout << "�ٽ� �Է��� �ּ���" << endl;
			break;
		}
		cout << endl;


	}

}
