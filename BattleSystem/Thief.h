#pragma once

#include "Player.h"

class Thief : public Player
{
public:
	Thief(string nickName);
	void Attack() override;
	void Attack(Monster* monster) override;
};

