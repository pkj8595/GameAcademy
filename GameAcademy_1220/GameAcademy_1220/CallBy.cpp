#include <iostream>

using std::cout;
using std::endl;
using std::cin;


//함수가 호출 될때 매개 변수를 어떤 방식으로 넣을 것인가?

//call by value		:값에 의한 전달
//call by reference :참조에 의한 전달
//call by address	:주소에 의한 전달

void value(int n);
void reference(int &a);
void address(int *n);

void Swap(int a, int b);
void Swap_address(int* a, int* b);
void Swap_reference(int& a, int& b);

void main() 
{

	/*
	1. 함수가 호출되면 n = num 형태로 복사됨
	num이 가지고 있는 값을 복사하고 -> 임시메모리에 저장한 후 
	value에 집어넣는다.
	*/
	int num = 30;
	value(num);
	cout << "num의 값		:" << num << endl;
	cout << "num의 주소값		:" << &num << endl;

	cout << "========================" << endl;

	//2. int * n &num1의 형태로 num1의 주소를 가리키고 있다.
	//역참조 연산자로 num1의 주소에 접근하고 값을 바꿈 
	//서로 다른 주소를 가지고 있다.
	int num1 = 30;
	address(&num1);
	cout << "num1의 값		:" << num1 << endl;
	cout << "num1의 주소값		:" << &num1 << endl;
	cout << "========================" << endl;

	int num2 = 30;
	reference(num2);
	cout << "num1의 값		:" << num2 << endl;
	cout << "num1의 주소값		:" << &num2 << endl;



	cout << "==================SWAP=========================" << endl;

	//call by value 값만 복사하는 것이기 때문에 
	int  num1_1 = 10;
	int  num1_2 = 20;
	cout << "스왑 전 데이터 : " << num1_1 << " , " << num1_2 << endl;
	Swap(num1_1, num1_2);
	cout << "스왑 후 데이터 : " << num1_1 << " , " << num1_2 << endl;

	cout << "===========================================" << endl;

	//주소값을 매개변수로 전달해서 스왑하려는 변수에 직접접근
	int swapAddressNum = 10;
	int swapAddressNum1 = 20;
	cout << "스왑 전 데이터 : " << swapAddressNum << " , " << swapAddressNum1 << endl;
	Swap_address(&swapAddressNum, &swapAddressNum1);
	cout << "스왑 후 데이터 : " << swapAddressNum << " , " << swapAddressNum1 << endl;


	cout << "===========================================" << endl;

	//레퍼런스
	int  swapRefereceNum1 = 10;
	int  swapRefereceNum2 = 20;
	cout << "스왑 전 데이터 : " << swapRefereceNum1 << " , " << swapRefereceNum2 << endl;
	Swap_reference(swapRefereceNum1, swapRefereceNum2);
	cout << "스왑 후 데이터 : " << swapRefereceNum1 << " , " << swapRefereceNum2 << endl;



}

//클래스나 구조체를 넘길때는 레퍼런스나 포인터로 넘겨라 
//퍼포먼스 차이 
void value(int n)
{
	n = 10;
	cout << "n의 값			:" << n << endl;	//값만 복사된 변수
	cout << "n의 주소값		:" << &n << endl;	//값만 복사된 변수의 주소
}

void reference(int & n)
{
	cout << "n의 값			:" << n << endl;	//
 	cout << "n의 주소값		:" << &n << endl;	// 레퍼런스의 주소값
}

void address(int * n)
{
	*n = 10;
	cout << "n의 값			:" << n << endl;	//포인터의 값
	cout << "n의 역참조 값	:" << *n << endl;	//포인터의 역참조
	cout << "n의 주소값		:" << &n << endl;	//포인터의 주소값
}

//복사된 변수라서 함수 밖에선 바뀌지 않음.
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : ";
	cout << a << ", " << b << endl;			
}

//주소값을 매개변수로 전달해서 스왑하려는 변수에 직접접근
void Swap_address(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//참조방식
//매개변수에 & -> 주소를 반환하는 연산자가 아님
//참조는 변수의 별명 -> 스왑하려는 메모리를 공유
//즉, 별명이 바뀌면 (참조자) 참조하는 변수의 값이 변경된다.
//변수의 별명이 바꿔서 사용하는 것 주소값은 같음.
//call by referece
void Swap_reference(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}
