#include <iostream>
#include "hero.h"

using namespace std;

struct Map
{
    enum Room{EMPTY, POTION, TRAP, ENEMY, ENTRANCE, EXIT};
    int map [15][15];
};

void fillMap();

int getRoom(int x, int y);






