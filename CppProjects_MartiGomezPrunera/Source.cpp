#include <iostream>
#include <string>
#include <ctime>
#include "Header.h"

int main()
{
	srand(static_cast<unsigned> (time(nullptr)));
	bool zombiesAreAlive;
	Player p1;
	Zombie z1;
	Zombie a_zombies[10];

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