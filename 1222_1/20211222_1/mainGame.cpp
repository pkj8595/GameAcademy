#include "mainGame.h"

mainGame::mainGame()
{
	for (int i = 0; i < 10; i++) 
	{
		m_vNumber.push_back(i+1);	
	}


	for (size_t i = 0; i < m_vNumber.size(); i++)
	{
		cout << m_vNumber[i] << endl;
	}
	
	

	cout << "------------insert begin------------------" << endl;

	m_vNumber.insert(m_vNumber.begin(),20); // insert(�ε���(��ġ) , ��)
	m_vNumber.insert(m_vNumber.begin()+1,120); // insert(�ε���+1 , ��)
	m_vNumber.insert(m_vNumber.end()-1,3,100); // insert(�ε���-1, �� ����, ��)
	for (size_t i = 0; i < m_vNumber.size(); i++)
	{
		cout << m_vNumber[i] << endl;
	}

	cout << "------------iterator------------------" << endl;

	//���������� ���� �� ������ 
	for (m_iterator = m_vNumber.begin();
		m_iterator != m_vNumber.end();
		++m_iterator)
	{
		cout << *m_iterator << endl;
	}

	// capacity : �����Ϸ����� �þ�� ũ�Ⱑ �ٸ���. 
	//�������Լ��� ���� ����� ������ ��� ������ ��� ������ �����Ͱ� �߰� �Ǵ��� ���Ҵ��� ���� �ʴ´�. 

}

mainGame::~mainGame()
{
}
