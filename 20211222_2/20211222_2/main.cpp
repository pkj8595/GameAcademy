#include<iostream>
#include<vector>

using namespace std;


/*
	벡터도 클래스다
	생성자를 사용해서 사이즈를 할당할 수 있다.
*/
int main()
{
	//vector<int> v;	
	//v.reserve(8);//메모리 공간을 8로 예약
	////벡터의 크기가 늘어날 때 공간을 다시 잡고 값을 복사한다.
	////데이터가 할당 크기를 넘어서면 메모리가 재할당되고 값이 복사된다. 그럼 벡터의 주소값이 바뀌지 않을까?

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v.push_back(i*10);
	//	cout << "사이즈 : " << v.size() << "	, 용량 : " << v.capacity() << endl;
	//}

	cout << " -----------------------v1------------------------" << endl;

	vector<int> v1(5); //0으로 초기화된 size가 5인 (컨테이너 5개의 영역에 0이 할당됨)
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

	vector<int> v2(5); //0으로 초기화된 size가 5인 (컨테이너 5개의 영역에 0이 할당됨)

	//값 바꾸기
	v2[0] = 10;
	v2[1] = 20;
	v2[2] = 30;
	v2[3] = 40;
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << endl;
	}

	cout << " -----------------------v3------------------------" << endl;


	vector<int> v3(5,10); //지정값 10으로 초기화된 size가 5인 vector

	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << endl;
	}


	cout << " -----------------------v4------------------------"<< endl;

	//resize : 사이즈 변경 

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
	v4.resize(5); // 사이즈를 줄임
	cout << endl;
	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;

	for (size_t i = 0; i < v4.size(); i++)
	{
		cout << v4[i] << " ";
	}
	cout << endl;

	cout << "size : " << v4.size() << "	capacity : " << v4.capacity() << endl;
	//주의할점 resize를 사용할때 -> 늘릴대는 capacity도 늘어난다. 하지만 줄일때는 size만 줄어들고 capacity는 줄지 않는다.
	
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
	//메모리는 남아있다. 
	if (v5.empty()) //비어있는지 ?
	{
		cout << "없음" << endl;
	}

	cout << " -----------------------v6------------------------" << endl;

	//벡터 없애기? c++ 권장 사용방법
	//용량을 0으로 만드려고 하는 벡터와 임시로 생성한 벡터를 스왑시킨다.
	//클리어 해도 capacity는 남아있다.
	//기본 생성자를 사용해서 임시객체를 만든다음 swap을 하면 capacity가 0으로 바뀐다
	//vector<int>() >> 벡터의 임시객체 (capacity : 0)
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

	v7[0] = 100; // 범위점검이 없는 0번째 index 참조
	v7.at(2) = 10;

	for (size_t i = 0; i < v7.size(); i++)
	{
		cout << v7[i] << " ";
	}
	//[] : 임의의 위치에 접근하는 연산자 >> 범위점검을 하지 않기 때문에 속도가 빠름
	//at() : 멤버함수 >>범위점검을 함. -> 속도는 상대적으로 느리지만 안전하다. 


	cout << " \n-----------------------v8------------------------" << endl;

	//특정 위치의 값 지우기

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

	// 데이터를 하나씩 비교
	if (v9 == v10) 
		cout << "같다" << endl;
	if (v9 != v10)
		cout << "같지 않다" << endl;
	if (v9 < v10) 
		cout << "v9가 작다" << endl;

	//벡터는 임의 접근자를 지원하는 배열 기반 컨테이너
	//특징 중 하나는 데이터가 하나의 메모리 블럭에 연속하게 저장된다.
	//데이터가 선형구조로 저장되기 때문에 속도가 빠르기는 한데 빈번하게 수정 삭제가 일어나는 다른 컨테이너사용을 고려해야 한다. 
	//프론트 back 백터가 배열을 기반으로 만들어져 있기 때문에 벡터는 푸쉬백이나 팝백는 있지만 푸쉬 프론트나 팝프론트는 없다.



}