#pragma once

#include "Player.h"

class Archer : public Player
{
public:
	Archer(string nickName);
	void Attack() override;
	void Attack(Monster* monster) override;
};

