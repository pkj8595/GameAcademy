#include "test_1208.h"

void test::Test_1208()
{

	//셔플 
	srand(time(NULL));
	int temp, one, two;
	int comNum[10];

	for (int i = 0; i < 10;i++) {
		comNum[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		one = rand() % 10;
		two = rand() % 10;

		temp = comNum[one];
		comNum[one] = comNum[two];
		comNum[two] = temp;

	}

	for (int i = 0; i < 3; i++) 
	{
		cout << comNum[i] << endl;
	}
	cout << comNum[0] << comNum[1] << comNum[2] << endl;
	int allCount = 0;


	int myNumber = 0;
	int myNumberArr[3] = { 0 };
	int sCount = 0, bCount = 0, oCount = 0;
	
	do 
	{
		cout << "숫자를 입력해 주세요" << endl;
		cin >> myNumber;
		myNumberArr[0] = myNumber / 100;
		myNumberArr[1] = ((myNumber / 10) % 10);
		myNumberArr[2] = myNumber % 10;

		cout << myNumberArr[0] << myNumberArr[1] << myNumberArr[2] << endl;

	
		sCount = 0, bCount = 0, oCount = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++) 
			{
				if (myNumberArr[i] == comNum[j]) {

					if (i==j) {
						sCount++;
					}
					else 
					{
						bCount++;
					}
				}
			
			}
		}
		oCount = abs(sCount + bCount - 3);
		cout << " S :" << sCount << " B :" << bCount << " o :" << oCount << endl;

	} while (sCount < 3);






}
