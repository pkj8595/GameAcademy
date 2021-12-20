#include "Example_1.h"
#include "Example_2.h"
#include "Example.h"
#include "Homework_1207.h"
#include "test_1208.h"
#include "class1208_.h"
#include "homework_1208.h"
#include "Input_Arr.h"
#include "Class_1209.h"
#include "Class1209_2.h"
#include "HomeWork_1209.h"
#include "Class1210_1.h"


#define STATE_CLASS				1
#define STATE_HOMEWORK			2
#define STATE_TEST				3
#define STATE_PRIVATE_TEST		4

#define STATE					STATE_CLASS


void GameAcademyClass();
void GameAcademyHomework();
void GameAcademyTest();
void PrivateTest();


void main() {

	
#if STATE == STATE_CLASS
	GameAcademyClass();

#elif STATE == STATE_HOMEWORK
	GameAcademyHomework();
	

#elif STATE == STATE_TEST
	GameAcademyTest();

#elif STATE == STATE_PRIVATE_TEST
	PrivateTest();
#endif
}

void GameAcademyClass()
{
	//EXAMPLE_0::PreprocessorClass_1207(); //��ó���� 
	//EXAMPLE_1::Example(); //�迭 , sizeof
	//EXAMPLE_2::ArrayClass_1207(); //����, ����
	//Class1208::class1208_1(); // �Ϻ��� ���� ���� , ���׿�����, ���ڿ� �߿�
	//CLASS_1209::Class_1209_1(); // ����� ���� �ڷ���
	CLASS_1209::Class_1209_2(); // ���ڿ� 

	//--------------------------------------1210 Ŭ���� ����--------------------------------------------
	/*
	���𹮿� ���� ������ Ŭ�������� ������ �ν��Ͻ�(Instance)��� �Ѵ�.
	Ŭ������ �������� Ÿ���� ������ �� ��ü�� ������ �����ϴ� ������ �ƴϴ�.
	����ü�� �����Ѵٰ� �ؼ� ����ü ������ ����� ���� �ƴѰ� ó��
	Ŭ������ �����Ѵٰ� �ؼ� ������ ���� ����� �� �ִ� �޸𸮰� �Ҵ���� �ʴ´�.
	*/

	/*
	Ŭ���� �������� 
	1.include���� Ŭ���� ��� ������ �����´�.
	2.���ϴ� ������ ���� >> Ŭ���� ������ ����
	*/

	
	//���� �Ҵ� -> ���ӿ����� ���� �ʴ�. 
	//���� �Ҵ��� ��Ÿ�ӿ��� �ǽð����� �޸𸮸� �ǵ� �� ����.
	Class1210_1 mg;
	mg.outPut();
	cout << "\n";

	//���� �Ҵ�  :  ����Ǿ� �ִ� �޸𸮸� ������ �ϰڴ�.
	//new >> �����Ҵ� Ű���� 
	Class1210_1* mainG = new Class1210_1;
	//���� �Ҵ� �Լ� ����
	mainG->showPosision();
	mainG->movePosision();
	mainG->setPosision(100, 100);
	mainG->showPosision();
	mainG->movePosision();
	mainG->movePosision();
	mainG->movePosision();
	mainG->showPosision();

	delete mainG; // �޸𸮿��� ����

	/*

		����	 1 Ŭ���� ���� ������
		-Ŭ���� 5�� ������ ���� �ٸ� ���� ��� 

		Ex) 
		(Ŭ���� �̸�)Ŭ���� 1��
		(Ŭ���� �̸�)Ŭ���� 2��
		(Ŭ���� �̸�)Ŭ���� 3��

		���ּ� Ŭ���� ������ 5��

		���� 2 �ٸ���ġ ����� 
		-�ʼ� ��� 
		1. ���� (��Ʈ)
		2. ���� ��� (������ , �����, �, �躯 ���+@)
		3. �ð��� ���� ������
		4. ���� ���� �� �ð� Ȯ�� �� �� �ִ� ���� 
		5. ���� ���


		���� 3 ���� �ο� ���� 
		-1~13 ���� ī�� 4���� 
		������ 13���� ī�� 52���� ī�带 ���
		-�ʼ� : ī����
		-52���� ī�带 �ּ� �ѹ� �̻� �������� ���� �� �� ���ϸ��� 5�� �����´�.
		-���ʿ� ��ġ�� �ټ����� ī�带 ���� 6��° ī���� ���ڸ� �����Ѵ�.
		-seven(7) ���� ������ high ������ low �ƴϸ� ������ seven �� �ϳ��� ����
		-seven�̸� 13�� ���� ȹ��
		-ī�� ������ 

		���� 4 Ŭ����ȭ
		-������ �� 2�� 
		-���������� + @ ������ Ŭ����ȭ ���ѿ´�.
		-�����

	*/

}

void GameAcademyHomework()
{	

	//HOMEWORK_1207::Homework_1207(); //������ ��հ�,���Ըӽ�, ���ھ߱�
	//HOMEWORK::homework_1208(); // �ζǴ�÷�� , �ֹι�ȣ ������, ��������
	HOMEWORK::HomeWork_1209(); //����ü , ���ڿ� ���� , ī�� ����

}

void GameAcademyTest() 
{
	test::Test_1208();	//�߱�

}

void PrivateTest() 
{
	//MY_MEMO_TEST::Input_Arr();
	MY_MEMO_TEST::ArrPotinter();
}
