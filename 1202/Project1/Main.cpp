
//���� �ּ� : �ڵ忡�� ������ ��ġ�� �ʴ´�.
//�ּ��� �������� \
�̷������ε� �ۼ��� �����ϴ�.

/*
�����ּ�
*/

/*
���α׷��� ����?
- ��ǻ�Ϳ� ��ȭ �Ǵ� ����� �� �� �ִ� ������ ��ɹ��� �ۼ��� �� �ִ� �� �ǹ��Ѵ�.
>>���α׷��� �� ����ϸ� ��ǻ�Ϳ� ��ȭ����  

���α׷��� �� �����ϴ� ��

- ���� �ۼ��Ǿ� �ִ�

�����Ϸ��� �ش� �ڵ带 ��ǻ�Ͱ� ���� �� �� �ִ� ���� ��ȯ�ȴ�.

�����Ϸ��� ���α׷��� ���� ��ǻ�� ���̿��� �뿪�� ������ �ϱ� ������ �츮�� ��ǻ�� �� ���� ��ǻ�Ϳ��� ����� ���� �� �ִ� �� �̴�.

�����Ϸ� - ��� �ڵ带 �д´�.(������ �߻��ϴ���) ������Ʈ�� ũ�� Ŭ���� �ӵ��� ������. 
���������� - �ڵ带 ���������� �д´�. ������ �߻��ϸ� ���带 �����. 


*/

//�������
/*������� ����ϴ� C++ ǥ�� ���̺귯�� 
ǥ�ض��̺귯���� ���� ������� �̷��� ����Ѵ�.
���α׷��� �� �ᱹ ����� ������� ������ �ͼ������ٸ� ���� �����ϴ�.
i = input
o= output
stream�� �⺻������ ������ġ�� ����� �۾��� ����Ǵ� ���� "�߻�ȭ" ���� ���� ��
iostream�� ����Ǿ� �ִ� cout, cin, �׸��� endl
*/
#include <iostream>

/*
C++�� ���� ������ ����.
 h. ��������� ������ (c���� �Ѿ�� ģ������ ����.)
 ����� ����� �� <> <-- ǥ�� 
				"" <-- ����� ���� ��� ����
*/
#include <Windows.h>

using namespace std;
//���ӽ����̽� std�� ����� ���� std��� �̸������� ���� ���� �����ϰڴٴ� �� 
// �ĺ����� �浹�� �����ϱ� || ���� ����ϴ� std ����� �����ϱ� ���� ����Ѵ�. 


