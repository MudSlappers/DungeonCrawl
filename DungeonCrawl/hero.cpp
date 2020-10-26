#include <iostream>
#include "map.h"

using namespace std;

Hero h;

int getHP(Hero h) {return h.hp;}
void setHP(Hero h, int x) 
{
    if (x < 100 & x > 0)
        h.hp = x;
    else
        h.hp = 100;
}

int getStrength(Hero h) {return h.strength;}
void setStrength(Hero h, int x) 
{
    if (x < 100 & x > 0)
        h.strength = x;
    else
        h.strength = 100;
}

int getX() {return h.currPos[0];}
int getY() {return h.currPos[1];}

void setPos(int x, int y)
{
    if (x <= 14 & x >= 0 & y <= 14 & y >= 0){
        h.currPos[0] = x;
        h.currPos[1] = y;
        h.prePos[x][y] = 1;
    }
    else {
        cout << "Invalid move..." << endl;
    }
}

void printCurrPos() { cout << "x: " << h.currPos[0] << ", y: " << h.currPos[1] << endl;}








