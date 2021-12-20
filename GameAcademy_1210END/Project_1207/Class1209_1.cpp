#include "Class_1209.h"
#include <string>

#define EAMPLE_TYPE_STRUCT			1
#define EAMPLE_TYPE_ENUM			2
#define EAMPLE_TYPE_UNION			3
#define EAMPLE_TYPE_CLASS			4

#define EAMPLE_TYPE					EAMPLE_TYPE_UNION


namespace CLASS_1209 
{
	/*
		-����� ���� �ڷ���		���� ���̾��� ����
		1. ����ü				2(3)
		2. Ŭ����				1
		3. ����ü				4
		4. ������ (enum)			3(2) >> ���ӿ����� ���Ÿ� ���̾�

		����� ���� �ڷ����̶�?
		-������ �ڷ����� ������� ���ο� �ڷ����� ������ ����� ���
			�� ����� ���� �ڷ����� Ȱ���ϸ� Ư�� �������� ������ ǥ���ϴ� ���� ����

		C/C++ ��� ����� ���� �ڷ����� ����

		- ������ (�ɺ��� ����� �����ϴ� �ڷ���) 
		- ����ü (Ư�� �������� ������ �����ϴ� �ڷ���)
		- ����ü (Ư�� �������� ������ �����ϴ� �ڷ���)
		- Ŭ���� (....) >> ����ü�� Ȯ����

		C/C++ ��� ������ ������

		//Ư¡ : ���ó�� �� �� �ִ�. ������� ���ڷ� �� �� �ִ�.
		enum EUintType
		{
			UNIT_TYPE_A,
			UNIT_TYPE_B,
			UNIT_TYPE_C
		};

		C/C++ ��� ����ü
		-Ư¡�� �ϳ� �̻��� ������ ��� ���ο� �ڷ����� �����Ѵ�.
		C++���� ������ Ŭ������ �ֱ� ������ ����ü�� ���� ������� �������� �ϸ� 
		������� ���� �� ������ ... C������ ȣȯ�� �빮�� C++���� ����ü��
		�״�� ����� �� �ִ�.
		C++ ����ü (C��� x)�� ����ü�� ����� Ȯ���Ͽ� Ŭ������ ������ ������ ����� ������.


		����ü VS ����ü(���Ͽ�)
		-�ϴ� ������ ����� ������ �𸣳� ���뵵�� ���� �ٸ���.
		-����ü�� ����ü�� �����ϴ� ������ �ʵ尡 ���� ������ �޸𸮸� ����ϴ� �ݸ�
		����ü�� �ϳ��� �޸𸮸� ������ ������ �ʵ尡 ���� �����ϴ� ������ ���Ѵ�.

		�̷��� �޸� ���� ������ ����ü�ʹ� �޸� ����ü�� �ʵ��� ������ ���� ��ȿ�ϴ�.


	*/
	
	enum EUintType
	{
		UNIT_TYPE_A,
		UNIT_TYPE_B,
		UNIT_TYPE_C
	};

	//����ü ���� ���
	// 8byte
	struct STUnitData 
	{
		int m_nID;
		int m_nLevel;
	};

	//���Ͽ� ���� ��� ST >> struct ���� ǥ���ؼ� ���
	// 4byte		do while ģ��
	// 4byte�� �����͸� �����Ͽ� ���̾���. 
	//
	union STUnitDataA
	{
		int m_nID;
		int m_nLevel;
	};
	

	struct tagFamily 
	{
		char* name;
		int age;
		int height;
		float weigth;
		bool wedding;
	};

