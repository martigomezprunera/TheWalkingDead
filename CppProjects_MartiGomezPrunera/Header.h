#include <iostream>
#include <string>
#include <ctime>

//Enumeracion fuerte
enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Player
{
	float precision;
	int life;
};

class Zombie
{
	int distanceToPlayer;
	float speed;
	float damage;
	int life = 100;
};