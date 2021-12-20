#include <iostream>

using std::cout;
using std::endl;
using std::cin;


//�Լ��� ȣ�� �ɶ� �Ű� ������ � ������� ���� ���ΰ�?

//call by value		:���� ���� ����
//call by reference :������ ���� ����
//call by address	:�ּҿ� ���� ����

void value(int n);
void reference(int &a);
void address(int *n);

void Swap(int a, int b);
void Swap_address(int* a, int* b);
void Swap_reference(int& a, int& b);

void main() 
{

	/*
	1. �Լ��� ȣ��Ǹ� n = num ���·� �����
	num�� ������ �ִ� ���� �����ϰ� -> �ӽø޸𸮿� ������ �� 
	value�� ����ִ´�.
	*/
	int num = 30;
	value(num);
	cout << "num�� ��		:" << num << endl;
	cout << "num�� �ּҰ�		:" << &num << endl;

	cout << "========================" << endl;

	//2. int * n &num1�� ���·� num1�� �ּҸ� ����Ű�� �ִ�.
	//������ �����ڷ� num1�� �ּҿ� �����ϰ� ���� �ٲ� 
	//���� �ٸ� �ּҸ� ������ �ִ�.
	int num1 = 30;
	address(&num1);
	cout << "num1�� ��		:" << num1 << endl;
	cout << "num1�� �ּҰ�		:" << &num1 << endl;
	cout << "========================" << endl;

	int num2 = 30;
	reference(num2);
	cout << "num1�� ��		:" << num2 << endl;
	cout << "num1�� �ּҰ�		:" << &num2 << endl;



	cout << "==================SWAP=========================" << endl;

	//call by value ���� �����ϴ� ���̱� ������ 
	int  num1_1 = 10;
	int  num1_2 = 20;
	cout << "���� �� ������ : " << num1_1 << " , " << num1_2 << endl;
	Swap(num1_1, num1_2);
	cout << "���� �� ������ : " << num1_1 << " , " << num1_2 << endl;

	cout << "===========================================" << endl;

	//�ּҰ��� �Ű������� �����ؼ� �����Ϸ��� ������ ��������
	int swapAddressNum = 10;
	int swapAddressNum1 = 20;
	cout << "���� �� ������ : " << swapAddressNum << " , " << swapAddressNum1 << endl;
	Swap_address(&swapAddressNum, &swapAddressNum1);
	cout << "���� �� ������ : " << swapAddressNum << " , " << swapAddressNum1 << endl;


	cout << "===========================================" << endl;

	//���۷���
	int  swapRefereceNum1 = 10;
	int  swapRefereceNum2 = 20;
	cout << "���� �� ������ : " << swapRefereceNum1 << " , " << swapRefereceNum2 << endl;
	Swap_reference(swapRefereceNum1, swapRefereceNum2);
	cout << "���� �� ������ : " << swapRefereceNum1 << " , " << swapRefereceNum2 << endl;



}

//Ŭ������ ����ü�� �ѱ涧�� ���۷����� �����ͷ� �Ѱܶ� 
//�����ս� ���� 
void value(int n)
{
	n = 10;
	cout << "n�� ��			:" << n << endl;	//���� ����� ����
	cout << "n�� �ּҰ�		:" << &n << endl;	//���� ����� ������ �ּ�
}

void reference(int & n)
{
	cout << "n�� ��			:" << n << endl;	//
 	cout << "n�� �ּҰ�		:" << &n << endl;	// ���۷����� �ּҰ�
}

void address(int * n)
{
	*n = 10;
	cout << "n�� ��			:" << n << endl;	//�������� ��
	cout << "n�� ������ ��	:" << *n << endl;	//�������� ������
	cout << "n�� �ּҰ�		:" << &n << endl;	//�������� �ּҰ�
}

//����� ������ �Լ� �ۿ��� �ٲ��� ����.
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()�Լ� ������ �� : ";
	cout << a << ", " << b << endl;			
}

//�ּҰ��� �Ű������� �����ؼ� �����Ϸ��� ������ ��������
void Swap_address(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//�������
//�Ű������� & -> �ּҸ� ��ȯ�ϴ� �����ڰ� �ƴ�
//������ ������ ���� -> �����Ϸ��� �޸𸮸� ����
//��, ������ �ٲ�� (������) �����ϴ� ������ ���� ����ȴ�.
//������ ������ �ٲ㼭 ����ϴ� �� �ּҰ��� ����.
//call by referece
void Swap_reference(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}
