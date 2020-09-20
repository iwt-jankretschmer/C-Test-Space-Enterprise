#include <iostream>
#include <windows.h>
#include "SpaceShip.h"
using namespace std;

 void SpaceShip::setEnergyLevel(int) {
     cout << "Set the Energy Level" << endl;
     cin>> Energy;
	
}

 void SpaceShip::setCrewMember(int)
 {
     cout << "How many Crew member do you have on board?" << endl;
     cin >> CrewMembers;
 }

 void SpaceShip::EnergyConsumtion() {
	 Energy--;

 }
 void SpaceShip::killedCrewMember(int)
 {
     CrewMembers--;
 }
 void SpaceShip::getEnergyLevel()
{
     cout << "The Current Energy Level is:" << Energy;
}
