#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

//namespace A 
//{
//	namespace B 
//	{
//		namespace C 
//		{
//			int num;
//		}
//	}
//}
//
//namespace ABC = A::B::C; 


namespace Equiment {

	namespace A {
		char name[3] = "��";
		int price = 1000;
		int damage = 20;
	}
	namespace B {
		char name[5] = "���";
		int price = 2000;
		int damage = 30;
	}
	namespace C {
		char name[3] = "Ȱ";
		int price = 1000;
		int damage = 15;
	}
	namespace D {
		char name[5] = "�ܰ�";
		int price = 500;
		int damage = 10;
	}
	namespace F {
		char name[9] = "�ٸ���Ÿ";
		int price = 13000;
		int damage = 80;
	}
	

}

namespace eq = Equiment;
void Draw(int color);
void TextColor(int font, int background);

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7 
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

void main() {

	/*A::B::C::num;
	ABC::num;*/
	/*
		��������
		�⺻ Ʋ : ��������(����) ������

		Ex) int Num;
		
		������?
		- ���� �� �ִ� ���ڳ� �����͸� �ǹ� 
		- ��ǻ�ͷ� �Ͽ��� ���� ���� �� �� �ִ� �޸� ������ ���� �̸�
		- ������ �̿��ϸ� Ư�� ���� ���� �� �ش� ���� �̿��� �������� ������ �����ϴ�.

		int Num = 20;
		- ������ �������� ���ؼ� Num�̶�� �̸����� �޸� ������ �Ҵ�
		- Num�̶�� �ǹ��ϴ� �޸� ������ 20�� ������� �ǹ�

		==========�ڷ��� ===========
		c / c++ ���� �����ϴ� �ڷ����� ���� 
		- ������(����)
		- �Ǽ���(�Ҽ�)
		- ������(����)
		- ����(boolean)

		c / c++ ���� �����ϴ� ���� �ڷ����� ����
		-short (2����Ʈ )
		-int 4byte  43��? 
		-long 8byte
		-long long 8byte
		
		c / c++ ���� �����ϴ� �Ǽ� �ڷ����� ����
		- float 4byte
		- double 8byte

		c / c++ ���� �����ϴ� ���� �ڷ����� ����
		-char (1byte)

		c / c++ ���� �����ϴ� �� �ڷ����� ����
		-bool 1byte 
		& c���� ������ ������ <stdbool.h> ����� ���� �ؾ���.

		c/c++ �ڷ����� �⺻������ ������ ǥ���ϴ� ���� ���������� 
		��쿡 ���� ������ ǥ������ �ʴ� ��ſ� ����� �� �� ũ�� ǥ���ϴ� ����� �ִ�.

		unsigned Ű���带 �̿��ϸ� ������ ǥ������ �ʰ� ������� ǥ���ϴ� ���� ����

		ex)
		int -> 1, 10, 100, 25556
		float -> �ε��Ҽ��� : 123.456f, 3.14f
		bool -> 0 , 1 
		 true : ���� �ǹ��ϴ� 1����Ʈ ������ 
		 false : ������ �ǹ��ϴ� 1����Ʈ ������

		 ***bool �ڷ����� ������ �;� �� ��ġ�� ���ԵǸ� ���� 1�� 0���� ��ȯ�� ��
		 ���� ����1 �� 0�� �ƴϴ� 



	*/

	cout << "���� �����̴�";

	int a = true;
	int b = false;

	int result = a + b;
	cout << "boolean: " << result << endl;
	
	// ���� ���� : �ڷ��� + ���� �̸�
	// ���� �ʱ�ȭ ���  (�������� ���)

	int num0; // �ʱ�ȭ�� ���� ������ ������ ���� ��  -8665456
	//���� ���� �� ���� 
	num0 = 10;

	//���� ���� ����� �پ������� ���ÿ� �ʱ�ȭ�� �����ϴ�.
	int num9, num10; //���� ���� ����
	num9 = num10 = 100; // ���ÿ� �� ����

	//sizeof Ű���带 ����ϸ� ���� �Ǵ� �ڷ����� ũ�� ����� �ϴ� ���� ����
	cout << "���� 1 ������ : " << sizeof(1) << endl;
	cout << "���� 2 ������ : " << sizeof(2) << endl;
	cout << "true : " << sizeof(true) << endl;
	cout << "false : " << sizeof(false) << endl;

	//�Է�

	/*int nvalue = 0;
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> nvalue;

	cout << "���� �Է��� ���� : " << nvalue << endl;
	cout << endl;*/

	/*printf("���� �Է� : ");
	scanf("%d", &nvalue);*/

	// ���� Ÿ��
	short valuea = 10;
	short valueb = 20;
	short valuec = 30;
	short valued = 40;


	//c++
	cout << "short : " << valuea << ", " << "size" << sizeof(valuea) << endl;
	cout << "short : " << valueb << ", " << "size" << sizeof(valueb) << endl;
	cout << "short : " << valuec << ", " << "size" << sizeof(valuec) << endl;
	cout << "short : " << valued << ", " << "size" << sizeof(valued) << endl;

	printf("short : ");
	printf("%d", valuea);
	printf(", size : ");
	printf("%d", sizeof(valuea));
	printf("\n\n");

	printf("short : %d size : %d \n",valuea,sizeof(valuea));
	printf("short : %d size : %d \n",valueb,sizeof(valueb));
	printf("short : %d size : %d \n",valuec,sizeof(valuec));
	printf("short : %d size : %d \n",valued,sizeof(valued));



	/*
	����1.���� �����
		- ������ ������, ������ �ٸ� ���� 5���� ����� ȭ�鿡 ���
		- ��µ� ȭ�鿡�� ������ ���� + ���� + �������� �Բ� �����ȴ�.

		���� 2. ��Ʈ ������
		���� ����.�ݺ��� + �迭
		- �ݺ����� ������ ���ҿ� ���ؼ� ������ �´�.
		- ��å�� ����´�.
		
	*/

	
	printf("��� : %s , ���� : %d , ���ݷ� : %d \n", eq::B::name, eq::B::price, eq::B::damage);
	printf("��� : %s , ���� : %d , ���ݷ� : %d \n", eq::C::name, eq::C::price, eq::C::damage);
	printf("��� : %s , ���� : %d , ���ݷ� : %d \n", eq::F::name, eq::F::price, eq::F::damage);

	
	int equiDraw[16][16] = 
	{
		{15,15,15,15,15,15,15,15,15,15,15,15,15,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,15,15,8,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,15,8,8,8,8,8},
		{15,15,15,15,15,15,15,15,15,15,8,8,8,8,8,15},
		{15,15,15,15,15,15,15,15,15,8,8,8,8,8,15,15},
		{15,15,15,15,15,15,15,15,8,8,8,8,8,15,15,15},
		{15,15,15,15,15,15,15,8,8,8,8,8,15,15,15,15},
		{15,15,15,15,15,15,8,8,8,8,8,15,15,15,15,15},
		{15,15,15,15,15,8,8,8,8,8,15,15,15,15,15,15},
		{15,15,15,15,8,8,8,8,8,15,15,15,15,15,15,15},
		{15,15,15,8,8,8,8,8,15,15,15,15,15,15,15,15},
		{15,15,15,8,8,8,8,15,15,15,15,15,15,15,15,15},
		{15,15,6,6,8,8,15,15,15,15,15,15,15,15,15,15},
		{15,6,6,6,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,6,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
	};

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Draw(equiDraw[i][j]);
		}
		printf("\n");
	}
	TextColor(15, 0);
	printf("��� : %s , ���� : %d , ���ݷ� : %d \n", eq::A::name, eq::A::price, eq::A::damage);


	int equiDraw2[16][16] =
	{
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{15,15,15,15,15,15,15,15,1,1,1,1,1,15,15,15},
		{15,15,15,15,15,15,15,1,1,1,1,1,15,15,15,15},
		{15,15,15,15,15,15,1,1,1,1,1,15,15,15,15,15},
		{15,15,15,15,15,1,1,1,1,1,15,15,15,15,15,15},
		{15,15,15,15,1,1,1,1,1,15,15,15,15,15,15,15},
		{15,15,15,1,1,1,1,1,15,15,15,15,15,15,15,15},
		{15,15,1,1,1,1,1,15,15,15,15,15,15,15,15,15},
		{15,15,6,6,1,1,15,15,15,15,15,15,15,15,15,15},
		{15,6,6,6,1,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,6,15,15,15,15,15,15,15,15,15,15,15,15,15},
		{6,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
	};

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			Draw(equiDraw2[i][j]);
		}
		printf("\n");
	}

	TextColor(15, 0);
	printf("��� : %s , ���� : %d , ���ݷ� : %d \n", eq::D::name, eq::D::price, eq::D::damage);



	//�����õ� �ʱ�ȭ 
	srand(time(NULL));

	int numR;
	//int randemN = rand();
	numR = rand() % 5;
	cout << numR << endl;

	int weaponA = 0;
	
	weaponA = rand() % 6 + 20;
	cout << "������ ������ �� :" << weaponA << endl;


}

void Draw(int color) {
	TextColor(color, 0);
	cout << "��";
}

void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
};

