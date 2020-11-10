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
    /*virtual void moving()=0;*/
    virtual void draw()=0;
    virtual void erase()=0;
    virtual void walk()=0;
    auto getx() { return x; };
    auto gety() { return y; };

};