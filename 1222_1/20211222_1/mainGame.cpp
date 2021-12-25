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

	m_vNumber.insert(m_vNumber.begin(),20); // insert(인덱스(위치) , 값)
	m_vNumber.insert(m_vNumber.begin()+1,120); // insert(인덱스+1 , 값)
	m_vNumber.insert(m_vNumber.end()-1,3,100); // insert(인덱스-1, 값 갯수, 값)
	for (size_t i = 0; i < m_vNumber.size(); i++)
	{
		cout << m_vNumber[i] << endl;
	}

	cout << "------------iterator------------------" << endl;

	//전위연산이 조금 더 빠르다 
	for (m_iterator = m_vNumber.begin();
		m_iterator != m_vNumber.end();
		++m_iterator)
	{
		cout << *m_iterator << endl;
	}

	// capacity : 컴파일러마다 늘어나는 크기가 다르다. 
	//리저브함수를 쓰면 예약된 공간을 잡기 때문에 라는 벡터의 데이터가 추가 되더라도 재할당을 하지 않는다. 

}

mainGame::~mainGame()
{
}
