#include <iostream>
#include <string>

using namespace std;


	class SaveCapsule
	{
	private: ///Eigenschaften|| Membervariablen 
		int x;
		int y;			
		void gotoXY(int x, int y);
	public://Methoden|| Memberfunktionen
		SaveCapsule(int x, int y);//Übergabe Constructor
		void flieg();
		void draw();
		void erase();
		void walk();
		void hit();
		int getx();
		void killedCrewMember(int);
		void landingChecker();
	};