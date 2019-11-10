#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

struct Gamer
{
	int choice;
	int changebul;
	int win;
};
void Behavior(Gamer &a,int b) {
	a.changebul = b;
	a.win = 0;
	a.choice = 0;
}
void makeChoice1(Gamer &a, int doors) {
	int num = 0;
	num= (rand()%doors)+1;
	a.choice = num;
}
int choice(int door, Gamer &b, int dooropened) {
	int newchoice = 0;
	bool ok = false;
	while (!ok) {
		newchoice = (rand()%door)+1;
		if (newchoice != b.choice && newchoice != dooropened) {
			ok = true;
		}
	}
	return newchoice;
}

struct Leader
{
	int car;
	int empty;
	int empty2;
};
void hideCar(Leader &a,int doors) {
	a.car = (rand()%doors)+1;
	if (a.car == 1) {
		a.empty = 2;
		a.empty2 = 3;
	}
	else if (a.car == 2) {
		a.empty = 1;
		a.empty2 = 3;
	}
	else if (a.car == 3) {
		a.empty = 1;
		a.empty2 = 2;
	}
}
int OpenDoor( Leader &b,Gamer &a, int &door) {
	int door_is_opened = 0;
	if ((b.empty2 != a.choice) && (b.empty != a.choice)) {
		int choice = b.car;
		while (choice == b.car) {
			choice = (rand()%door)+1;
		}
		if (choice == b.empty) {
			door_is_opened = b.empty;
			b.empty = 0;
		}
		else if (choice == b.empty2) {
			door_is_opened = b.empty;
			b.empty2 = 0;
		}
	}
	else if (b.empty != a.choice) {
		door_is_opened = b.empty;
		b.empty = 0;
	}
	else if (b.empty2 != a.choice) {
		door_is_opened = b.empty2;
		b.empty2 = 0;
	}
	return door_is_opened;
}


void Second_choice_0f_Player(Gamer& a, Leader& b, int door, int dooropened) {
	if (a.changebul == 1) {

	}
	else if (a.changebul == 2) {
		int renewchoice = choice(door, a, dooropened);
		a.choice = renewchoice;
	}
	else if (a.changebul == 3) {
		bool change = (rand()%door)+1 ;
		if (change) {
			int renewchoice = choice(door, a, dooropened);
			a.choice = renewchoice;
		}
	}
}
void Finish_game(Leader &a, Gamer &b) {
	if (a.car == b.choice) {
		b.win++;
	}

}
void Game_start( Leader &a, Gamer &b) {
	int door = 3;
	int door_is_opend = 0;
	hideCar(a,door);
	makeChoice1(b,door);
	door_is_opend = OpenDoor(a,b, door);
	Second_choice_0f_Player(b, a, door, door_is_opend);
	Finish_game(a, b);
}
int main()
{
	srand(time(NULL));
	Leader Frank;
	 Gamer John;
	 //Behavior non changeble
	 Behavior(John,1);
	Gamer Jack;
	// Behavior changeble
	Behavior(Jack,2);
	 Gamer Jill;
	 //Behavior random changeble
	Behavior(Jill,3);
	for (int i = 0; i < 1000; i++)
	{
		Game_start(Frank, John);
		Game_start(Frank, Jack);
		Game_start(Frank, Jill);
	}
	double John_wini = ((John.win * 100.0) / 1000.0);
	double Jack_wini = ((Jack.win * 100.0) / 1000.0);
	double Jill_wini = ((Jill.win * 100.0) / 1000.0);
	cout << "\t Paradocs Monty Holls" << endl << endl;
	cout << "John doesn`t change his choise at second time" << endl;
	cout<<"John - "<<John_wini<<" % of winning "<<endl;
	cout << "Jack change his choise at second time always" << endl;
	cout << "Jack - " <<Jack_wini << " % of winning " << endl;
	cout << "Jill change his choise at second time randomly" << endl;
    cout<<"Jill - "<<Jill_wini << " % of winning " <<endl;


	return 0;
}
