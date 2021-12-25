#include<iostream>

using std::cout;
using std::endl;
using std::cin;


void main() {

	//int total = 0, num =0;


	/*do 
	{
		cout << "숫자를 입력하세요(단. 0을 입력하면 종료) " << endl;
		cin >> num;
		total = total + num;
		cout << "합계 : " <<total << endl;
	} while (num != 0);*/

	cout << " While 구구단" << endl;

	int firstNum = 2;
	int secondNum = 1;
	
	do 
	{
		do
		{
			cout << firstNum << "x" << secondNum << " = " << firstNum * secondNum << endl;
			secondNum++;

		} while (secondNum < 10);
		firstNum++;
		secondNum = 1;
		cout << "\n";
	} while (firstNum <10);

	firstNum = 2;
	secondNum = 1;


	//반복문을 한번만 써서 구구단을 만든다.
	cout << "반복문 한번만 써서 구구단 만들기" << endl;
	int temp = 10;
	do 
	{
		cout << temp/10 << "x" << temp % 10+1 << " = " << (temp / 10) * (temp % 10 +1) << endl;
		temp++;
	} while (temp < 100);
	
	

	
	


}