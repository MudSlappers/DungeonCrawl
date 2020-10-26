

#include <iostream>


using namespace std;

struct Hero
{
	string name;
	int hp = 100;
	int strength = 10;
	int currPos[2] = {0, 0};
	int prePos[15][15];
};



int getHP(Hero h);
void setHP(Hero h, int x);

int getStrength(Hero h);
void setStrength(Hero h, int x);

int getX();
int getY();

void setPos(int x, int y);
void printCurrPos();







