#pragma once
#include "Character3.h"
#include "DrawImpl.h"
class Player3 : public Character3
{
public:
	~Player3() {};
	Player3(DrawAPI* api) { this->api = api; }
	void Draw() { api->Draw(); }
private:
	DrawAPI* api;
};
