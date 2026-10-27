#include "Enemy.h"
#include<iostream>
using namespace std;

//コンストラクタ
Enemy::Enemy(int value) : hp(value){}

//ダメージを与える
void Enemy::Damage(int damage)
{
	hp -= damage;
}

//HP取得
int Enemy::GetHp() const
{
	return hp;
}

//HP表示
void Enemy::ShowHp() const
{
	cout << "HP:" << hp << endl;
}
