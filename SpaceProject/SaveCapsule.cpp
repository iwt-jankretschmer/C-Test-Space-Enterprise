#include <iostream>
#include <windows.h>
#include <conio.h>
#include < stdlib.h >
#include<random>
#include "SaveCapsule.h"
#include "SpaceShip.h"
using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


void SaveCapsule::gotoXY(int x, int y)
{
    COORD coord = { x,y };
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, coord);
}

SaveCapsule::SaveCapsule(int x, int y)
{
    this->x = x;
    this->y = y;
}

void SaveCapsule::flieg()
{
    y++;
//    if (x > 40) { x = 0; }
}

void SaveCapsule::draw()
{
    gotoXY(x, y + 1);cout << " Marvin" << endl;
    if (x > 80) x = 0;
    if (x < 0) x = 40;
}
void SaveCapsule::erase()
{
    gotoXY(x, y);cout << "        " << endl;
    gotoXY(x, y + 1);cout << "         " << endl;
}
void SaveCapsule::walk() {
    switch (_getch()) {
    case KEY_UP: y--;
        break;
    case KEY_DOWN: y++;
        break;
    case KEY_RIGHT: x++;
        break;
    case KEY_LEFT: x--;
        break;
    }
}