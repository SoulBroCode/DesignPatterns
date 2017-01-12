// Patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <vector>


////////////////////////
#include "CharacterFactory.h"
#include "HandleToCharacter.h"

////////////////////////////////
#include "DrawImpl.h"
#include "Player3.h"






////////////////////////////


#include <iostream>
#include "GraphicProxy.h"

using namespace std;


int main() {
	//abstract factory//
	std::cout << "-------abstract factory---------" << endl;
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());
	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	//bridge pattern
	std::cout << "------bridge pattern-------" << endl;
	HandleToCharacter handle;
	handle->Print();
	//bridge pattern refinement
	std::cout << "------bridge pattern API-------" << endl;
	DrawAPI* api = new DrawImpl();
	Character3* character = new Player3(api);
	character->Draw();
	
	//proxyobject
	std::cout << "-----proxyObject--------" << endl;
	GraphicProxy gp;
	gp.Draw();
	std::cout << "--------------" << endl;
	system("PAUSE");
	return 0;
}



