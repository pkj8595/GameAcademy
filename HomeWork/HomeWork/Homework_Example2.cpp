#include <iostream>
#include <time.h>
/*
0부터 9까지의 숫자 중 일부가 들어있는 배열 numbers가 매개변수로 주어집니다. 
numbers에서 찾을 수 없는 0부터 9까지의 숫자를 모두 찾아 더한 수를 return 하도록
solution 함수를 완성해주세요.
*/

using std::cout;
using std::endl;

int SumArr(int  arr[]);

void main() 
{
	srand(time(NULL));
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		cout << " arr " << i << " : " << arr[i] << endl;
	}

	cout << " sum : " << SumArr(arr) << endl;

}

int SumArr(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 9;i++) {
		sum += arr[i];
	}
	return sum;
}
