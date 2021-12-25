#include<iostream>

using namespace std;

void IncreaseValue(int Value);
void DecreaseValue(int Value);


/*
	변수와 상수 영역을 확인해 보자
	-변/상수가 프로그램에서 덜쳐서 영향을 미칠 수 있는 범위를 확인해보자
	-> 변/ 상수 종류에 따라서 해당 변수에 접근 할 수 있는 범위가 달라진다.

	바꿔말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재 할 경우 
	각각의 변/상수는 서로 별개라는 것을 의미한다.

	C/C++ 언어에서는 {}의 조합을 통해서 특정 영역의 시작과 끝을 나타내는 것이 가능

	C/C++언어의 변/상수 종류 
	-로컬(지역): 특정 영역에서만 접근이 가능한 변/상수 (ex : 멤버, 지역 등등)
	-전역(글로벌) : 프로그램 전체에서 접근이 가능한 변/상수
	-정적 로컬(지역) : 특정 영역에서만 접근이 가능하지만  지역 변수와 달리 해당 변수의 값이 항상 유지되는 변/상수
	-정적 전역(글로벌) : 전역 변수와 달리 해당 변/상수가 선언 된 파일에서만 접근이 가능한 변/상수

*/

//main함수 위쪽응 전역 공간이라고 부름
//전역공간
//전역 변수에 선언 된 static
//->선언된 파일 내에서 참조를 허용하겠다.
static int g_Value = 0; //스택에 들어간다. 
const int g_ConstantValue = 0;

void main() 
{
	int Value = 0;
	cout << "정수 입력 : ";
	cin >> Value;
	cout << "\n";

	cout << "== 값을 증가시킨 후 ==" << endl;

	IncreaseValue(Value);
	IncreaseValue(Value);

	cout << "전역 변수의 값 : " << g_Value << endl << endl;

	cout << "== 값을 감소시킨 후 ==" << endl;

	DecreaseValue(Value);
	DecreaseValue(Value);

	cout << "전역 변수의 값 : " << g_Value << endl << endl;

	{
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;

	}

	cout << "==새로운 지역이 종료 된 후 ==" << endl;
	cout << "현재 지역 변수" << Value << endl;
	cout << "전역 변수" << g_ConstantValue << endl;


}

//값을 증가시킨다.
void IncreaseValue(int Value)
{
	int LocalValue = 0;
	g_Value += Value;
	LocalValue += Value;

	cout << "IncreseValue 지역 변수" << LocalValue << endl;

	/*
		각 함수에 선언된 localValue 변수는 각각의 함수 영역에 선언 되었기 때문에
		두 변수는 서로 다른 별개의 변수다.

		IncreaseValue < == > DecreaseValue
	*/

	

}

//값을 감소시킨다.
void DecreaseValue(int Value)
{
	//함수 내에서 선언된 static 
	//->한번만 초기화 되고 지역 변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "DecreseValue 지역 변수" << LocalValue << endl;
}
