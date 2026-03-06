#pragma once

#include "Player.h"

class Magician :public Player
{
public:
	Magician(string nickName);
	void Attack() override;
	void Attack(Monster* monster) override;
};


