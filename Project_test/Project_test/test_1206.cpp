#include <iostream>
#include <time.h>


using std::cout;
using std::endl;
using std::cin;

void main() {

	srand(time(NULL));

	int random = -1;
	int inputNum = -1;
	cout << " 0 ���� ,  1: ���� , 2: ��" << endl;


	for (int i = 0; i < 5; i++) 
	{
		cin >> inputNum;
		random = rand() % 3;
		cout << "comNum : "<< random << endl;

		if (inputNum > 2 || inputNum <0) {
			cout << "0~2 ������ ���� �Է�" << endl;
			continue;
		}



		if (inputNum == random) {
			cout << "����" <<endl;
		}
		else if ((inputNum==0&&random==1)||(inputNum == 1 && random == 2)||(inputNum == 2 && random == 0)) {
			cout << "����" << endl;
		}
		else {
			cout << "�̰��" << endl;
		}
	}

}