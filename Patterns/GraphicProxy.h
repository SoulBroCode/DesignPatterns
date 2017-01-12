#pragma once
#ifndef GRAPHIC_PROXY_H
#define GRAPHIC_PROXY_H
#include "Graphic.h"
#include "IGraphic.h"
class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	Graphic* getInstance(void);
	void Draw();
private:
	Graphic* graphic;
	
};
#endif