#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "Monster.h"
using namespace std;


int main()
{
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;
    Monster monster("슬라임");

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << endl;
    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) 
    {
        case 1:
            player = new Warrior(nickname);
            break;
        case 2:
            player = new Magician(nickname);
            break;
        case 3:
            player = new Thief(nickname);
            break;
        case 4:
            player = new Archer(nickname);
            break;
        default:
            cout << "잘못된 입력입니다." << endl;
            return 1;
    }

    cout << endl;

    player->PrintPlayerStatus();

    cout << endl;


    cout << "슬라임이 등장했습니다!" << endl;
    cout << endl;
    while (true)
    {
        player->Attack(&monster);
        if (monster.GetHP() <= 0)
            break;

        monster.Attack(player);
        if(player->GetHP() <= 0)
            break;
    }
    cout << endl;
    cout << "전투가 종료됩니다." << endl;

    if (player != nullptr)
        delete player;

    return 0;
}