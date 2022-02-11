#pragma once
#include "SFML/Graphics.hpp"
#include "road.h"
#include"splash.h"
#include "car.h"
#include "barrier.h"

class Game {
public:
	enum GameState { SPLASH, PLAY, GAME_OVER };
	Game();
	void play();
	void checkEvents();
	void update();
	void draw();
	void check_collisions();
private:
	sf::RenderWindow window;
	Road road1, road2;
	GameState game_state{ SPLASH };
	SplashScreen splash, game_over_screen;
	Car car;
	Barrier barrier1,barrier2;
};