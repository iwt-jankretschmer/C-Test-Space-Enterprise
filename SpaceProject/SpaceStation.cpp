#include <iostream>
#include <windows.h>
#include <conio.h>
#include < stdlib.h >
#include "SpaceShip.h"
#include<random>


using namespace std;

SpaceShip::SpaceShip(int x, int y)
{
    this->x = rand()%100;
    this->y = rand()%80;
}