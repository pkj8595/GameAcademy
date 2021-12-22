#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//template
//�Լ� ���ø� Ŭ���� ���ø� 
//�Լ��� Ŭ������ ���������� �ۼ����� �ʾƵ� 
//���� �ڷ������� ����� �� �ֵ��� �ϰ� ����� ���� Ʋ

//Ÿ�Ը� �ٸ��� ���� �Լ���
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


//�Լ� ���ø�
//���ø� T ����
template <typename T> 
T GetMax(T x, T y)
{
	if (x > y)return x;
	else return y;
}
//���ø� T �� T�� ��� ������ �ƴϴ� 


template <typename T>
void outPut(T data)
{
	cout << "������ : " << data << endl;
}

//typename �� �Ѱ��� ��� ������ Ÿ���� �������� ������ �����߻�
template <typename T>
void outPut1(T a, T b)
{
	cout << a << " , " << b << endl;
}

//�׷��� 2���� ����� �ش�.
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

//Ŭ���� ���ø� 
//typename�� �����ְ� �ڷ����� typename���� �ٲ��ָ� �ȴ�
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
	outPut1(5,2.5); // Ÿ�� ��

	cout << "--------------------------" << endl;

	//���ø� Ŭ���� ���� 
	Box<int> box; // ���� Ÿ���� ������ ���
	box.SetData(100);
	cout << "\nbox�� ������ : " << box.GetData()<< endl;


	Box<double> box1;
	box.SetData(3.14f);


	Box2<int, double> b2;
	b2.setFirst(10);
	b2.setSecond(3.141592f);

	cout << "\nBOX2 �� ������------------" << endl;
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
