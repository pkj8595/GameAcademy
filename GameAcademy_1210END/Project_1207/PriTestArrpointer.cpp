#include "Input_Arr.h"

#define ARR_SIZE(arr)						sizeof(arr)/sizeof(arr[0]) //24 / 4

void MY_MEMO_TEST::ArrPotinter() {


	int *parr;
	int arr_test[10] = {10};
	parr = arr_test;
	
	//배열 주소값 출력
	for (int i = 0; i < ARR_SIZE(arr_test);i++) {
		if (i % 2) {
			cout << i << " : " <<&arr_test[i]<< "		";
		}
		else {
			cout << i << " : " << &arr_test[i] << endl;
		}
	}

	cout << "=======================================" << endl;

	for (int i = 0; i < ARR_SIZE(arr_test); i++) {
		cout << i << " : " << parr + i << endl;
	}

	//----------------------------------------------
	cout << "\n";

	int sum = 0;
	int arrSize = sizeof(arr_test) / sizeof(arr_test[0]);

	for (int i = 0; i < ARR_SIZE(arr_test); i++) 
	{
		sum += arr_test[i];
	}

	cout <<" sum : " <<sum  << endl; //100
	cout << " ARR_SIZE : " << ARR_SIZE(arr_test) << endl; //10	
	cout << " sum / ARR_SIZE(arr_test) : " << (sum / ARR_SIZE(arr_test)) << endl<<endl;	//0
	cout << "==================== 메크로 연산과 컴파일 연산은 값이 다를까? ========================"<< endl; 
	//다르다 매크로에서 연산은 하지말자
	cout << " sum : " << sum << endl; //100
	cout << " ARR_SIZE : " << arrSize << endl; //10
	cout << " sum / ARR_SIZE(arr_test) : " << arrSize << endl; // 10




}