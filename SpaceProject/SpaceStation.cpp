#include <iostream>
#include <windows.h>
#include <conio.h>
#include < stdlib.h >
#include "SpaceStation.h"
#include<random>


using namespace std;

SpaceStation::SpaceStation(int x, int y)
{
    this->x = x;
    this->y = y;
}
void SpaceStation::flieg() {};

void SpaceStation::draw() {
    if (destroy == false) {}
    else {
        gotoXY(x, y);cout << "__      ____" << endl;
        gotoXY(x, y + 1);cout << "  SpaceStation " << endl;
        gotoXY(x,y+2);cout << " ____________ " << endl;
        /*if (x > 80) x = 0;
        if (x < 0) x = 40;*/
    }
};

void SpaceStation::erase() {};
void SpaceStation::walk() {};
int SpaceStation::getx() {
    return x;
}
int SpaceStation::gety() {
    return y;
}