// SpaceProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>///WIN-API
#include <conio.h>///for kbhit and getch
#include <random>
#include < stdlib.h >
#include "SpaceShip.h"
#include "SaveCapsule.h"
#include "GameObject.h"


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;


int main()
{
    /*bool hello = false;*/
    /*int Mitglieder=0;*/
    SpaceShip r(5,3);
    SpaceShip dummy(9, 9);
    SaveCapsule Marvin(r.getx()+6,r.gety());
    int power=0;
    int crew=0;
    while (1) {
        
        //draw
        r.draw();
        
        dummy.draw();
        ///Sleep
        Sleep(100);
        //Objekt löschen
        r.erase();
        dummy.erase();
       
        /*if (rand() % 100 > 50) { hello = true; }*/
       
        //position ändern
        r.flieg();
        dummy.flieg();
        
        /*if (r.Energy== 0) {
            system("CLS");
            cout << "You have no Fuel left! Luckily you know how to get out of this shit so you kill one Crew Member" << endl;
            r.setEnergyLevel(power);
            r.CrewMembers--;
            cout << "You have " << r.CrewMembers << " Crew Member left" << endl;
        }*/

        

        //Benutzer interaktion
        if (_kbhit())
        {
            switch (_getch())
            {
                
            case 'q':
                cout << "Sry but thats it" << endl;
                r.destroy = true;
                r.erase();
                while (1) {
                Marvin.draw();
               /* Marvin.flieg();*/
                Marvin.walk();
               
                Marvin.erase();
                
                }
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
