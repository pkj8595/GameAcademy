#include"Rectangle.h"


enum class State 
{
	STATE_WALK,
	STATE_JUMP,
	STATE_ATTACK,
	STATE_DAMAGE
};

// //������ ���ǽ��� ����ȭ �ض� �������� �����ض�
//bool isJump() 
//{
//	return y > 0.0f;
//}
//bool isDamage() 
//{
//	return State::STATE_DAMAGE;
//}
//bool isDash() 
//{
//	return  (speed > 10.0f) && !isJump && isDamage;
//}
//bool isDash()
//{
//	if (isJump())return false;
//	if (isDamage())return false;
//	if ((speed > 10.0f))return false;
//
//	return true;
//}


void main() 
{
	
	Rectangle rc(5, 5, 10, 10);
	rc.RectPos();
	
	
	//������ �Լ��� �����. ������ ��������
	State PlayerState = State::STATE_ATTACK;

	/*if (PlayerState == State::STATE_ATTACK) 
	{

	}*/
	
	int speed = 5;
	float y = 5.0f;

	//�򰥸���.
	if (speed >=10.0f && (y>0.0f) && PlayerState != State::STATE_DAMAGE) {

	}

	//�б⸸ �Ҷ� const�� ���
	const bool isJump = y>0.0f;
	const bool isDamage = PlayerState == State::STATE_DAMAGE;
	const bool isDash = (speed >= 10.0f) && !isJump && isDamage;

	//������ ���ǽ��̶�� ��ó�� �ɰ��� ���
	if (isDash) 
	{

	}
	
	/*
		uml 
	*/

		

}