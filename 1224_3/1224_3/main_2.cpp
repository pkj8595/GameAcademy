#include<iostream>
#include<set> // ���������̳� 
/*
	set : ���������̳� �� ���� �ܼ��ϴ�.key��� �Ҹ��� ������ �������� �̷���� �����̳�
			�ڵ������� ���ְ� �ߺ��� ���ش�.
			����� �ݺ��� ���
			�ݺ����� Ž�� ������ in order ����Ʈ��Ž���� ���   >> ���ʾƷ����� Ž���� �Ѵ�.



			�����Ұ� : Ʈ���� ��ȸ��� // ���� ���� ���� ��ȸ //
*/

#define STATE_CLASS_1		1
#define STATE_CLASS_2		2
#define STATE_TYPE			STATE_CLASS_2

using std::cout;
using std::endl;
using std::set;

int main()
{
	//int �����͸� �����ϴ� �� �����̳� ����
	//��� Ű�� �����ϴ�.

#if STATE_TYPE==STATE_CLASS_1

	//std::set<int>s;
	//std::set<int>::iterator iter;


	//s.insert(50);
	//s.insert(30);
	//s.insert(20);
	//s.insert(60);
	//s.insert(90);
	//s.insert(110);
	//s.insert(100);

	////����� �ݺ���

	//for (iter = s.begin(); iter != s.end(); ++iter) 
	//{
	//	std::cout << *iter << " ";
	//}
	//std::cout << std::endl;

	//s.insert(110);

	//for (iter = s.begin(); iter != s.end(); ++iter)
	//{
	//	std::cout << *iter << " ";
	//}
	//std::cout << std::endl;


#elif STATE_TYPE ==STATE_CLASS_2

	//std::set<int>s1;

	////set�� ���� ���Ҹ� �ߺ����� �� �� �����Ƿ� inset()��� �Լ� ȣ��� ��ȯ������ ���и� Ȯ�� �� �� �ִ�.
	////��ȯ���� pair ��� ��ü�̰� first�� second�� ���� ���Ե� ������ ��ġ�� ����Ű�� �ݺ��ڿ� ���� ���θ� ��Ÿ���� bool���̴�.

	//std::pair<std::set<int>::iterator, bool> pr;

	//pr = s1.insert(50);
	//pr = s1.insert(40);
	//pr = s1.insert(40);
	//pr = s1.insert(110);

	//if (true == pr.second)std::cout << *pr.first << "\ninsert success" << std::endl;
	//else std::cout << *pr.first << "�� �̹� �ִ�. ����" << std::endl;
	//


	//std::set<int>::iterator s_iter;
	//for (s_iter = s1.begin(); s_iter != s1.end(); ++s_iter)
	//{
	//	std::cout << *s_iter << " ";
	//}
	//std::cout << std::endl;

	////

	//std::set<int>s;

	//std::pair<std::set<int>::iterator, bool> pr;

	//std::set<int>::iterator iter;

	//s.insert(50);
	//s.insert(30);
	//s.insert(20);
	//s.insert(60);
	//s.insert(90);
	//s.insert(110);
	//s.insert(70);

	//for (iter = s.begin(); iter != s.end(); ++iter)
	//{
	//	std::cout << *iter << " ";
	//}
	//std::cout << std::endl;

	//s.insert(pr.first, 85); // 90������ �ݺ��ڿ��� �˻��� ���� ����



	//std::set<int, std::greater<int>> s2;

	//s2.insert(50);
	//s2.insert(10);
	//s2.insert(30);
	//s2.insert(70);
	//s2.insert(60);
	//s2.insert(20);
	//s2.insert(110);

	////�����ڸ� �����ؾ��Ѵ�.?

	////���� ����
	//std::set<int, std::greater<int>>::iterator iter2;
	//for (iter2 = s2.begin(); iter2 != s2.end(); ++iter2)
	//{
	//	std::cout << *iter2 << " ";
	//}
	//std::cout << std::endl;

	set<int>s;
	set<int>::iterator iter;
	s.insert(50);
	s.insert(30);
	s.insert(60);
	s.insert(80);
	s.insert(50);

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = s.find(30);//30�� �ݺ��ڸ� ��ȯ

	if (iter != s.end())
	{
		cout << *iter << "�� ����" << endl;
	}
	else
	{
		cout << "����" << endl;
	}


#endif

}