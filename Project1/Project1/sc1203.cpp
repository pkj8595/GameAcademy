#include<iostream>

using std::cout;
using std::endl;
using std::cin;


void main() {

	//int total = 0, num =0;


	/*do 
	{
		cout << "���ڸ� �Է��ϼ���(��. 0�� �Է��ϸ� ����) " << endl;
		cin >> num;
		total = total + num;
		cout << "�հ� : " <<total << endl;
	} while (num != 0);*/

	cout << " While ������" << endl;

	int firstNum = 2;
	int secondNum = 1;
	
	do 
	{
		do
		{
			cout << firstNum << "x" << secondNum << " = " << firstNum * secondNum << endl;
			secondNum++;

		} while (secondNum < 10);
		firstNum++;
		secondNum = 1;
		cout << "\n";
	} while (firstNum <10);

	firstNum = 2;
	secondNum = 1;


	//�ݺ����� �ѹ��� �Ἥ �������� �����.
	cout << "�ݺ��� �ѹ��� �Ἥ ������ �����" << endl;
	int temp = 10;
	do 
	{
		cout << temp/10 << "x" << temp % 10+1 << " = " << (temp / 10) * (temp % 10 +1) << endl;
		temp++;
	} while (temp < 100);
	
	

	
	


}