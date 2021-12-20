#pragma warning(disable : 4996)
#include "HomeWork_1209.h"
#include <string>

using std::string;
using HOMEWORK::drawCard;

/*
struct drawCardPatten_1 {
	string card1;
	string card2;
	string card3;
	string card4;
};
*/

void HOMEWORK::HomeWork_1209()
{
	HOMEWORK::HomeWork_1209_1();
	HOMEWORK::HomeWork_1209_2();
	HOMEWORK::HomeWork_1209_3();
	HOMEWORK::HomeWork_1209_4();
}


struct MyGame
{
	string Title;	
	string gita;
	int rating;
	float price;
	float score;

};


/*
	����1. ����ü�� ����Ͽ� ������ ���̽� �����
		- ���� Ÿ��Ʋ��, ����, ����, ����, Ư�̻���
		- �迭�� ����Ѵ�.
*/
void HOMEWORK::HomeWork_1209_1()
{
	MyGame mygame[5] = { 
							{"��������", " ���̵� �� ��� ���� ���� ", 33000, 9.5f, 9.3f},
							{ "�ν�Ʈ��ũ", " ���� �ٿ������ô���", 45000, 9.2f, 9.7f },
							{ "��ƺ��3", " �밡��! ", 37000, 8.5f, 8.1f },
							{ "������ũ", " ���ع��ȴ�. ", 20000, 5.6f, 6.3f },
							{ "�߷ζ�Ʈ", "  ����ѹ� ", 55000, 9.1f, 4.7f },
						};

	for (int i = 0; i < 5; i++) {
		cout << mygame[i].Title;
		cout << mygame[i].gita;
		cout << mygame[i].rating;
		cout << mygame[i].price;
		cout << mygame[i].score;
		cout << endl;
	}

	
}

/*
����2. ���ڿ� ����

	-���ڸ� �Է¹޾� �Է¹��� ���ڸ� �Ųٷ� ���
	ex) ABCD -> DCBA

	-�ִ� �״�� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ���
	ex) ASDFG -> AFDSG

	-�ֹι�ȣ �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ���
*/
void HOMEWORK::HomeWork_1209_2()
{
	cout<< "����2 - 1 ==================================" << endl;

	char inputStr[30];
	int strSize = 0;
	cin >> inputStr;
	strSize = strlen(inputStr);

	for (int i = strSize; i >= 0; i--) {
		cout << inputStr[i];
	}
	cout << endl;

	cout << "����2 - 2 ==================================" << endl;

	strSize = 0;
	cin >> inputStr;
	strSize = strlen(inputStr);

	int back = 0;
	int temp = 0;
	back = strSize;
	if (strSize % 2 != 0) //Ȧ��
		back--;
	for (int i = 0; i <= strSize; i++)
	{
		if (i%2 == 0)  // ¦��
			cout << inputStr[i];
		else 
			cout << inputStr[back];
		back--;
	}
	cout << "\n";

	cout << "����2 - 3 ==================================" << endl;

	cin >> inputStr;
	strSize = strlen(inputStr);
	/*char* strTest = inputStr;
	cout << inputStr << strTest << endl;

	strtok(inputStr, "-");
	cout << inputStr << endl;

	HOMEWORK::strBackCut(strTest,"-");
	cout << inputStr<< strTest << endl;*/

	for (int i = 0; i < strSize;i++) 
	{
		if (inputStr[i] != '-')
		{
			cout << inputStr[i];
		}
	}

}
void HOMEWORK::strBackCut(char* dest,char* token) 
{
	char* temp = dest;
	while (*dest) 
	{
		dest++;
	}

	while(true)
	{
		dest--;
		if (*dest == *token) 
		{
			while (*dest)
			{
				*temp = *dest;
				dest++;
			}
			*dest = '\0';
			return;
		}
	} 

}

