#pragma once
#ifndef game_hpp
#define game_hpp

#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "bullet.h"
#include "tank.h"
#include "shield.h"

#define WIDTH 800
#define HEIGHT 600

class Game {
public:
	Game();
private:
	Bullet *bullets[10] = { NULL };
	Tank *tanks[5] = { NULL };

public:
	void is_exit(sf::Event &event, sf::RenderWindow &window);
	void Draw_Tank(Tank &tank, sf::Time elapsed, sf::RenderWindow &window);




};




#endif /* game_hpp */
