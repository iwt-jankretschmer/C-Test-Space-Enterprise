#include <iostream>
#include <windows.h>
#include <conio.h>
#include "GameObject.h"

#include <string>

using namespace std;

class SpaceStation : public GameObject
{

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