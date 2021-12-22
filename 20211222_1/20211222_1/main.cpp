#include <iostream>
#include <vector>
#include"MainGame.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

//STL(standarde Template library) STL컨테이너
//시퀀스 컨테이너 - 저장되는 원소가 삽입순서에 따라 상대적인 위치를 갖는다.  ex)vector, list, deque
//연관 컨테이너 - 특정 정렬 규칙에 따라 저장 원소가 정렬되는 컨테이너 set, map, multiset, mulmimap
//레트블랙트리? 
/*


벡터 
동적배열구조 클래스
중간 삽입 삭제가 빈번하게 발생하는 경우라면 비효율적이다.
단, 뒤에서 삽입삭제는 빠르다.

언제 벡터를 쓰는가? ->  내가 저장 하려는 데이터 개수가 가변적일때
중건에 데이터를 삽입하거나 삭제할 일이 빈번하게 발생하지 않고 마지막에서 추가나 삭제정도만 있을때
저장할 데이터가 많지 않고 많다면 검색이 빈번하게 일너나지 않을때
랜덤하게 데이터 접근을 허용할때
속도적인 측면에서는 배열이 더 빠르다.

새로운 데이터가 할당되다가 할당 된 공간이 부족하다면 할당된 공간에 0.5배 만큼 크기를 늘려준다. 

멤버함수 
	front

	reservecl? 
	capacity 할당된 크기에 
	size



반복자 (iterator) : 포인터랑 비슷한 개념. 컨테이너의 원소를 가리키고 가리키는 원소에 접근해서 다음 원소를 가리키게 하는 기능



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
		cout << vec[i]<< "->"; // 배열처럼 접근가능
	}

	cout<< endl << "백터 v의 원소 갯수 : " << vec.size() << endl; // v 원소갯수
	cout<<  "백터 v의 capacity : " << vec.capacity() << endl; // 총 할당된 용량 
	cout<<  "백터 v의 최대 저장 : " << vec.max_size() << endl; // 총 할당된 데이터 크기 
	cout<<  "*vec.begin() : " << *vec.begin() << endl; // 시작점 
	//cout<<  "*vec.end() : " << *vec.end() << endl; // 끝점




	vec.pop_back();
	vec.pop_back();
	vec.pop_back();

	cout << "data pop ---------------------" << endl;
	for (int i = 0; i < vec.size(); i++) 
	{
		cout << vec[i] << "->"; 
	}
	cout << endl;
	cout << "클리어 후 ----------------------" << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "->";
	}
	cout << vec.size() << endl;
	*/


	/*정리 : 멤버함수 
		vec.assign(n, x) = v에 x값으로 n개의 원소를 할당
		vec.at(i) = v의 i번째 원소를 참조한다. 

	*/

	cout << "vertor iterator ----------------------" << endl;
	mainGame mg;
	


}