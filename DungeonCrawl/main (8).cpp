#include <iostream>
#include "map.h"

using namespace std;

/*
int move()
{
    int move;
    
    cout << "Where to?" << endl;
    cin >> move;
    
    int x = getX();
    int y = getY();
    
    int temp;
    
    switch (move)
    {
        case (1):
            setPos(x - 1, y);
            temp = getRoom(x - 1, y);
            break;
        case (2):
            setPos(x, y - 1);
            temp = getRoom(x, y - 1);
            break;
        case (3) :
            setPos(x + 1, y);
            temp = getRoom(x + 1, y);
            break;
        case (4) :
            setPos(x, y + 1);
            temp = getRoom(x, y + 1);
            break;
    }
    
    return temp;
}
*/

int main()
{
    Hero h;
    Map m;
    
    string n = "";
    cout << "Enter your hero's name: "<< endl;
    cin >> n;
    h.name = n;
    cout << "The tale of " << h.name << " begins..." << endl;
    cout << "HP: " << h.hp << endl;
    cout << "Strength: " << h.strength << endl;
    
    //fillMap(m);
    
    srand(time(NULL));
	
	for (int x = 0; x < 15; x++){
		for (int y = 0; y < 15; y++){
			m.map[x][y] = rand() % 4;
		}
	}
	
	m.map[0][0] = 4;
	m.map[14][14] = 5;
    
    /*
    for (int x = 0; x < 15; x++){
		for (int y = 0; y < 15; y++){
			cout << m.map[x][y] << ", ";
		}
	}
	*/
	
	cout<<""<<endl;
	
	for (int i = 0; i < 15; i++){
	    for (int j = 0; j < 15; j++){
	        h.prePos[i][j] = 0;
	    }
	}
	
	h.prePos[0][0] = 1;
	
	string empty = " ";
    string trap = "T";
    string player = "H";
    string enemy = "E";
    string potion = "D";
    string unknown = "*";
    string end = "!";
    //string line = "-";
    
	int move;
	int x;
	int y;
	int temp;
	
	while ( h.prePos[14][14] != 1 & h.hp >= 0)
	{
	    for (int y = 0; y < 15; y++){
            for(int x = 0; x < 15; x++){
               // if(h.prePos[x][y] == 0){
               //         cout << unknown;
               // }
                if(h.prePos[x][y] == 0)
                    cout << unknown;
                
                else{
                if(x == h.currPos[0] & y == h.currPos[1])
                        cout << player;
                //else if(h.prePos[x][y] == 0)
                        //cout << unknown;
                else{
                    if(m.map[x][y] == 0 | m.map[x][y] == 4)
                        cout << empty;
                    if(m.map[x][y] == 1)
                        cout << potion;
                    if(m.map[x][y] == 2)
                        cout << trap;                        
                    if(m.map[x][y] == 3)
                        cout << enemy;
                    if(m.map[x][y] == 5)
                        cout << end;
                }
                }
                
            }
            cout << "" << endl;
        }
        cout << "" << endl;
        cout << "West: 1, North: 2, East: 3, South: 4" << endl;
        cin >> move;
    
        x = h.currPos[0];
        y = h.currPos[1];
        
        switch (move)
        {
            case (1):
                if (x <= 14 & x - 1 >= 0){
                    h.currPos[0] = --x;
                    h.prePos[x][y] = 1;
                }
                else {
                    cout << "Invalid move..." << endl;
                }
                break;
            case (2):
                if (y <= 14 & y - 1 >= 0){
                    h.currPos[1] = --y;
                    h.prePos[x][y] = 1;
                }
                else {
                    cout << "Invalid move..." << endl;
                }
                break;
            case (3) :
                if (x + 1 <= 14 & x >= 0){
                    h.currPos[0] = ++x;
                    h.prePos[x][y] = 1;
                }
                else {
                    cout << "Invalid move..." << endl;
                }
                break;
            case (4) :
                if (y + 1<= 14 & y >= 0){
                    h.currPos[1] = ++y;
                    h.prePos[x][y] = 1;
                }
                else {
                    cout << "Invalid move..." << endl;
                }
                break;
        }
        
        cout << ""<< endl;
        cout << ""<< endl;
        cout << ""<< endl;
        cout << ""<< endl;
        cout << ""<< endl;
        
        if (m.map[x][y] == 0){
            cout << "EMPTY" << endl;
        }
        if (m.map[x][y] == 1){
            cout << "POTION" << endl;
            h.hp = h.hp + 10;
            m.map[x][y] = 0;
        }
        if (m.map[x][y] == 2){
            cout << "TRAP" << endl;
            h.hp = h.hp - 10;
        }
        if (m.map[x][y] == 3){
            cout << "ENEMY" << endl;
            h.hp = h.hp - (rand() % 20);
        }
        if (m.map[x][y] == 5){
            cout << "YOU WIN" << endl;
            break;
        }
	    //h.prePos[14][14] = 1;   
	    
	    //cout << "The tale of " << h.name << " begins..." << endl;
        cout << "HP: " << h.hp << endl;
        cout << "Strength: " << h.strength << endl;
	    
	    if(h.hp == 0)
	        cout << "YOU LOSE!" << endl;
	}
	//displayMap();
	
	//move();
	
	//displayMap();
	
	//move();
	
	//displayMap();
	/*
	printCurrPos();
	
	int temp = move();
	printCurrPos();
	cout << temp;
	*/
	
	
}

