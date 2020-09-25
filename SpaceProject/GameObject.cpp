#include "GameObject.h"

void GameObject::gotoXY(int x, int y)
{
    COORD coord = { x,y };
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, coord);
}