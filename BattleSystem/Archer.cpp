#include <iostream>

#include "Archer.h"
#include "Monster.h"

using namespace std;

Archer::Archer(string nickName)
	: Player(nickName)
{
	cout << "궁수로 전직하였습니다." << endl;
	_jobName = "궁수";
	_accuracy = 80;
}

void Archer::Attack()
{
	cout << "활을 쏜다" << endl;
}

void Archer::Attack(Monster* monster)
{
	// 플레이어의 공격력-몬스터의 방어력을 계산하여 데미지로 정의합니다.
	// 계산된 데미지가 0 이하일 경우, 데미지를 1로 정의합니다.
	int playerDamage = _power - monster->GetDefence();
	if (playerDamage <= 0)
		playerDamage = 1;

	// 공격 문장을 출력합니다.
	// - 궁수: 계산된 데미지/3으로 3회 공격 (소수점 생략)
	// - 궁수와 도적의 경우, 3과 5로 나눈 결과가 0이라면 1로 정의합니다.
	playerDamage /= 3;
	if (playerDamage <= 0)
		playerDamage = 1;

	// 몬스터의 setHP를 호출하여 몬스터의 HP-데미지를 계산한 값을 매개변수로 전달합니다.
	// 몬스터의 getHP를 호출 분기문이 실행됩니다.
	// 몬스터가 생존했을 경우 몬스터의 남은 HP 출력
	// 몬스터가 생존하지 못했을 경우 플레이어의 승리 문구 출력
	for (int i = 0; i < 3; ++i)
	{
		cout << "슬라임에게 화살로 " << playerDamage << "의 피해를 입혔다!" << endl;
		monster->SetHP(monster->GetHP() - playerDamage);

		if (monster->GetHP() > 0)
			cout << "몬스터의 남은 체력: " << monster->GetHP() << endl;
		else
		{
			cout << "승리하였습니다." << endl;
			break;
		}
	}
}