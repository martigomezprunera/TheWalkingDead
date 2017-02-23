#include <iostream>
#include <string>
#include <ctime>
#include "Header.h"

int main()
{
	srand(static_cast<unsigned> (time(nullptr)));
	bool zombiesAreAlive;
	Player* p1 = new Player();
	Zombie* z1 = new Zombie();
	Zombie* z2 = new Zombie();
	Zombie* z3 = new Zombie();
	Zombie* z4 = new Zombie();
	Zombie* z5 = new Zombie();
	Zombie* z6 = new Zombie();
	Zombie* z7 = new Zombie();
	Zombie* z8 = new Zombie();
	Zombie* z9 = new Zombie();
	Zombie* z10 = new Zombie();
	Zombie* a_zombies[10] = {z1, z2, z3, z4, z5, z6, z7, z8, z9, z10};

	/*if (z1->isAlive==false && z2->isAlive == false && z3->isAlive == false && z4->isAlive == false && z5->isAlive == false && z6->isAlive == false && z7->isAlive == false && z8->isAlive == false && z9->isAlive == false && z10->isAlive == false)
	{
		zombiesAreAlive = false;
	}*/

	do
	{

		for (int i = 0; i<sizeof(a_zombies); i++)
		{
			if (a_zombies[i]->isAlive==true)
			{
				a_zombies[i]->attack;
				zombiesAreAlive = true;
			}
			else
			{
				zombiesAreAlive = false;
			}
		}


	} while (p1->isAlive==true && zombiesAreAlive==false);
}