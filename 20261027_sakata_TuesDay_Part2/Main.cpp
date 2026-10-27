#include "Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include <ctime>
using namespace std;

//’è”
const int HP_MAX = 70;
const int HP_MIN = 30;
const int INDEX = 3;
int main(void)
{

	/*Enemy enemy1(100);
	Enemy enemy2(200);*
	*///enemy1.ShowStatus();
	//enemy2.ShowStatus();
	//—”‚Ì‰Šú‰»
	srand(unsigned int(time(NULL)));
	vector<Enemy> enemies;

	for (int i = 0; i < INDEX; i++)
	{
		int num = rand() % HP_MAX + HP_MIN;
		enemies.push_back(Enemy(num));
	}
	//enemies.push_back(Enemy(100));
	//enemies.push_back(Enemy(200));
	//enemies.push_back(Enemy(300));
	//enemies.push_back(Enemy(80));
	//enemies.push_back(Enemy(250));

	//“o˜^‚µ‚½“à—e‚ğŒ©‚Ä‚İ‚Ü‚µ‚å‚¤
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	
	enemies.erase(enemies.begin() + 0);

	cout << "1‘Ìíœ‚µ‚Ü‚µ‚½" << endl;
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Ì”‚Í" << enemies.size() << endl;

	return 0;
}