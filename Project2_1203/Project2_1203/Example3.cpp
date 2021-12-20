#include<iostream>

using namespace std;

void IncreaseValue(int Value);
void DecreaseValue(int Value);


/*
	������ ��� ������ Ȯ���� ����
	-��/����� ���α׷����� ���ļ� ������ ��ĥ �� �ִ� ������ Ȯ���غ���
	-> ��/ ��� ������ ���� �ش� ������ ���� �� �� �ִ� ������ �޶�����.

	�ٲ㸻��, ���� �ٸ� ���������� ��ȿ�� ������ �̸��� ���ϴ� ��/����� ���� �� ��� 
	������ ��/����� ���� ������� ���� �ǹ��Ѵ�.

	C/C++ ������ {}�� ������ ���ؼ� Ư�� ������ ���۰� ���� ��Ÿ���� ���� ����

	C/C++����� ��/��� ���� 
	-����(����): Ư�� ���������� ������ ������ ��/��� (ex : ���, ���� ���)
	-����(�۷ι�) : ���α׷� ��ü���� ������ ������ ��/���
	-���� ����(����) : Ư�� ���������� ������ ����������  ���� ������ �޸� �ش� ������ ���� �׻� �����Ǵ� ��/���
	-���� ����(�۷ι�) : ���� ������ �޸� �ش� ��/����� ���� �� ���Ͽ����� ������ ������ ��/���

*/

//main�Լ� ������ ���� �����̶�� �θ�
//��������
//���� ������ ���� �� static
//->����� ���� ������ ������ ����ϰڴ�.
static int g_Value = 0; //���ÿ� ����. 
const int g_ConstantValue = 0;

void main() 
{
	int Value = 0;
	cout << "���� �Է� : ";
	cin >> Value;
	cout << "\n";

	cout << "== ���� ������Ų �� ==" << endl;

	IncreaseValue(Value);
	IncreaseValue(Value);

	cout << "���� ������ �� : " << g_Value << endl << endl;

	cout << "== ���� ���ҽ�Ų �� ==" << endl;

	DecreaseValue(Value);
	DecreaseValue(Value);

	cout << "���� ������ �� : " << g_Value << endl << endl;

	{
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;

	}

	cout << "==���ο� ������ ���� �� �� ==" << endl;
	cout << "���� ���� ����" << Value << endl;
	cout << "���� ����" << g_ConstantValue << endl;


}

//���� ������Ų��.
void IncreaseValue(int Value)
{
	int LocalValue = 0;
	g_Value += Value;
	LocalValue += Value;

	cout << "IncreseValue ���� ����" << LocalValue << endl;

	/*
		�� �Լ��� ����� localValue ������ ������ �Լ� ������ ���� �Ǿ��� ������
		�� ������ ���� �ٸ� ������ ������.

		IncreaseValue < == > DecreaseValue
	*/

	

}

//���� ���ҽ�Ų��.
void DecreaseValue(int Value)
{
	//�Լ� ������ ����� static 
	//->�ѹ��� �ʱ�ȭ �ǰ� ���� ������ �޸� �Լ��� ���������� �Ҹ���� �ʴ´�.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "DecreseValue ���� ����" << LocalValue << endl;
}
