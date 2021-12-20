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
//		std::cout << "하이" << std::endl;
//	}
//};

int main() 
{
	//AbstractClass ab;	//객체생성 불가

	IsoScale is(3, 4);

	std::cout << "삼각형의 밑변 : " << is.GetLine1() << std::endl;
	std::cout << "삼각형의 높이 : " << is.GetLine2() << std::endl;
	std::cout << "삼각형의 넓이 : " << is.AreaCalculation() << std::endl;
	std::cout << "삼각형의 빗변 : " << is.compute() << std::endl;


	std::cout << "----------------------------------" << std::endl;
	Rectangle rect(5,6);

	std::cout << "사각형의 밑변 : " << rect.GetLine1() << std::endl;
	std::cout << "사각형의 높이 : " << rect.GetLine2() << std::endl;
	std::cout << "사각형의 넓이 : " << rect.AreaCalculation() << std::endl;
	std::cout << "사각형의 둘레 : " << rect.compute() << std::endl;


}