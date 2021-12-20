#include "MainGame.h"

MainGame::MainGame()
{
	m_mc = new MotherClass();
	m_mc->function1();
	m_mc->function2();
	m_mc->function3();

	std::cout << "====================" << std::endl;

	m_mc = new ChildClass();
	m_mc->function1();
	m_mc->function2();
	m_mc->function3();

}

MainGame::~MainGame()
{
	delete m_mc;
}
