#include <iostream>
#include<time.h>
#include<string>


using std::endl;
using std::cout;
using std::cin;
using std::string;

string ComString(int com);

void main() 
{
	srand(time(NULL));

	int myMoney = 10000;
	int bettingMoney = 0;
	int comNumber = -1; 
	int myNumber = -1;


	for (int i= 0; i < 5;i++) {

		cout << "���� �ݾ� : " << myMoney << endl<< endl;
		if (myMoney <0) {
			cout << " --------GAME OVER------ " << endl;
			break;
		}

		comNumber = rand() % 3;
		cout << "comNumber : " << comNumber << " comDisplay : " << ComString(comNumber) << endl;

		cout << "���� �ݾ� �Է�" << endl;
		cin >> bettingMoney;
		if (bettingMoney < 1000) 
		{
			cout << "1000�� �̻� ���� �����մϴ�." << endl;
			i--;
			continue;
		}

		cout << "0 : ����, 1 : ����, 2 : ��" << endl;
		cin>> myNumber;
		cout << "myNumber : " << myNumber << " myDisplay : " << ComString(myNumber) << endl;

		if (myNumber >2 || myNumber < 0) {
			cout << "�ٽ� �Է��ϼ���. (0~2)" << endl;
			i--;
			continue;
		}

		switch (myNumber - comNumber)
		{
		case 0:
			cout << "���" << endl;
			myMoney += bettingMoney * 5;
			break;

		case 1 :case -2:
			cout << "�̱�" << endl;
			myMoney += bettingMoney * 3;
			break;

		case 2 : case -1:
			cout << "��" << endl;
			myMoney -= bettingMoney * 7;
			break;

		default:
			cout << "�ٽ� �Է��� �ּ��� "<< endl;
			break;
		}
		cout << "���� �ݾ� : " << bettingMoney << endl;
 	}


}

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

string ComString(int com)
{
	string comString ;

	switch (com)
	{
	case 0:
		comString = "����";
		break;
	case 1:
		comString = "����";
		break;
	case 2:
		comString = "��";
		break;
	default:
		break;
	}
	return comString;
}
