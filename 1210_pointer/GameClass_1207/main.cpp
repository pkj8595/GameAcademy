#include <iostream>
#include "MainGame.h"

using std::cout;
using std::endl;
using std::string;

//
//struct Circle
//{
//	int radius;
//	string color;
//
//	//����ü���� �Լ� ��밡��
//	double calArea() 
//	{
//		return 3.14 * radius * radius;
//	}
//};
//
////�������� �̰��� ���°� ����
//enum class MyEnumClass 
//{
//	
//};
//
//class Student
//{
//public:
//	Student();
//	~Student();
//
//	//Ŭ���� ���� ���� 
//	//�����ε�
//	//����Ʈ �Ű� ������ �� �ڿ� �ִ� �Ű� ������ ���� ���� �� �� �ִ�.
//	void print(int a) { cout << a << endl; }
//	void print(int a, int b) { cout << a << ", " << b<< endl; }
//	//void print(string str = "����Ʈ �Ű� ����") { cout << str << endl; }
//
//	//������Ÿ�Ը� ����
//	int sum(int a, int b);
//
//
//private:
//
//};
//
//Student::Student()
//{
//}
//
//Student::~Student()
//{
//}
//

#include"CPlayer2.h"

void Print();
int main() 
{
	//����� ����� ������ ���� �޾Ƽ� ���� ���� ����.
	//MainGame mg;

/*
	CPlayer2 p;
	p.SetScore(1, 2, 3);
	p.SumAverage();
	p.ShowScore();

	CPlayer2 p2(2, 3, 4);
	p.SumAverage();
	p.ShowScore();*/

	//POINTER -> ����ǥ ����Ű��
	//�޸��� �ּҸ� �����ϴ� �༮
	//Ŀ���� ��ǿ� ��� -> 101ȣ�� ��������
	//Ŀ����..���ῡ..�谡����..����� ���׾�..ġŲ�� ����
	//��޿��� �´�.
	//��޿��� ������ �� �ȵƴ�
	//ġŲ ��Ų Ŀ���� ����ֳ��� �ϰ� ��������� ���
	//101ȣ�� ����Ű�鼭 �˷���
	//���⼭ �����ʹ� ������̴�.

	int a = 10;
	cout << a << endl;
	cout << "���� a�� �ּҰ� : "<< &a << endl;

	//������ �������� ������ �ּҸ� ���� �� �ִ�.
	//int * pNum = &a;
	
	int num = 10;
	cout << "num : " << num << endl;
	cout << endl;
	cout << "num�� �ּҰ� : " << &num << endl;
	cout << endl;

	int *p = &num;

	cout << "pointer p�� �� : "<< p << endl; //num�� �ּҰ�
	cout << endl;

	cout << "p�� �ּҰ� : " << &p << endl;// pointer ������ �ּҰ�
	cout << endl;

	//������
	cout << "p�� ��(num�� ��) : " << *p << endl;
	cout << endl;

	*p = 777;
	cout << "p�� ������(num�� ��) : " << *p << endl;
	cout << "num�� �� : " << num << endl;
	cout << endl;

	int **pp;
	pp = &p;
	//pp = &num; // ���������ʹ� �������� ������ ����
	cout << "pp�� �� : " << pp << endl;
	cout << "pp�� �ּҰ� : " << &pp << endl;
	cout << "*pp�� �� (num�� �ּҰ�): " << *pp << endl;

	**pp = 1234;
	cout << "**pp�� �� (����� num�� ��)" << num << endl;

	//������ ������ �ʱ�ȭ �Ҷ�
	int *ptr = nullptr; 
	// ���۸� ������ 
	//�޸𸮸� �����ϰ� ������ �����Ͱ� �޸� �ּҰ��� ����Ű�� ������ ������ nullptr�� �������ش�.
	//���� ������ �������� �����Ͱ� ����Ű�� ��� 
	//�̹� ������ ���� �����Ͱ� ����Ű�� ���


	//�迭�� ù��° �ε��� �ּҰ��� �迭�� �ּҰ��� ����
	//int ���� ���ӵ� �ּҰ��� ������.
	int arr[3] = { 1,2,3 };
	cout << arr << endl;
	cout << &arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;

	cout << "����Լ�"<< endl;
	Print();

	//��ǻ�ʹ� ������ �޸��� �ּҷ� �����Ѵ�.

	// ����Ʈ ���� ��Ʈ�� 
	//���� ��ĭ�� �������� �̵� �Ҷ����� 2�辿 �þ��.
	//���� ��ĭ�� ���������� �̵� �Ҷ����� 2�辿 �پ���.
	//����Ʈ ������ ���� ������.
	int sNum = 15; // 00001111
	int result = sNum << 1; // ����Ʈ ���� //0001 1110
	int result2 = sNum << 2; // ����Ʈ ���� //0111 1000
	int result3 = sNum << 3; // ����Ʈ ���� //1111 0000
	int result4 = sNum << 4; // ����Ʈ ���� //1110 0000
	int result5 = sNum << 5; // ����Ʈ ���� //0001 1110 0000
	
	cout << sNum << endl;
	cout << result << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << result4 << endl;
	cout << result5 << endl;

	//��ǻ�ʹ� ���ϱⰡ �� ������. ����������

	return 0;
}

//int Student::sum(int a, int b)
//{
//	return 0;
//}

//����Լ��� ���� //�����ս��� ��������. // Ż���� �� ����� �ָ� ���ÿ� ���̴ٰ� ���ÿ����÷ο�� �� ������.
void Print() 
{
	static int num1 = 0;
	num1++;
	if (num1 == 10) return;
	cout << "��� �Լ� " << endl;
	Print();
}