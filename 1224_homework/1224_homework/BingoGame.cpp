#include "BingoGame.h"

BingoGame::BingoGame()
{
	srand(time(NULL));
	int players ;
	//, bingoSize
	cout << "컴퓨터 몇개 생성? : " ;
	cin >> players;
	//cout << "빙고 사이즈? : ";
	//cin >> bingoSize;


	for (size_t i = 0; i < players; i++)
	{
		_vecPlayer.push_back(new Bingo(false));
	}
	_vecPlayer.push_back(new Bingo(true));

	_numOfplayers = players + 1;
	_bingoSize = BINGO_SIZE;
	_totalBingoSize = BINGO_SIZE * BINGO_SIZE;
	_checkVec.reserve(_totalBingoSize);

	Play();
}

BingoGame::BingoGame(int players, int bingoSize)
{
	for (size_t i = 0; i < players; i++)
	{
		_vecPlayer.push_back(new Bingo(false));
	}
	_vecPlayer.push_back(new Bingo(true));

	_numOfplayers = players+1;
	_bingoSize = bingoSize;
	_totalBingoSize = bingoSize * bingoSize;
	_checkVec.reserve(_totalBingoSize);

	Play();
}

BingoGame::~BingoGame()
{
}

void BingoGame::Play()
{
	int callNumberTemp=0;
	_playerTurn = 0;

	while (true) 
	{
		_playerTurn %= _numOfplayers;
		callNumberTemp = 
			_vecPlayer[_playerTurn]->CallNumber();
		InputNum(callNumberTemp);
		AllInputNumber(callNumberTemp);
		PlayersCheckLine();
		PlayersDisPlay();
		if (IsEnd()) 
		{
			break;
		}
		system("pause");
		system("cls");
		_playerTurn++;

	}
}


bool BingoGame::IsEnd()
{
	for (_iterPlayer = _vecPlayer.begin();
		_iterPlayer != _vecPlayer.end();
		++_iterPlayer)
	{
		if (((*_iterPlayer)->GetLineCount()) >= 3)
		{
			if ((*_iterPlayer)->GetIsPlayer())
			{
				cout << "====Player Win====" << endl;
			}
			else
			{
				cout << "====Player Lose====" << endl;
			}
			return true;
		}
	}
	return false;
}

void BingoGame::PlayersCheckLine()
{
	for (_iterPlayer = _vecPlayer.begin();
		_iterPlayer != _vecPlayer.end();
		++_iterPlayer)
	{
		(*_iterPlayer)->CheckLine();
	}
}

void BingoGame::PlayersDisPlay()
{
	for (_iterPlayer = _vecPlayer.begin();
		_iterPlayer != _vecPlayer.end();
		++_iterPlayer) 
	{
		(*_iterPlayer)->Display();
	}
}

void BingoGame::InputNum(int inputNum)
{
	for (_iterPlayer = _vecPlayer.begin();
		_iterPlayer != _vecPlayer.end();
		++_iterPlayer)
	{
		(*_iterPlayer)->CheckNumber(inputNum);
		
	}
}

void BingoGame::AllInputNumber(int inputNum)
{
	_checkVec.push_back(inputNum);

	for (_iter = _checkVec.begin(); _iter != _checkVec.end(); ++_iter)
	{
		cout << *_iter << " ";
	}
	cout << endl;
}


