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
    virtual void flieg() = 0;
    virtual void moving(int dx, int dy);
    virtual void draw() = 0;
    virtual void undraw() = 0;

};