/*
���� . 3
	-ġƮ�ʼ�
	ex) �� 1~13	�� �� ��

	A �� 1
	J �� 11
	Q �� 12
	K �� 13

	- �������� 13���� ī�� 52���� ī�带 ���															//ī�� 52�� ����
	- 52���� ī�带 �ּ� �ѹ� �������� ���� �� �� ���ϸ��� 3�徿 �����´�.								//�迭 3����
	- ���ʿ� ��ġ�� ������ ī�带 ���� �ּ� ���þ� �̻��� �ݾ��� ����									//2�� ��� ,����, �ּҹ���
	- ������ ����° ī���� ���� �ռ� ���µ� ī�� ������ ���̿� �ִٸ� ���ñ��� �ι谡 �Ǿ� ������ �߰�		// a < key < b , ���� 2��
	- �ݴ��� �����ݿ��� ������ ��ŭ ����																//���ñ� �ұ�
	- �ѹ� ������ ī��� ��������																		//ī�� ������

*/
void HOMEWORK::HomeWork_1209_3()
{
	cout << "=============== ���� 3 ===============" << endl;
	//������ 3�� 
	string cardPatten[3];
	int card[52];
	int cardNum[3];
	int dest, sour, temp;
	int myMoney = 10000;
	int betting = 0;
	//�õ� �ʱ�ȭ
	srand(time(NULL));
	//drawCardPatten_1 STCardPatten = { "��" ,"��","��" "��" };
	

	//ī�� ����
	for (int i = 0; i < 52; i++) 
		card[i] = i;
	//ī�� ����
	for (int i = 0; i < 1000; i++) 
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}
	
	cout << " 3���� ������ ����° ���� �� �� ���̿� ������ �¸��մϴ�." << endl;
	//���� ����
	for (int i=0; ;i+=3) 
	{
		cout << "MY COIN : " << myMoney<<endl;

		if (i > 52) 
		{
			cout << "ī�尡 ��� �����Ǿ� ";
			break;
		}
		if (myMoney < 1000) 
		{
			cout << "�������� �����Ͽ� ";
			break;
		}

		//ī�� 3�� ��� �� ����
		for (int j = 0; j < 3; j++) 
		{
			cardPatten[j] = drawCard(card[i + j] / 13);
			cardNum[j] = (card[i + j] % 13) + 1;
			//display
			cout << cardPatten[j] << " : " << ShowCard(cardNum[j]) << endl;

		}
		cout << "���ñݾ��� �����ֽʽÿ�. (1000�̻�)" << endl;
		
		//���ñݾ� ���� �� ����ó��
		while (true)
		{
			cin >> betting;
			if (betting >= 1000 && betting <= myMoney)
			{
				break;
			}
			cout << "���ñݾ��� �ٽ� �������ֽʽÿ�. (1000�̻�)" << endl;
		}

		//����° ī�� Ȯ��
		cout << "����° ī�� : ";
		cout << cardPatten[2] << " : " << ShowCard(cardNum[2]) << endl;

		//���� �¸����� �� ����
		if (cardNum[2] > cardNum[0] && cardNum[2] < cardNum[1] || 
			cardNum[2] < cardNum[0] && cardNum[2] > cardNum[1])
		{
			cout << "���� ���� ���ñ��� 2�� " << endl;
			myMoney += betting * 2;
		}
		else 
		{
			cout << "���� ����" << endl;
			myMoney -= betting;
		}
		cout << "\n";
	}
	cout << " ������ ����˴ϴ�. " << endl;
}

//�ȸ��� ��������� ������� 
	string HOMEWORK::drawCard(int card)
	{
		
		string cardPatten[] = { "��", "��", "��", "��"};

		return cardPatten[card];
	}

	string HOMEWORK::ShowCard(int card)
	{
		switch (card)
		{
		case 1:
			return "A";
		case 11:
			return "J";
		case 12:
			return "Q";
		case 13:
			return "K";
		default:
			return std::to_string(card);
		}
	}


/*
	���� 4
	-		 "��" "��" "��" "��"

				"��" "��" "��" "��"

				"��" "��"
	-  ������ (5 x4)
	-  ¦�� ������ ��ȣ�� ��� ���µ� ���·� �־�� �Ѵ�.
	-  2���� �������� ġƮ �����
	1. ġƮŰ�� ������ �и� ���� ���� ���� �÷��̾�� �����ְ� 5�� �Ŀ� �ٽ� ���� ����
	2. ġƮŰ�� ������ �� ���� ī�带 �����ϰ� ���� ���� ����ڰ� ������ �ѽ��� ���߸鼭 ������ �����Ѵ�.
*/

	
void HOMEWORK::HomeWork_1209_4()
{
	cout << "���� 4 ========== ���߽��ϴ�..(�ð�����) " << endl;

	string cardPatten[] = { "��", "��", "��", "��","��", "��", "��", "��","��", "��" };
	int card[20];
	int dest, sour, temp;
	int myMoney = 10000;
	int drawTemp =0;

	//�õ� �ʱ�ȭ
	srand(time(NULL));
	//ī�� ����
	for (int i = 0; i < 20; i++)
		card[i] = i;
	//ī�� ����
	for (int i = 0; i < 150; i++)
	{
		dest = rand() % 20;
		sour = rand() % 20;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	//��� ī�� ���
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++) 
		{
		drawTemp = (card[(i * 4) + j]) % 10;
		//drawTemp = card[(i * 4) + j];
		//cout << "|"<< drawTemp << "|";
		cout << "|"<< cardPatten[drawTemp] << "|";
		}
		cout << "\n";
	}


}


