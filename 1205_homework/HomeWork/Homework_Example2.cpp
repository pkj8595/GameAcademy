#include <iostream>
#include <time.h>
/*
0���� 9������ ���� �� �Ϻΰ� ����ִ� �迭 numbers�� �Ű������� �־����ϴ�. 
numbers���� ã�� �� ���� 0���� 9������ ���ڸ� ��� ã�� ���� ���� return �ϵ���
solution �Լ��� �ϼ����ּ���.
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
