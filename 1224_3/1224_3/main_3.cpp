#include <iostream>
#include <map>
#include<string>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::make_pair;

//vector, list, queue, stack, map, set.... 상황에 맞게 사용해야한다. 내부방식 어떻게 돌아가는지 
/*
	map : 탐색속도가 굉장히 빠르다.

	레드 블랙 트리로 만들어져있음
	key와 value로 이뤄져있음
	key : 경재 value : 200
	자동정렬이 됨

	멀티맵은 키와 밸류가 중복으로 ?
*/
int main()
{
	//<key, value>
	/*map<int,int> m;

	m.insert(pair<int, int>(5, 100));*/

	map<string, int>m_data;
	map<string, int>::iterator iter;

	//1.
	m_data.insert(map<string, int>::value_type("바보", 1));
	//2.
	m_data.insert(make_pair("경재", 5));
	//3.
	m_data.insert(pair<string, int>("학교", 23));
	m_data.insert(pair<string, int>("집", 23));
	m_data.insert(pair<string, int>("학원", 53));
	m_data.insert(pair<string, int>("윈터", 93));
	m_data.insert(pair<string, int>("그렌달", 100));

	//4.
	pair<string, int>pr1("길구", 221);
	m_data.insert(pr1);

	//지우기
	//키값으로 지우기
	m_data.erase("그렌달");

	//m_data.erase();



	for (iter = m_data.begin(); iter != m_data.end(); ++iter)
	{
		//first -> key		second-> value
		cout << iter->first << " " << iter->second << endl;
	}

	if (m_data.find("봉구") != m_data.end()) {
		cout << "있음" << endl;
	}
	else
	{
		cout << "없음" << endl;
	}

}