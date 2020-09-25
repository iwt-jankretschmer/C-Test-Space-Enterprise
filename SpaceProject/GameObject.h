#pragma once
#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;
class GameObject
{
protected:
    int x;
    int y;
    void gotoXY(int x, int y);
public:
    void flieg() = 0;
    void moving(int dx, int dy);
    void draw() = 0;
    void undraw() = 0;

};