#include"Rectangle.h"


enum class State 
{
	STATE_WALK,
	STATE_JUMP,
	STATE_ATTACK,
	STATE_DAMAGE
};

// //복잡한 조건식을 간소화 해라 가독성을 생각해라
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
	
	
	//계산식을 함수로 만든다. 가독성 좋아지기
	State PlayerState = State::STATE_ATTACK;

	/*if (PlayerState == State::STATE_ATTACK) 
	{

	}*/
	
	int speed = 5;
	float y = 5.0f;

	//헷갈린다.
	if (speed >=10.0f && (y>0.0f) && PlayerState != State::STATE_DAMAGE) {

	}

	//읽기만 할때 const를 사용
	const bool isJump = y>0.0f;
	const bool isDamage = PlayerState == State::STATE_DAMAGE;
	const bool isDash = (speed >= 10.0f) && !isJump && isDamage;

	//복잡한 조건식이라면 이처럼 쪼개서 사용
	if (isDash) 
	{

	}
	
	/*
		uml 
	*/

		

}