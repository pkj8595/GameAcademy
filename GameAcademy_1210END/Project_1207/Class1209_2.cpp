#pragma warning(disable : 4996)
#include "Class1209_2.h"


void LinePrint();


void CLASS_1209::Class_1209_2()
{
	cout << "" << endl;


	/*
		C/C++  ��� ���ڿ� ���� �Լ� 
		-strlen - ���ڿ��� ���̸� ����ϴ� ��� 
		-strcmp - ���ڿ��� ���ϴ� ��� 
		-strcpy - ���ڿ��� �����ϴ� ��� 
		-strcat - ���ڿ��� ��ġ�� ���
	*/

	char strA[100] = "abcdf";
	int lenA = strlen(strA);

	cout << strlen(strA) << endl;
	cout << "���ڿ��� ���� : " << lenA << endl;

	LinePrint();

	/*
		2. strcmp(���ڿ�, ���ڿ�) : ���ڿ� ��----------------------------------
			�� ��ȯ���� ���� ���� �ٸ���.

			stringA < stringB	=	0���� �۴�
			stringA == stringB	=	0
			stringA > stringB	=	0���� ũ��

	*/

	char strB[10] = "abc";
	char strC[10] = "abc";
	char strD[10] = "abb";

	int lenB = strcmp(strB, strC);
	int lenC = strcmp(strB, strD);

	cout << "���ڿ� ��" << lenB << endl;
	cout << "���ڿ� ��(�ٸ���)" << lenC << endl;

	//3. strcpy(���ڿ� , ���ڿ� ) : ���ڿ� ���� --------------------------------

	char strE[10] = "ABCDEFG";
	char strF[10] = "HIJK";

	cout << "���ڿ� ���� �� : " << strE << endl;

	strcpy(strF, strE);

	cout << "���ڿ� ���� �� : " << strF << endl;

	//������ : �տ� �ִ� ���ڿ��� ũ�Ⱑ ������ ���ڿ� ���� �۰ԵǸ� ������.
	//���縦 �޴� �ڷ����� �����Ͱ� �����ϸ� �迭 ������ ����.

	//4. strcat(���ڿ� , ���ڿ�) : ���ڿ� ���� -------------------------------------

	char strG[100] = "���� ������ ";
	char strH[100] = "������ ������?";

	cout << "���ڿ� ���� �� : " << strG << endl;

	strcat(strG, strH);
	cout << "���ڿ� ���� �� : " << strG << endl;

	//4�� ���ڿ��� �ƴ����� ���� ����¿� ���� ���δ�.

	//5. strtok: ���ڿ� �ڸ��� (�ڸ�����(EX:_ / \ ���))------------------------------

	char strI[10] = "ABCD EFGH";
	strtok(strI," ");

	cout << "�ڸ��� �� �� : " << strI << endl;

	char strJ[100] = "�̰��� ���ڸ�"; //�迭�� ���Ұ����� ���� ���ÿ� ���δ�. 
	char* strK = "�̷��Ե� ����� ����"; //ĳ���� �迭 �������� ù �ּҸ� ��� ���ڸ� �Ҵ� << ���ͷ� ���ڿ��̶� �����ٰ� �Ѵ�.
	std::string strZ = "�̰� �ȴ�";



}

void LinePrint()
{
	cout << "=========================" << endl;

}
