#pragma once
#include<vector>
#include"Bingo.h"

using std::vector;


class BingoGame
{
private:
	vector<int> _checkVec;
	vector<int>::iterator _iter;
	int _bingoSize;
	int _totalBingoSize;
	int _numOfplayers;
	int _playerTurn;

	vector<Bingo*> _vecPlayer;
	vector<Bingo*>::iterator _iterPlayer;


public:
	BingoGame();
	BingoGame(int players,int bingoSize);
	~BingoGame();

	void Play();
	bool IsEnd();
	void PlayersCheckLine();
	void PlayersDisPlay();
	void InputNum(int inputNum);
	void AllInputNumber(int inputNum);

};

/*
	게임 준비
	게임 플레이 
	디스플레이 
	라인 체크

	void 승리 체크 

	int 컴퓨터 라인
	int 플레이어 라인
	입력받은 숫자 관리

*/