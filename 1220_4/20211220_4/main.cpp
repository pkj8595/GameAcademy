#include<iostream>
#include"IsoScale.h"
#include"Rectangle.h"



int main() 
{
	Rectangle rect(5,6);

	std::cout << "�簢���� �غ� : " << rect.GetLine1() << std::endl;
	std::cout << "�簢���� ���� : " << rect.GetLine2() << std::endl;
	std::cout << "�簢���� ���� : " << rect.AreaCalculation() << std::endl;
	std::cout << "�簢���� �ѷ� : " << rect.compute() << std::endl;
}