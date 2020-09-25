#ifndef SpaceShip_H
#define SpaceShip_H
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
 // SpaceShip_H

#include <iostream>
#include <string>

using namespace std;

class SpaceShip
{
private: ///Eigenschaften|| Membervariablen 
	int x;
	int y;
	void gotoXY(int x, int y);
public://Methoden|| Memberfunktionen
	SpaceShip(int x, int y);//Übergabe Constructor
	void flieg();
	void draw();
	 void erase();
	 void walk();
	 void hit();
	 int getx();
	 int gety();
	 bool destroy = false;
//own Classes
	 int Energy;
	int CrewMembers;
	 void setEnergyLevel(int);
	 void setCrewMember(int);
	 void getEnergyLevel();
	 void EnergyConsumtion();
	 void killedCrewMember(int);
};

#endif

