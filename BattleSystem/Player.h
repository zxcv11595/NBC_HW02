#pragma once
#include<string>

class Monster;

using namespace std;

class Player
{
protected:                  
    string  _jobName; 
    string  _nickName;
    int     _level;   
    int     _hp;      
    int     _mp;      
    int     _power;   
    int     _defence; 
    int     _accuracy;
    int     _speed;   

public:
    Player(string nickname);

    virtual void Attack() = 0;
    virtual void Attack(Monster* monster) = 0;
    void PrintPlayerStatus();

    // getter 함수
    string  GetJobName() const;
    string  GetNickname() const;
    int     GetLevel() const;
    int     GetHP() const;
    int     GetMP() const;
    int     GetPower() const;
    int     GetDefence() const;
    int     GetAccuracy() const;
    int     GetSpeed() const;

    // setter 함수
    void    SetNickname(string nickname);
    void    SetHP(int HP);               
    void    SetMP(int MP);               
    void    SetPower(int power);         
    void    SetDefence(int defence);     
    void    SetAccuracy(int accuracy);   
    void    SetSpeed(int speed);         
};

