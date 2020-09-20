// SpaceProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>///WIN-API
#include <conio.h>///for kbhit and getch
#include <random>
#include < stdlib.h >
#include "SpaceShip.h"


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;

void gotoXY(int x, int y)
{
    COORD coord = { x,y };
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, coord);
}
int main()
{
    bool hello = false;
    int y = 5;
    int x = 40;
    int power = 0;
    int Mitglieder=0;
    SpaceShip Schrottlaube;
    Schrottlaube.setEnergyLevel(power);
    Schrottlaube.setCrewMember(Mitglieder);
    while (1) {
        //draw
        if (rand() % 100 > 50) { hello = true; }
        gotoXY(x, y);cout << "==     0" << endl;
        gotoXY(x, y + 1);cout << "  \\\_// " << endl;
        gotoXY(x, y + 2); if (hello) { cout << "Beam Me Up Scotty " << endl; }
        gotoXY(2, 25); Schrottlaube.getEnergyLevel();
        for (long i = 0; i <= 10000000; i++);

        gotoXY(x, y);cout << "        " << endl;
        gotoXY(x, y + 1);cout << "      " << endl;
        //position ändern
        x++;
      
        Schrottlaube.EnergyConsumtion();
        if (Schrottlaube.Energy== 0) {
            system("CLS");
            cout << "You have no Fuel left! Luckily you know how to get out of this shit so you kill one Crew Member" << endl;
            Schrottlaube.setEnergyLevel(power);
            Schrottlaube.CrewMembers--;
            cout << "You have " << Schrottlaube.CrewMembers << " Crew Member left" << endl;
        }

        
        if (x > 80) x = 0;
        if (x < 0) x = 40;
        

        //Benutzer interaktion
        if (_kbhit())
        {
            switch (_getch()) {
            case 'q': cout << "Tschau" << endl;
                exit(0);
            case KEY_UP: y--;
                break;
            case KEY_DOWN: y++;
                break;
            case KEY_RIGHT: x++;
                break;
            case KEY_LEFT: x--;

            }
        }
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
