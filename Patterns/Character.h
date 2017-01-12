#pragma once
//abstract factory
#include <iostream>
class Character {
public:
	Character() {}
	virtual ~Character() {}
	virtual void draw() = 0;
};