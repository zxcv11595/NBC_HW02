#include<iostream>

#include "Player.h"
#include "Monster.h"

Player::Player(string nickname) 
    : _nickName(nickname)
{
    _jobName = "";
    _level = 1;
    _hp = 20;
    _mp = 20;
    _power = 20;
    _defence = 20;
    _accuracy = 20;
    _speed = 20;
}


void Player::PrintPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "직업: " << _jobName << endl;
    cout << "닉네임: " << _nickName << endl;
    cout << "Lv. " << _level << endl;
    cout << "HP: " << _hp << endl;
    cout << "MP: " << _mp << endl;
    cout << "공격력: " << _power << endl;
    cout << "방어력: " << _defence << endl;
    cout << "정확도: " << _accuracy << endl;
    cout << "속도: " << _speed << endl;
    cout << "------------------------------------" << endl;
}

// getter 함수

string Player::GetJobName() const
{
    return _jobName;
}

string Player::GetNickname() const
{
    return _nickName;
}

int Player::GetLevel() const
{
    return _level;
}

int Player::GetHP() const
{
    return _hp;
}

int Player::GetMP() const
{
    return _mp;
}

int Player::GetPower() const
{
    return _power;
}

int Player::GetDefence() const
{
    return _defence;
}

int Player::GetAccuracy() const
{
    return _accuracy;
}

int Player::GetSpeed() const
{
    return _speed;
}


// setter 함수

void Player::SetNickname(string nickname)
{
    _nickName = nickname;
}


void Player::SetHP(int HP)
{
    _hp = HP;
}

void Player::SetMP(int MP)
{
    _mp = MP;
}

void Player::SetPower(int power)
{
    _power = power;
}

void Player::SetDefence(int defence)
{
    _defence = defence;
}

void Player::SetAccuracy(int accuracy)
{
    _accuracy = accuracy;
}

void Player::SetSpeed(int speed)
{
    _speed = speed;
}
