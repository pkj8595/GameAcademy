#include<iostream>
#include<vector>

using namespace std;


/*
	���͵� Ŭ������
	�����ڸ� ����ؼ� ����� �Ҵ��� �� �ִ�.
*/
int main()
{
	//vector<int> v;	
	//v.reserve(8);//�޸� ������ 8�� ����
	////������ ũ�Ⱑ �þ �� ������ �ٽ� ��� ���� �����Ѵ�.
	////�����Ͱ� �Ҵ� ũ�⸦ �Ѿ�� �޸𸮰� ���Ҵ�ǰ� ���� ����ȴ�. �׷� ������ �ּҰ��� �ٲ��� ������?

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v.push_back(i*10);
	//	cout << "������ : " << v.size() << "	, �뷮 : " << v.capacity() << endl;
	//}

	cout << " -----------------------v1------------------------" << endl;

	vector<int> v1(5); //0���� �ʱ�ȭ�� size�� 5�� (�����̳� 5���� ������ 0�� �Ҵ��)
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}

	cout << endl << endl;
	cout << " -----------------------v2------------------------" << endl;

	vector<int> v2(5); //0���� �ʱ�ȭ�� size�� 5�� (�����̳� 5���� ������ 0�� �Ҵ��)

	//�� �ٲٱ�
	v2[0] = 10;
	v2[1] = 20;
	v2[2] = 30;
	v2[3] = 40;
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << endl;
	}

	cout << " -----------------------v3------------------------" << endl;


	vector<int> v3(5,10); //������ 10���� �ʱ�ȭ�� size�� 5�� vector

	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << endl;
	}


	cout << " -----------------------v4------------------------"<< endl;

	//resize : ������ ���� 

	vector<int> v4(5);

	v4[0] = 10;
	v4[1] = 10;
	v4[2] = 20;
	v4[3] = 30;

	for (size_t i = 0; i < v4.size(); i++)
	{
		cout << v4[i] <<" ";
	}
	cout << endl;
	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;

	v4.resize(10);
	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;

	for (size_t i = 0; i < v4.size(); i++)
	{
		cout << v4[i] << " ";
	}
	v4.resize(5); // ����� ����
	cout << endl;
	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;

	for (size_t i = 0; i < v4.size(); i++)
	{
		cout << v4[i] << " ";
	}
	cout << endl;

	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;
	//�������� resize�� ����Ҷ� -> �ø���� capacity�� �þ��. ������ ���϶��� size�� �پ��� capacity�� ���� �ʴ´�.
	
	cout << " -----------------------v5------------------------" << endl;

	//clear , empty

	vector<int> v5(5);

	v5[0] = 10;
	v5[1] = 10;
	v5[2] = 20;
	v5[3] = 30;

	for (size_t i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}
	cout << "\nsize : " << v5.size() << "	capacity : " << v5.capacity() << endl;
	v5.clear();
	cout << "clear\nsize : " << v5.size() << "	capacity : " << v5.capacity() << endl;
	//�޸𸮴� �����ִ�. 
	if (v5.empty()) //����ִ��� ?
	{
		cout << "����" << endl;
	}

	cout << " -----------------------v6------------------------" << endl;

	//���� ���ֱ�? c++ ���� �����
	//�뷮�� 0���� ������� �ϴ� ���Ϳ� �ӽ÷� ������ ���͸� ���ҽ�Ų��.
	//Ŭ���� �ص� capacity�� �����ִ�.
	//�⺻ �����ڸ� ����ؼ� �ӽð�ü�� ������� swap�� �ϸ� capacity�� 0���� �ٲ��
	//vector<int>() >> ������ �ӽð�ü (capacity : 0)
	vector<int> v6(5);
	cout << "\nsize : " << v6.size() << "	capacity : " << v6.capacity() << endl;
	vector<int>().swap(v6);
	cout << "\nsize : " << v6.size() << "	capacity : " << v6.capacity() << endl;


	cout << " -----------------------v7------------------------" << endl;

	vector<int>v7;
	v7.push_back(1);
	v7.push_back(2);
	v7.push_back(3);
	v7.push_back(4);
	v7.push_back(5);

	v7[0] = 100; // ���������� ���� 0��° index ����
	v7.at(2) = 10;

	for (size_t i = 0; i < v7.size(); i++)
	{
		cout << v7[i] << " ";
	}
	//[] : ������ ��ġ�� �����ϴ� ������ >> ���������� ���� �ʱ� ������ �ӵ��� ����
	//at() : ����Լ� >>���������� ��. -> �ӵ��� ��������� �������� �����ϴ�. 


	cout << " \n-----------------------v8------------------------" << endl;

	//Ư�� ��ġ�� �� �����

	vector<int> v8;

	v8.push_back(1);
	v8.push_back(2);
	v8.push_back(3);
	v8.push_back(4);
	v8.push_back(5);

	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	
	for(iter = v8.begin(); iter!=v8.end();++iter)
	{
		cout << *iter << " ";
	}

	cout << endl << endl;
	iter = v8.begin() + 2;
	iter2 = v8.erase(v8.begin() + 2);

	for (iter = v8.begin(); iter != v8.end(); ++iter)
	{
		cout << *iter << " ";
	}


	cout << endl << endl;
	iter2 = v8.erase(v8.begin() + 1,v8.end());

	for (iter = v8.begin(); iter != v8.end(); ++iter)
	{
		cout << *iter << " ";
	}

	//
	cout << " \n-----------------------v9,v10------------------------" << endl;

	cout << endl << endl;

	vector<int>v9;

	v9.push_back(1);
	v9.push_back(2);
	v9.push_back(3);
	v9.push_back(4);
	v9.push_back(5);

	vector<int>v10;

	v10.push_back(1);
	v10.push_back(2);
	v10.push_back(3);

	// �����͸� �ϳ��� ��
	if (v9 == v10) 
		cout << "����" << endl;
	if (v9 != v10)
		cout << "���� �ʴ�" << endl;
	if (v9 < v10) 
		cout << "v9�� �۴�" << endl;

	//���ʹ� ���� �����ڸ� �����ϴ� �迭 ��� �����̳�
	//Ư¡ �� �ϳ��� �����Ͱ� �ϳ��� �޸� ���� �����ϰ� ����ȴ�.
	//�����Ͱ� ���������� ����Ǳ� ������ �ӵ��� ������� �ѵ� ����ϰ� ���� ������ �Ͼ�� �ٸ� �����̳ʻ���� ����ؾ� �Ѵ�. 
	//����Ʈ back ���Ͱ� �迭�� ������� ������� �ֱ� ������ ���ʹ� Ǫ�����̳� �˹�� ������ Ǫ�� ����Ʈ�� ������Ʈ�� ����.



}