#include "Monster.h"
#include "Player.h"

Monster::Monster(string name)
	: _name(name), _hp(10), _power(30), _defence(10), _speed(10)
{
}

void Monster::Attack(Player* player)
{
	int monsterDamage = _power - player->GetDefence();
	if (monsterDamage <= 0)
		monsterDamage = 1;

	cout << "슬라임이 플레이어에게 " << monsterDamage << "의 피해를 입혔습니다!" << endl;
	player->SetHP(player->GetHP() - monsterDamage);
	if (player->GetHP() > 0)
		cout << "플레이어의 남은 체력: " << player->GetHP() << endl;
	else
		cout << "패배하였습니다." << endl;
}

// 몬스터의 속성값을 리턴하는 get 함수

string Monster::GetName() const
{
	return _name;
}

int Monster::GetHP() const
{
	return _hp;
}

int Monster::GetPower() const
{
	return _power;
}

int Monster::GetDefence() const
{
	return _defence;
}

int Monster::GetSpeed() const
{
	return _speed;
}

// 몬스터의 속성값을 정의하는 set 함수

void Monster::SetName(string name)
{
	_name = name;
}

void Monster::SetHP(int HP)
{
	_hp = HP;
}

void Monster::SetPower(int power)
{
	_power = power;
}

void Monster::SetDefence(int defence)
{
	_defence = defence;
}

void Monster::SetSpeed(int speed)
{
	_speed = speed;
}