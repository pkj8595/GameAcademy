#include<iostream>
#include"IsoScale.h"
#include"Rectangle.h"



int main() 
{
	Rectangle rect(5,6);

	std::cout << "사각형의 밑변 : " << rect.GetLine1() << std::endl;
	std::cout << "사각형의 높이 : " << rect.GetLine2() << std::endl;
	std::cout << "사각형의 넓이 : " << rect.AreaCalculation() << std::endl;
	std::cout << "사각형의 둘레 : " << rect.compute() << std::endl;
}