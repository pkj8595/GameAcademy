#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::oct;

void main() 
{
	srand(time(NULL));

	//int comNumber;
	//int myNUmber;

	//comNumber = rand() % 100 + 1; // 1~100

	//cout << "ġƮ : " << comNumber << endl;
	//cout << "0~ 100 ���� ���� �� �ϳ��� ���غ��� " << endl;

	//while (true) 
	//{
	//	cin >> myNUmber;
	//	Sleep(1000); // 1�ʰ� ���� 

	//	if (myNUmber == comNumber) 
	//	{
	//		cout << "ã�Ҵ�! " << endl;
	//		Sleep(3000);
	//		system("cls"); // window ��� �ֵ���ǥ ���� ���ڿ��� ����? (Ŭ���ý����� ����) (�ý�������)
	//		break;

	//	}
	//	else if (myNUmber < comNumber) 
	//	{
	//		cout << "�� ū ���� �Է��غ����� " << endl;

	//	}
	//	else {
	//		cout << "�� ���� ���� �Է��غ����� " << endl;
	//	}
	//}
	

	/*
		����1. ���������� ����
		if()���� �̿��� �����. (switch�� x ){
		- �� 5�����ϸ� ��������


		


		����3 
		�� ���
		������ ���
		for
		for
		for if
		for if
		for @ 12


		��������   >> for�ϳ��� if������ ������ ��� 3��
		
		�������� , �Լ� 
		���� �� 2���� �̻��� �������� ���� ��÷
	*/
	cout << "=====================�������ٺ�=====================" << endl;
	int a = 0; //����
	int	b = 1; //����
	int	c = 2; //��

	for (int i = 0; i < 5; i++) 
	{

		int myNum = -1;
		int computerNumber = rand() % 3; // 0 1 2

		cout << "�ȳ��� ����! ����! ����! ��! " << endl;
		do {
			cout << "\n";
			cout << "(0 : ����, 1: ����, 2:��) ";
			

			cin >> myNum;
			} while (myNum >2  || myNum <0 );
		
		cout << "���� �� �� : " << myNum << endl;
		cout << "��ǻ�Ͱ� �� �� : " << computerNumber << endl;

		if (myNum == computerNumber) 
		{
			cout << "����." << endl;
		}
		else if (((myNum == 0)&& (computerNumber ==1)) ||
					((myNum == 1)&&(computerNumber==2)) ||
					((myNum == 2)&& (computerNumber == 0))) 
		{
			cout << "����." << endl;
		}
		else 
		{
			cout << "�̰��." << endl;
		}
		cout << endl;

	}
	cout << "=================���������� ����====================" << endl;

	/*
	���� 2 
		-���ǹ� 
		-�����ϸ� ����� �Է��� �ް� �Է��� ���ڿ� ���� ??�� ���� ���
		4�Է½� >> 4���� 30�� �Դϴ�. >> �ٽ� �Է�Ŀ��Ʈ Ȱ��ȭ
		-1 ~ 12������ Ȯ�� �����ؾ��ϰ� �̿��� ���ڴ� ����ó�� 
		�ټ� ���Է��ϸ� ���α׷� ����
	*/

	/*
	  1                January     31
	  2                February    28 (non-leap) / 29 (leap)
	  3                March       31
	  4                April       30
	  5                May         31
	  6                June        30
	  7                July        31
	  8                August      31
	  9                September   30
	  10                October     31
	  11               November    30
	  12               December    31
	*/

	cout << "====================����2======================"<< endl;

	int inputMonth = -1 , nCount = 0;
	
	do{
		cout << "���� �Է����ּ���. (0�� ������ Ż��) "<< nCount << endl;
		cin >> inputMonth;
		switch (inputMonth)
		{
		case 0:
			goto EXIT_1;
		case 1:
			cout << "1���� 31 �Դϴ�." << endl;
			break;
		case 2:
			cout << "2���� 29 �Դϴ�." << endl;
			break;
		case 3:
			cout << "3���� 31 �Դϴ�." << endl;
			break;
		case 4:
			cout << "4���� 30 �Դϴ�." << endl;
			break;
		case 5:
			cout << "5���� 31 �Դϴ�." << endl;
			break;
		case 6:
			cout << "6���� 30 �Դϴ�." << endl;
			break;
		case 7:
			cout << "7���� 31 �Դϴ�." << endl;
			break;
		case 8:
			cout << "8���� 31 �Դϴ�." << endl;
			break;
		case 9:
			cout << "9���� 30 �Դϴ�." << endl;
			break;
		case 10:
			cout << "10���� 31 �Դϴ�." << endl;
			break;
		case 11:
			cout << "11���� 30 �Դϴ�." << endl;
			break;
		case 12:
			cout << "12���� 31 �Դϴ�." << endl;
			break;
		default:
			cout << "1 ~ 12 ������ ���� �Է��� �ּ���." << endl;
			break;
		}
	} while (++nCount < 5);
	EXIT_1:
		
		cout << "====================����2 END======================" << endl << endl;


		/*����3 
		�� ���
		������ ���
		for2
		for2
		for1 if
		for1 if
		for1 @ 12*/

		cout << "==================== ����3 ========================" << endl << endl;

		// for
		for (int i = 0; i < 5; i++) {
			for (int j = i; j < 5; j++) {
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		//for
		for (int i = 1; i < 6; i++) {
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;

	
		//for if  if���� ���ư��� �� ���� 1 3 6 10  
		for (int i = 1 , z = 1, temp = 1; i < 16; i++){
			cout << "*";

			if (i == z) 
			{  
				// ���丮�� �϶� 
				//temp++;
				z = z + (++temp); // 1 3 7 15 
				cout << endl;
			}
		}
		cout << endl;

		for (int i = 15, z2 = 15, temp2 = 1; i > 0; i--) {
			cout << "*";

			if (i == z2)
			{
				//temp2++;
				z2 = z2 - (++temp2); // 1 3 7 15 
				cout << endl;
			}
		}
		cout << endl;

		for (int i = 15, z2 = 11, temp2 = 5; i > 0; i--) {
			cout << "*";

			if (i == z2) // 11 
			{
				//temp2--; //4 3 2 1 
				z2 = z2 - (--temp2); // 11 7 4 2 1 
				cout << endl;
			}
		}
		cout << endl;
		//���� ������
		for (int i = 0, t = 5, p = 0 ; i < 9; i++) {
			
			if (i > 4) t--;
			else t++;
			p = 9 - t;

			for (int j = 0; j < t; j++) 
			{
				if (j <= p)  
					cout << " ";
				else 
					cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		for (int i = 0, t = 4, p = 0; i < 9; i++) {

			if (i > 4) t--;
			else t++; 
			p = 9 - t; 

			for (int j = 0; j < t; j++)
			{
				if (j < p)  //5
					cout << " ";
				else
					cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		//������ �ѹ��� ����ϸ鼭 ���� ��� ���ؼ� �ݺ��� Ƚ���� �������ų� �ѹ��� ��� ���� �÷����Ѵ�.
		//�ݺ��� Ƚ���� ������ ��� if������ cout<<endl�� �ϱ� ���ؼ� �ش� ������ �˾ƾ��Ѵ�.
		//�ϴ� for if ������ ����� ���� 
		//������µ� �̰� ���̴� �� ���� ���ϴ�. 
		//�ݺ��� Ƚ���� �������� ���� ���� �ƴ϶� ��¹����� �ٲ�� �뼱���� ������
		for (int i = 0, t = 5, p = 5, z = 0, a=0; i < 61; i++) {
			if (i == p) 
			{ //6 7 8 9 10 9 8 7 6   
				cout << endl;
				a = 0;
				if (i < 31) 
				{
					p = p + (++t); // 5 11 18 26 35 45 44 52 59 65 
				}
				else 
				{
					p = p + (--t); // 5 
				}
			}

			z = 9 - t; //4
			if (a < z) 
			{
				cout << " ";
			}  
			else 
			{
				cout << "*";
			}
			a++;
			
		}
		cout << endl;

		//�ǵ����� �ʾ����� ���� ������ �ڵ尡 ���Դ�. ������ ���� ����...
		//41 33 25 17 09 17 25 33 41 
		//  8  8  8  8  8  8  8  8  8����?
		int n8 = 41;
		for (int i = 0 ; i < 9; i++) 
		{
			for (int j = 0; j < ((n8 / 10) + (n8 % 10)); j++ ) 
			{
				if (j < n8/10) 
					cout << " ";
				else 
					cout << "*";
			}
			if (i<4) 
				n8 -=8;
			else 
				n8 +=8;
			cout << endl;
		}

			
		 //5  11  18  26  35  45  52  59  65
		



		cout << "==================== ����3 END ====================" << endl << endl;



		
}

