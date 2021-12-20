#include <iostream>
#include <time.h>


using std::cout;
using std::endl;
using std::cin;

void main() {

	srand(time(NULL));

	int random = -1;
	int inputNum = -1;
	cout << " 0 가위 ,  1: 바위 , 2: 보" << endl;


	for (int i = 0; i < 5; i++) 
	{
		cin >> inputNum;
		random = rand() % 3;
		cout << "comNum : "<< random << endl;

		if (inputNum > 2 || inputNum <0) {
			cout << "0~2 사이의 숫자 입력" << endl;
			continue;
		}



		if (inputNum == random) {
			cout << "비겻다" <<endl;
		}
		else if ((inputNum==0&&random==1)||(inputNum == 1 && random == 2)||(inputNum == 2 && random == 0)) {
			cout << "졋다" << endl;
		}
		else {
			cout << "이겻다" << endl;
		}
	}

}