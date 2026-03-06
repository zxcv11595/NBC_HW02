#pragma once

#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(string nickName);
	void Attack() override;
	void Attack(Monster* monster) override;
};

