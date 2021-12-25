#include <iostream>
#include <map>
#include<string>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::make_pair;

//vector, list, queue, stack, map, set.... ��Ȳ�� �°� ����ؾ��Ѵ�. ���ι�� ��� ���ư����� 
/*
	map : Ž���ӵ��� ������ ������.

	���� �� Ʈ���� �����������
	key�� value�� �̷�������
	key : ���� value : 200
	�ڵ������� ��

	��Ƽ���� Ű�� ����� �ߺ����� ?
*/
int main()
{
	//<key, value>
	/*map<int,int> m;

	m.insert(pair<int, int>(5, 100));*/

	map<string, int>m_data;
	map<string, int>::iterator iter;

	//1.
	m_data.insert(map<string, int>::value_type("�ٺ�", 1));
	//2.
	m_data.insert(make_pair("����", 5));
	//3.
	m_data.insert(pair<string, int>("�б�", 23));
	m_data.insert(pair<string, int>("��", 23));
	m_data.insert(pair<string, int>("�п�", 53));
	m_data.insert(pair<string, int>("����", 93));
	m_data.insert(pair<string, int>("�׷���", 100));

	//4.
	pair<string, int>pr1("�汸", 221);
	m_data.insert(pr1);

	//�����
	//Ű������ �����
	m_data.erase("�׷���");

	//m_data.erase();



	for (iter = m_data.begin(); iter != m_data.end(); ++iter)
	{
		//first -> key		second-> value
		cout << iter->first << " " << iter->second << endl;
	}

	if (m_data.find("����") != m_data.end()) {
		cout << "����" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

}