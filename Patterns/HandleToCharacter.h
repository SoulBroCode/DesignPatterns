#pragma once
#include "Character2.h"
class HandleToCharacter
{
public:
	
	HandleToCharacter() : character(new Character2()) {  }
	~HandleToCharacter()
	{
		delete character;
	}
	Character2* operator->() { return character; } //overloaded ->
private:
	Character2* character;
};