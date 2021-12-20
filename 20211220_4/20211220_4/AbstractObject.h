#pragma once
#include <iostream>

//�߻�Ŭ����
//���������Լ��� �Ѱ��� �����ϰ� �ִٸ� ������ �߻�Ŭ����
//��ü������ ���� �ۼ� X
//��ӿ��� ���Ŭ���� ������ ���
//��ü������ ���� ����Լ��� ������ �ִ�.(���������Լ�)
//�߻�Ŭ������ ������ �Լ��� ������ �ֱ� ������.. ��ü������ X
class AbstractObject
{
protected:
	double line1, line2;

public:
	AbstractObject();
	AbstractObject(const double line1,const double line2);
	virtual ~AbstractObject();

	double GetLine1() { return line1; }
	double GetLine2() { return line2; }

	void SetLine1(const double line1) { this->line1 = line1; }
	void SetLine2(const double line2) { this->line2 = line2; }

	//���� �����Լ� 
	virtual double AreaCalculation() = 0;
	virtual double compute() = 0;

};

