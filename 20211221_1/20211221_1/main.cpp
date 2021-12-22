#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//template
//함수 템플릿 클래스 템플릿 
//함수나 클래스를 개별적으로 작성하지 않아도 
//여러 자료형으로 사용할 수 있도록 하게 만들어 놓은 틀

//타입만 다르지 같은 함수들
//int getmax(int x,int y)
//{
//	if (x > y)return x;
//	else return y;
//}
//
//float getmax(float x, float y)
//{
//	if (x > y)return x;
//	else return y;
//}


//함수 템플릿
//템플릿 T 시작
template <typename T> 
T GetMax(T x, T y)
{
	if (x > y)return x;
	else return y;
}
//템플릿 T 끝 T가 계속 남은게 아니다 


template <typename T>
void outPut(T data)
{
	cout << "데이터 : " << data << endl;
}

//typename 이 한개인 경우 데이터 타입이 동일하지 않으면 오류발생
template <typename T>
void outPut1(T a, T b)
{
	cout << a << " , " << b << endl;
}

//그래서 2개를 만들어 준다.
template <typename T1 , typename T2>
void outPut1(T1 a, T2 b)
{
	cout << a << " , " << b << endl;
}

//class Box 
//{
//private: 
//	int data;
//public:
//	void SetData(const int data) { this->data = data; }
//	int GetData()const { return data; }
//};

//클래스 템플릿 
//typename를 적어주고 자료형을 typename으로 바꿔주면 된다
template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(const T data) { this->data = data; }
	T GetData()const { return data; }

	void Print();
};


template <typename T1, typename T2>
class Box2
{
private:
	T1 first_data;
	T2 second_data;
public :
	T1 GetFirst();
	T2 GetSecond();

	void setFirst(T1 val) { first_data = val; }
	void setSecond(T2 val) { second_data = val; }
};



int main()
{
	cout << GetMax(1, 2) << endl;

	outPut(5);
	outPut1(5,2.5); // 타입 네

	cout << "--------------------------" << endl;

	//템플릿 클래스 사용시 
	Box<int> box; // 무슨 타입을 쓸건지 명시
	box.SetData(100);
	cout << "\nbox의 데이터 : " << box.GetData()<< endl;


	Box<double> box1;
	box.SetData(3.14f);


	Box2<int, double> b2;
	b2.setFirst(10);
	b2.setSecond(3.141592f);

	cout << "\nBOX2 의 데이터------------" << endl;
	cout << b2.GetFirst() << ", " << b2.GetSecond() << endl;

	cout << "--------------------------" << endl;



}


template<typename T>
void Box<T>::Print()
{
}

template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirst()
{
	return first_data;
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecond()
{
	return second_data;
}
