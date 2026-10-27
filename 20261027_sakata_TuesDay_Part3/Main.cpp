#include "Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include <ctime>
using namespace std;

//定数
const int HP_MAX = 70;
const int HP_MIN = 30;
const int INDEX = 3;
const int DAMAGE_MIN = 20;
const int DAMAGE_MAX = 90;
int main(void)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	vector<Enemy> enemies;

	for (int i = 0; i < INDEX; i++)
	{
		int value = rand() % HP_MAX + HP_MIN;
		enemies.push_back(Enemy(value));
	}
	//HP表示
	for (const Enemy& enemy : enemies);
	{
		enemy.ShowHp();
	}

	cout << "攻撃する敵を選択してください。" << endl;

	int choice;
	cin >> choice;
	int damage = rand() % HP_MAX + HP_MIN;
	cout << "与えたダメージ:" << damage << endl;

	enemies[choice - 1].Damage(damage);

	cout << "ダメージの後のHP" << endl;

	int i = 0;
	for (Enemy& Enemy : enemies)
	{
		if (enemies[i].GetHp() <= 0)
		{
			enemies.erase(enemies.begin() + i);
		}

		i++;
	}

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	return 0;
}
	