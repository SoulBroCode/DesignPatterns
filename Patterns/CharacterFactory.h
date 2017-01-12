#pragma once
#include "Boss.h"
#include "Player.h"
#include "Factory.h"
class CharacterFactory : public Factory {
public:
	Character* CreatePlayer() {
		return new Player;
	}
	Character* CreateOpponents() {
		return new Boss;
	}
};