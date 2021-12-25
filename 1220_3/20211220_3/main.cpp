#include<iostream>
#include"MainGame.h"
#include"parent.h"
#include"Child.h"

using std::cout;
using std::endl;
using std::cin;

/*
	virtual : �����Լ�
	-�������� �����Ѵ�. ��Ӱ��迡�� �������� ���ɼ��� �ִٸ� �����Լ��� �����ϴ°� ����.
	-�Ļ�Ŭ�������� �������� �Լ��� ������ �Ļ�Ŭ���� �Լ��� ȣ��
	-�Ļ����� �������� �Լ��� ���ٸ� �θ��� �Լ��� ȣ��ȴ�.

	-���ʻ� virtual Ű���带 ���� �Լ��� �������̵��� ������ �Ļ����� �ٿ��ش�.

	�Լ� �����ε� vs �������̵�
*/
class Animal
{
public:
	virtual void Speek() { cout << "��� Ŭ���� : animal" << endl; }
};

class Dog :public Animal 
{
	virtual void Speek() { cout << "�Ļ� Ŭ���� : ������" << endl; }
};
class Cat :public Animal 
{
	virtual void Speek() { cout << "�Ļ� Ŭ���� : �����" << endl; }
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
		cout << "A�� �Լ�" << endl;
	}
};

class B
{
	int x;
	void Sub() {
		cout << "B�� �Լ�" << endl;
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

	//��ĳ������ �ϰ� �Ļ�Ŭ���� �Ҹ��ڿ� virtual�� ������ ������ �Ļ�Ŭ������ �Ҹ��ڰ� ȣ����� �ʴ´�. �� �Ҹ��ڿ� virtual�� �ٿ��ٰ�
	parent* p = new Child;
	p->~parent();


	//Sub s;
	//s.x = 10; // ���� ����� �޾Ҵµ� 2���� ���Ŭ������ �������� �������ȣ�ϴٰ� ������ ����.
}