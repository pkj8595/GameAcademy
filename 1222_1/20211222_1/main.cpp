#include <iostream>
#include <vector>
#include"MainGame.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//STL(standarde Template library) STL�����̳�
//������ �����̳� - ����Ǵ� ���Ұ� ���Լ����� ���� ������� ��ġ�� ���´�.  ex)vector, list, deque
//���� �����̳� - Ư�� ���� ��Ģ�� ���� ���� ���Ұ� ���ĵǴ� �����̳� set, map, multiset, mulmimap
//��Ʈ��Ʈ��? 
/*


���� 
�����迭���� Ŭ����
�߰� ���� ������ ����ϰ� �߻��ϴ� ����� ��ȿ�����̴�.
��, �ڿ��� ���Ի����� ������.

���� ���͸� ���°�? ->  ���� ���� �Ϸ��� ������ ������ �������϶�
�߰ǿ� �����͸� �����ϰų� ������ ���� ����ϰ� �߻����� �ʰ� ���������� �߰��� ���������� ������
������ �����Ͱ� ���� �ʰ� ���ٸ� �˻��� ����ϰ� �ϳʳ��� ������
�����ϰ� ������ ������ ����Ҷ�
�ӵ����� ���鿡���� �迭�� �� ������.

���ο� �����Ͱ� �Ҵ�Ǵٰ� �Ҵ� �� ������ �����ϴٸ� �Ҵ�� ������ 0.5�� ��ŭ ũ�⸦ �÷��ش�. 

����Լ� 
	front

	reservecl? 
	capacity �Ҵ�� ũ�⿡ 
	size



�ݺ��� (iterator) : �����Ͷ� ����� ����. �����̳��� ���Ҹ� ����Ű�� ����Ű�� ���ҿ� �����ؼ� ���� ���Ҹ� ����Ű�� �ϴ� ���



*/


int main()
{
	/*
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);
	vec.push_back(50);

	for(int i =0; i<vec.size() ; i++)
	{
		cout << vec[i]<< "->"; // �迭ó�� ���ٰ���
	}

	cout<< endl << "���� v�� ���� ���� : " << vec.size() << endl; // v ���Ұ���
	cout<<  "���� v�� capacity : " << vec.capacity() << endl; // �� �Ҵ�� �뷮 
	cout<<  "���� v�� �ִ� ���� : " << vec.max_size() << endl; // �� �Ҵ�� ������ ũ�� 
	cout<<  "*vec.begin() : " << *vec.begin() << endl; // ������ 
	//cout<<  "*vec.end() : " << *vec.end() << endl; // ����




	vec.pop_back();
	vec.pop_back();
	vec.pop_back();

	cout << "data pop ---------------------" << endl;
	for (int i = 0; i < vec.size(); i++) 
	{
		cout << vec[i] << "->"; 
	}
	cout << endl;
	cout << "Ŭ���� �� ----------------------" << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "->";
	}
	cout << vec.size() << endl;
	*/


	/*���� : ����Լ� 
		vec.assign(n, x) = v�� x������ n���� ���Ҹ� �Ҵ�
		vec.at(i) = v�� i��° ���Ҹ� �����Ѵ�. 

	*/

	cout << "vertor iterator ----------------------" << endl;
	mainGame mg;
	


}