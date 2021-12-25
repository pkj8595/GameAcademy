#include "HomeWork.h"//헤더 파일은 파일 명이다.
#include "HomeWork2.h"
#include "HomeWork3.h"
#include "HomeWork4.h"
#include "HomeWork5.h"

void main() 
{
	//정적할당
	HomeWork mg;
	//동적할당
	HomeWork2 *homework2 = new HomeWork2();
	homework2->TestStringPointer();
	HomeWork3 *homework3 = new HomeWork3();
	HomeWork4 *homework4 = new HomeWork4();
	HomeWork5 *homework5 = new HomeWork5();

}
/*
과제	 1 클래스 사용법 익히기
		-클래스 5개 생성후 각각 다른 문구 출력

		Ex)
		(클래스 이름)클래스 1번
		(클래스 이름)클래스 2번
		(클래스 이름)클래스 3번

		※최소 클래스 갯수는 5개

		과제 2 다마고치 만들기
		-필수 요소
		1. 데코 (토트)
		2. 게임 요소 (만족도 , 배고픔, 놀리, 배변 등등+@)
		3. 시간에 따른 성장요소
		4. 현재 요일 및 시간 확인 할 수 있는 정보
		5. 엔딩 요소

		과제 3 하이 로우 세븐
		-1~13 까지 카드 4종류
		종류별 13장의 카드 52장의 카드를 사용
		-필수 : 카드모양
		-52장의 카드를 최소 한번 이상 랜덤으로 섞고 그 후 매턴마다 5씩 뒤집는다.
		-잎쪽에 배치된 다섯장의 카드를 보고 6번째 카드의 숫자를 예측한다.
		-seven(7) 보다 높으면 high 낮으면 low 아니면 같은지 seven 중 하나에 배팅
		-seven이면 13배 배당금 획득
		-카드 버리기

		과제 4 클래스화
		-과제는 총 2개
		-가위바위보 + @ 과제를 클래스화 시켜온다.
		-제대로
*/