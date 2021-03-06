#pragma once
#include "Classes.h"
#define fps 60

class Engine
{
public:
	Engine():m_iFps(fps),m_bGotTick (false){}
	~Engine(){}

	bool init(const char*title,int xpos, int ypos, int width,int height, int flags);
	bool running();
	bool tick();
	void update(Player &p);
	void render(BACKGROUND &bg, Player &p);
	void handleEvents();
	void clean();
private:
	bool m_bRunning;
	bool m_bGotTick;
	bool m_bUp, m_bDown, m_bLeft, m_bRight;
	SDL_Window*m_pWindow;
	SDL_Renderer*m_pRenderer;
	int m_iFps;
	SDL_Surface*m_pBackgroundSurface;
	SDL_Texture*m_pBackgroundTexture;
	SDL_Surface*m_pBirdSurface;
	SDL_Texture*m_pBirdTexture;

};

