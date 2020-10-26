

#include<iostream>
#include<cstdlib>
#include<ctime>
#include "map.h"

using namespace std;

Map m;

void fillMap()
{
	srand(time(NULL));
	
	for (int x = 0; x < 15; x++){
		for (int y = 0; y < 15; y++){
			m.map[x][y] = rand() % 4;
		}
	}
	
	m.map[0][0] = 4;
	m.map[14][14] = 5;
	
	
	for (int x = 0; x < 15; x++){
		for (int y = 0; y < 15; y++){
			cout << m.map[x][y] << ", ";
		}
	}
	
}

int getRoom(int x, int y)
{
    int dope = 10;
    
    if(x >= 0 & x < 15 & y >= 0 & y < 15)
	    return m.map[x][y];
	else
	    cout << "Dope!" << endl;
	    return dope;
}











