#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"

class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen() {
		texture.loadFromFile(SPLASH_FILE_NAME);
		sprite.setTexture(texture);
	
	}
	void init(float scale_x, float scale_y) {
		sprite.setScale(scale_x, scale_y);
	}
	sf::Sprite getSprite() { return sprite; }
};