#pragma once
#include "Character.h"
class Player : public Character {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};