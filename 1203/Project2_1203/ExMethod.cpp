#include <iostream>
#include <random>
#include<string> // string�� ���� ���� ���

using namespace std;

/*
	�Լ��� ����ϴ� ���� 
	-�ߺ� ���� ����
	-���� ����
	-������ ���
	-���ϴ�

	�Լ��� �����ϴ� ���
	��ȯ �ڷ��� �Լ� �̸�(�Է� �ڷ��� (����))
	{
		<-�Լ� ����
			�Լ�����
	}<- �Լ� ��

	�Լ� �̸� : �� �״�� �Լ��� �̸� (�Լ��� ����(ȣ��)�Ҷ� ���)
	����(����) : �Լ��� �ؾ� �� ���� ���� ������ �����ϸ� �Լ��� �۾� �Ÿ���� �� �� �ִ�.
	��ȯ �ڷ��� : �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾� ���
	�Լ� ���� : {} �ȿ� �Լ��� ���� �ڵ尡 ����

	�Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
		-> ������ �̸��� �Լ��� n�� �̻� ���� �ϴ� ���� �Ұ����ϴ�.

	void�� �Լ���?
	-����(��ȯ) �� ���� ���� �Լ�
	-�Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� ���ٶ�� ���� ���

	�츮�� �˰� �𸣰� ����� �Լ���
	-rand(): �������� �̴� �Լ� -> �̰� �������� �������ø��� ����ؼ� ���� ���� ���� // 
			 ������ �۴� 32000 ~ -32000
	-Sleep(1000) : 1�ʰ� ���߰� �ϴ� �Լ�

	�Լ��� �����ϴ� ������� ���Ѿ� �� ��
	-�Լ��� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.(������Ÿ�� ����)

	C/C++ ����� �Լ� ������ �ʿ��� ����
	-C/C+++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.
	�̶�, �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ��� 
	�̵����� ������ �𸣱� �����̴�.

	�׷��⿡ �Լ��� ������ ���Ͽ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿��� �����Ѵٴ� ���θ� �ݵ�� �˷���� �Ѵ�.
	��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ� 

	�Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

	

*/

//void
void OutputValueA();
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//�����ڿ�
void OutputString(string str);
string GetString(string strA, string strB);
int CheckingString(string strA, string strB);

//��ȯ���� �ִ� �Լ�
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);

//�ǽ� �Լ� 4�� ����� 
//-�Է� o , ��� o
//-�Է� o, ��� x
//- �Է� x, ��� o
//- �Է� x, ��� x
int methodIntOutput(int a);
void methodVoidOutput(int a);
int methodIntNotOutput();
void methodVoidNotOutput();

namespace NS_FUNC_A 
{
	void Sample() 
	{
		cout << "���� �ٷ� NS_FUNC_A �Լ�!" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� NS_FUNC_B �Լ�!" << endl;
	}
}


void main() {

	NS_FUNC_A::Sample();
	NS_FUNC_B::Sample();

	cout << "\n";
	//�Լ� ȣ��
	OutputValueA();
	OutputValueB(5);
	OutputValueC(1,9);

	OutputString("������ �ʹ� ����.");

	int nResultA = GetAddValue(18, 25);
	OutputValueB(nResultA);
	
	string sResultB = GetString("����","����");
	OutputString(sResultB);

	nResultA = CheckingString("���� �� ���ּ���", "���� �� ���ּ���");
	OutputValueB(nResultA);
	//string 

	cout << "\n";

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է�" << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d \n", numL , numR, GetAddValue(numL , numR));
	printf("%d - %d = %d \n", numL , numR, GetSubValue(numL, numR));
	printf("%d x %d = %d \n", numL , numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %f \n", numL , numR, GetDivideValue(numL, numR));

	/*
	�̷��� �Լ��� ������ ������ ������ �ִ�.
	C/C++ ����� �Լ� ����
	-�Է� o , ��� o
	-�Է� o , ��� x
	-�Է� x , ��� o
	-�Է� x , ��� x

	*/



}

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB <<  endl;

}


void OutputString(string str)
{
	cout << str << endl;
}

string GetString(string strA ,string strB)
{
	strA.append(strB); 
	// strA �� strB�� �� ���ְڴ�. ������ ��õ : ������ ���� �Ǿ��ִ�. 
	// append : n���ڿ� �ڿ� n2 ���ڿ��� �ٿ� �ִ´�.

	return strA + strB; // ������ ������� ����.
}

int CheckingString(string strA, string strB)
{
	//������ 1 �ٸ���0 ��ȯ
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;

}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}


//-----------------------�ǽ�--------------------
int methodIntOutput(int a)
{
	return a;
}

void methodVoidOutput(int a)
{
	cout << "methodVoidOutput" << endl;
}

int methodIntNotOutput()
{
	return 0;
}

void methodVoidNotOutput()
{
}
