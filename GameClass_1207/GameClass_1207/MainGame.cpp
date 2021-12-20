#include "MainGame.h"

MainGame::MainGame()
{
	m_unit = new Unit;
	m_unit->Init();

	m_player = new Player;
	m_player->Init();

}

MainGame::~MainGame()
{
	delete m_unit;
	delete m_player;
}
