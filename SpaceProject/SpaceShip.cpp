#include <iostream>
#include <windows.h>
#include <conio.h>
#include < stdlib.h >
#include "SpaceShip.h"

using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

void SpaceShip::gotoXY(int x, int y)
{
    COORD coord = { x,y };
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, coord);
}

SpaceShip::SpaceShip(int x, int y)
{
    this->x = x;
    this->y = y;
}
int SpaceShip::getx() {
    return x;
}
int SpaceShip::gety() {
    return y;
}
 void SpaceShip::flieg()
 {
     x++;
     if (x > 40) { x = 0;}
 }
 void SpaceShip::draw()
 { 
     if(destroy == true){ }
     else{
     gotoXY(x, y);cout << "==     0" << endl;
     gotoXY(x, y + 1);cout << "  \\\_// " << endl;
     if (x > 80) x = 0;
     if (x < 0) x = 40;
     }
 }
 void SpaceShip::erase()
 {
     if (destroy == true) {}
     else {
         gotoXY(x, y);cout << "        " << endl;
         gotoXY(x, y + 1);cout << "      " << endl;
     }
 }
 void SpaceShip::hit() {
     
 }
 

 void SpaceShip::getEnergyLevel()
{
     cout << "The Current Energy Level is:" << Energy;
}

 void SpaceShip::setEnergyLevel(int) {
     cout << "Set the Energy Level" << endl;
     cin >> Energy;

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