/*
�����Լ� -> ep
������ �����Լ��� �ϳ��� �����Ѵ�. 
 c / c++ ���� �ۼ��Ǵ� ���α׷��� ���� ���� ����Ǵ� �κ�
main�Լ��� ������ ���α׷� ��ü�� ������� �ʴ´�.

1. ��ó���� �ܰ� >> ������� ���� �ҷ��´�.
2. ������ �ܰ� >> obj ���Ϸ� ���� ��Ŀ�� ������.
3. ��ũ �ܰ� >> ����� ���ϵ��� ��������ش�.

*/
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
	//std::cout << "hello world \n";
	//�ڱ� �Ұ�
	/*std::cout << "hello world" << std::endl;
	std::cout << "���� ����� " << " �ֵ���ǥ �ȿ� ���´�."<< std::endl;
	printf(" hello world \n");*/

	/*std::cout << "�̸� : " << "�ڰ���" << std::endl;
	std::cout << "���� : " << "29" << std::endl;
	std::cout << "����ó : " << "010 4195 4955" << std::endl;
	std::cout << "�ּ� : " << "��û�ϵ� û�ֽ� ����� ǳ���" << std::endl;
	std::cout << "�̸��� : " << "pkj8595@gmail.com" << std::endl;
	std::cout << "���� : " << "project 4��" << std::endl;
	std::cout << "���� ���� ȸ�� : " << "?????" << std::endl;
	std::cout << "����� ���� ���� : " << "����뽺" << std::endl;
	std::cout << "��� : " << "����" << std::endl;
	std::cout << "�̻��� : " << " ���ۿ���" << std::endl;
	std::cout << "char : " << char(64) << std::endl;*/

	for (int i = 65; i < 123; i++ ) {
		std::cout << "char : "<< i <<" : " << char(i) << std::endl;

	}
	
	/*TextColor(4, 15);*/
	TextColor(15, 0);
	cout << "���������������������" << endl;

	cout << "�����"; 
	TextColor(0, 0); 
	cout << "�����"; 
	TextColor(15, 0); 
	cout << "���������"; 
	TextColor(0, 0); 
	cout << "��"; 
	TextColor(15, 0); 
	cout << "����" << endl;
	TextColor(15, 0); 
	cout << "����"; 
	TextColor(0, 0); 
	cout << "��"; 
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "�������";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "���"<<endl;

	TextColor(15, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��"<<endl;

	TextColor(15, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��" << endl;

	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "���������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "��"<< endl;

	
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "���";
	TextColor(YELLOW, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��" << endl;

	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "���";
	TextColor(BROWN, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(RED, 0);
	cout << "��";
	TextColor(YELLOW, 0);
	cout << "���";
	TextColor(RED, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��" << endl;

	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "���";
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(YELLOW, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "���"; 
	TextColor(15, 0);
	cout << "��" << endl;

	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "����������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "���" << endl;

	TextColor(15, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "���";
	TextColor(BROWN, 0);
	cout << "���������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "���" << endl;

	TextColor(15, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "����";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "���";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����" << endl;

	TextColor(15, 0);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(YELLOW, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "����" << endl;

	TextColor(15, 0);
	cout << "������";
	TextColor(0, 0);
	cout << "��";
	TextColor(YELLOW, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "�����" << endl;

	TextColor(15, 0);
	cout << "�����";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(YELLOW, 0);
	cout << "����";
	TextColor(BROWN, 0);
	cout << "����";
	TextColor(0, 0);
	cout << "���";
	TextColor(15, 0);
	cout << "������" << endl;

	TextColor(15, 0);
	cout << "������";
	TextColor(0, 0);
	cout << "����";
	TextColor(YELLOW, 0);
	cout << "���";
	TextColor(BROWN, 0);
	cout << "���";
	TextColor(0, 0);
	cout << "���";
	TextColor(15, 0);
	cout << "�������" << endl;

	TextColor(15, 0);
	cout << "��������";
	TextColor(0, 0);
	cout << "����";
	TextColor(BROWN, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "���";
	TextColor(15, 0);
	cout << "��������" << endl;

	TextColor(15, 0);
	cout << "���������";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��";
	TextColor(BROWN, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��";
	TextColor(0, 0);
	cout << "��";
	TextColor(15, 0);
	cout << "��������" << endl;

	TextColor(15, 0);
	cout << "����������";
	TextColor(0, 0);
	cout << "�����";
	TextColor(15, 0);
	cout << "��������" << endl;

	TextColor(15, 0);
	cout << "���������������������" << endl;
	
	

	TextColor(15, 0);

	

	


}

//cout -> ���
	//endl -> �ٹٲ�

	//���α׷��ֿ��� �׳��� ����. 
	//<< : ��� ������ : cout (c ���� printf())
	//<< : �Է� ������ : cin (c ���� scanf())

/*
	c����� �����
	c ����� ��� (stdio.h) >> ����� ���

	printf / scanf �Լ������� ���Ĺ��ڸ� �̿��ؾ� �Ѵ�. 
	- ���Ĺ��ڴ� ���ڿ��� ��� �Ǵ� �Է��� ���� �� �ش� ������ ������ �ڸ���
	 �ٸ� ���� ��ü �ϱ� ���� �ڸ� �ű� ������ �ϴ� ���ڸ� �ǹ�
	  ���� ���ڸ� �̿��ϸ� �����Ǿ� ���� �ʴ� ���ڿ��� ��� �Ǵ� �Է� �޴� ���� �����ϴ�. 
	  ���� ������ ���� 
	  - %d int ����
	  - %ld long ����
	  - %lld long long ����
	  - %c char �� ���� 
	  - %s ���ڿ� 
	  - %f float�� �Ǽ� 
	  - %lf double�� �Ǽ�

	  printf Ư�� ����
	  \n : ����
	  \t : ������
	  \v : ������
	  \\ : \
	  \? : ?
	  \' : '
	  \" : "

*/
/*
	������ ������ ���� �ȴٸ� 
	1.��Ÿüũ 
	2. ����Ŭ�� üũ 
*/


/*
 �Լ� ����
 void : ��ȯ x

*/
void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
};
