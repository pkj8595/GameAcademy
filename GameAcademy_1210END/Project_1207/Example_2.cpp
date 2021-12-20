#include "Example_2.h"
#include <random>

namespace EXAMPLE_2
{

	void ArrayClass_1207() 
	{
		/*
			난수(Random Number) : 무작위로 만들어 지는 알 수 없는 값
				ㄴ게임 분야에서 초 슈퍼 울트라 메가 중요하다.
				ㄴ패를 무작위로 섞기 위해 OR 적의 움직임을 알 수 없도록 하기 위해 난수가 필요하다.
				ㄴrand() 함수를 호출하면 0~32767 중 임의의 값 하나를 불러온다. 2^16
				ㄴrand() 함수 일정한 규칙에 따라 난수를 생성하는데 규칙이 항상 같기 때문에 생성하는 난수 또한 항상 같다.


			배열은 초기화를 무조건 해줘야 한다.

			srand의 단점은 
			컴퓨터에 의해 만들어지는 난수이기 때문에 패턴이 동일하다.
		*/
		srand(time(NULL));
		int damage = (rand() % 10) + 1;
		cout << "데미지 : " << damage << endl;

		for (int i = 0; i < 10; i++) {
			printf("%d\t", rand());
		}

		//셔플 알고리즘
		int num[10];
		int dest, sour, temp; //공간(섞기위한 준비)

		for (int i = 0; i < 10;i++) {
			num[i] = i;
		}

		for (int i = 0; i < 10; i++) {
			cout << num[i] << endl;
		}

		//섞기
		for (int i=0; i<10; i++) 
		{
			dest = rand() % 10;
			sour = rand() % 10;

			temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;

		}

		//셔플 확인
		for (int i = 0; i < 10; i++)
		{
			cout << "[" << i << "] = " << num[i] << endl;;
		}

		//========= 완벽한 난수 ==========
		/*
			srand() / rand() 함수의 조합은 완벽한 난수를 생성할 수 없기 때문에 C++11 부터
			새로 추가된 디바이스를 이용해야 완벽한 난수를 생성하는 것이 가능하다.
				ㄴ Random Number Generator(포폴만들때 이거 쓰기)
			
			생성방법
			#include <random>
		*/
		//-----------------------------------------

		int RandomMin = 1;
		int RandomMax = 10;
		//디바이스 생성
		std::random_device ORandomDevice;

		//시드설정
		std::mt19937_64 rnd(ORandomDevice());

		cout << "RandomDevice : \n" <<rnd << endl;

		//범위 설정
		std::uniform_int_distribution<int> range(RandomMin, RandomMax);


		//실수
		//std::uniform_int_distribution<float>
		//정규값 (분포)
		//std::normal_distribution<double>
		cout << "\n";

		//쓰는법 1
		int RandomValue = range(rnd);
		cout << "추출값 :" << RandomValue << endl;
		//------------------------------------------------------------
		//쓰는법 2
		int nNumberA = (ORandomDevice() % 10) + 1;
		int nNumberB = (ORandomDevice() % 10) + 1;

	}
}