	struct tagPlayer
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};

	/*
		������ ����� �⺻������ Ư�� ���� �Ҵ����� ������ �����Ϸ��� ���ؼ� 
		�ڵ����� 0���� ������� ���� �ο��ȴ�.
		��, Ư�� ����� ���� �Ҵ����� ��� �ش� ��� �����δ� ���ʴ�� �ش� ����� 
		�Ҵ�� �� ���ĺ��� ����.
	*/

	enum EColor_Type
	{
		RED,		// 1
		GREEN,		// 2
		BLUE =1000, // 1000 ���� �������ָ� ���� ���� ���� ���� ������ ������ �����Ѵ�.
		BLACK,		// 1001
		WHITE		// 1002
	};

	//	���� ���� : enum Ŭ������ �����ΰ���?

	//�̳� ģ������ �빮�ڷ� ����.
	//enum�� �����ʹ� �������� ���´�. 
	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN,
	};

	//���������� enum class �� ���� �ɿ��� ����. c++ 11 ���� �߰� 
	//enumŰ������ �����ʹ� �������� ������ ���Ⱑ �����. 
	//enum�� 
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN,
	};

	//�͸� enum����
	//	�� �͸��� ��Ģ�� �ٸ� ����� ���� �ڷ������� �״�� ����ȴ�.
	enum 
	{
		UNIIT_SIZE = 5
	};

	union STData 
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	class MyClass
	{
	
	};
	


	void Class_1209_1()
	{
		//C �ֿܼ��� bool�� ����ϸ� 0 || 1 ���� �ߴµ�  �ϴ��� ������ ���� true || false �� ����� �ȴ�.
		cout << std::boolalpha;

#if EAMPLE_TYPE == EAMPLE_TYPE_STRUCT

		//C ��Ÿ��
		//struct tagFamily Famaily;

		//����ü�� �޸𸮷� �ø���. ����
		// C++ ���

		//c++���� . �� ���̸� �Ҵ��� ��� ������ ����ؾ��Ѵ�. (�����Ҵ����� )
		//����ü�� �����Ҵ縸 ���� 
		//Ŭ������ ���� ���� �Ѵ� ����
		tagFamily human;

		human.name = "�Ḯ";
		human.age = 18;
		human.height = 230;
		human.wedding = false;
		human.weigth = 45;

		cout << "�̸� : " << human.name << "\n"
			<< "age : " << human.age << "\n"
			<< "height : " << human.height << "\n"
			<< "wedding : " << human.wedding << "\n"
			<< "weigth : " << human.weigth << "\n" << endl;
		
		tagPlayer player;
		player.hp = 100;
		player.mp = 100;
		player.att = 100;
		player.def = 100;
		player.speed = 100;

		tagPlayer marin = { 100,150,10,1,0};

		cout << "\n";

		//��Ʈ��ó �迭�� �����ұ�?

		tagPlayer arrPlayer[4] ={
									{100,100,100,100,100},
									{90 ,90 ,90 ,90,90},
									{80,80,80,80,80},
									{7,7,7,7,7},
								};

		for (int i = 0; i < 4; i++) 
		{
			cout << i + 1 << "��° �÷��̾�" << endl;
			cout << "hp : "<< arrPlayer->hp << endl;
			cout << "hp : " << arrPlayer[i].hp << endl;
			cout << "======================"<< endl;
		}
		


		
#elif EAMPLE_TYPE == EAMPLE_TYPE_ENUM

		// �̳� Ŭ�������� ����� ���� ������ ���� �ʾƵ� ���ó�� �� �� �ִ�?
		cout << "BLACK : " << BLACK << endl;
		cout << "RED   : " << EColor_Type::RED << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		switch (m_motion)
		{
		case R_WALK:
			cout << "������ �ȱ�" << endl;
			break;
		case L_WALK:
			cout << "���� �ȱ�" << endl;
			break;
		case 3:
			cout << "������ �ٱ�" << endl;
			break;
		case 4:
			cout << "���� �ٱ�" << endl;
			break;
		default:
			break;
		}

		if (m_motion == L_WALK) 
		{
			m_motion = R_RUN;
			if (m_motion == R_RUN) 
			{
				cout << "���������� �ڴ�." << endl;
			}
		}


#elif EAMPLE_TYPE == EAMPLE_TYPE_UNION
/*
	����ϴ� ���� : �������� ������������ �� ������ �� ����ϸ� �޸� ���� ����
	�߸� ����ϸ� �����Ͱ� ���ư� 

	�κ��丮 ������ ���� ǥ�� �Ҷ� ���� ���ϴ�.

*/
STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "== ����ü ==" << endl;
cout << "���� ������ : " << stData.m_nDataA << endl;
cout << "���� ������ : " << stData.m_fData << endl;

cout << "���� ������ : " << stData.m_nDataB << endl;

#else

#endif
	}
}

