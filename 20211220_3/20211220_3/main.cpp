#include<iostream>
#include"MainGame.h"
#include"parent.h"
#include"Child.h"

using std::cout;
using std::endl;
using std::cin;

/*
	virtual : 가상함수
	-다형성을 지원한다. 상속관계에서 재정의할 가능성이 있다면 가상함수로 선언하는게 좋다.
	-파생클래스에서 재정의한 함수가 있으면 파생클래스 함수가 호출
	-파생에서 재정의한 함수가 없다면 부모의 함수가 호출된다.

	-관례상 virtual 키워드를 가진 함수를 오버라이딩을 했으면 파생에도 붙여준다.

	함수 오버로딩 vs 오버라이딩
*/
class Animal
{
public:
	virtual void Speek() { cout << "기반 클래스 : animal" << endl; }
};

class Dog :public Animal 
{
	virtual void Speek() { cout << "파생 클래스 : 강아지" << endl; }
};
class Cat :public Animal 
{
	virtual void Speek() { cout << "파생 클래스 : 고양이" << endl; }
};



class AppleCar
{
public:
	int seat;
	void setSeats(const int n) { seat = n; }
};

class Truck
{
public:
	int peolpe;
	void setSeats(const int n) { peolpe = n; }
};

class HyundaeCar : public AppleCar, public Truck
{
public:
	int num;
	void setSeats(const int n) { num = n; }

};


class A 
{
	int x;
	void Sub() {
		cout << "A의 함수" << endl;
	}
};

class B
{
	int x;
	void Sub() {
		cout << "B의 함수" << endl;
	}
};

class Sub :public A, public B 
{

};


int main() 
{
	/*Animal *al = new Dog();
	al->Speek();*/

	MainGame mg;

	cout << "-------------------------------------------" << endl;

	//업캐스팅을 하고 파생클래스 소멸자에 virtual를 붙이지 않으면 파생클래스의 소멸자가 호출되지 않는다. 꼭 소멸자에 virtual를 붙여줄것
	parent* p = new Child;
	p->~parent();


	//Sub s;
	//s.x = 10; // 다중 상속을 받았는데 2개의 기반클래스의 변수명이 같으면모호하다고 에러가 난다.
}