#pragma once
#include <iostream>
#include "DrawAPI.h"
class DrawImpl : public DrawAPI
{
public:
	~DrawImpl()
	{
	}
	void Draw() {
		std::cout << "Draw Impl" << std::endl;
	}
};

