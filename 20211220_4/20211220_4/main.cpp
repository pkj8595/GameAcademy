#include<iostream>
#include"IsoScale.h"
#include"Rectangle.h"

//class AbstractClass
//{
//public:
//	virtual void FureVirtualFunction() = 0;
//
//};
//
//class TestClass : public AbstractClass
//{
//	virtual void FureVirtualFunction()
//	{
//		std::cout << "����" << std::endl;
//	}
//};

int main() 
{
	//AbstractClass ab;	//��ü���� �Ұ�

	IsoScale is(3, 4);

	std::cout << "�ﰢ���� �غ� : " << is.GetLine1() << std::endl;
	std::cout << "�ﰢ���� ���� : " << is.GetLine2() << std::endl;
	std::cout << "�ﰢ���� ���� : " << is.AreaCalculation() << std::endl;
	std::cout << "�ﰢ���� ���� : " << is.compute() << std::endl;


	std::cout << "----------------------------------" << std::endl;
	Rectangle rect(5,6);

	std::cout << "�簢���� �غ� : " << rect.GetLine1() << std::endl;
	std::cout << "�簢���� ���� : " << rect.GetLine2() << std::endl;
	std::cout << "�簢���� ���� : " << rect.AreaCalculation() << std::endl;
	std::cout << "�簢���� �ѷ� : " << rect.compute() << std::endl;


}