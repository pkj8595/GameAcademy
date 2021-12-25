#include<iostream>
#include<set> // 연관컨테이너 
/*
	set : 연관컨테이너 중 가장 단순하다.key라고 불리는 원소의 집합으로 이루어진 컨테이너
			자동정렬을 해주고 중복을 없앤다.
			양방향 반복자 사용
			반복자의 탐색 순서는 in order 이진트리탐색를 사용   >> 왼쪽아래부터 탐색을 한다.



			정리할것 : 트리의 순회방법 // 전위 중위 후위 순회 //
*/

#define STATE_CLASS_1		1
#define STATE_CLASS_2		2
#define STATE_TYPE			STATE_CLASS_2

using std::cout;
using std::endl;
using std::set;

int main()
{
	//int 데이터를 저장하는 빈 컨테이너 생성
	//모든 키가 유일하다.

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

	////양방향 반복자

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

	////set은 같은 원소를 중복저장 할 수 없으므로 inset()멤버 함수 호출시 반환값으로 실패를 확인 할 수 있다.
	////반환값은 pair 라는 객체이고 first와 second는 각각 삽입된 원소의 위치를 가리키는 반복자와 성공 여부를 나타내는 bool값이다.

	//std::pair<std::set<int>::iterator, bool> pr;

	//pr = s1.insert(50);
	//pr = s1.insert(40);
	//pr = s1.insert(40);
	//pr = s1.insert(110);

	//if (true == pr.second)std::cout << *pr.first << "\ninsert success" << std::endl;
	//else std::cout << *pr.first << "가 이미 있다. 실패" << std::endl;
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

	//s.insert(pr.first, 85); // 90원소의 반복자에서 검색을 시작 삽입



	//std::set<int, std::greater<int>> s2;

	//s2.insert(50);
	//s2.insert(10);
	//s2.insert(30);
	//s2.insert(70);
	//s2.insert(60);
	//s2.insert(20);
	//s2.insert(110);

	////조건자를 설정해야한다.?

	////역순 정렬
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

	iter = s.find(30);//30의 반복자를 반환

	if (iter != s.end())
	{
		cout << *iter << "가 있음" << endl;
	}
	else
	{
		cout << "없음" << endl;
	}


#endif

}