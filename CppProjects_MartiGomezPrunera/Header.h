#include <iostream>
#include <string>
#include <ctime>

//Enumeracion fuerte
enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};

class Zombie; //Forward Declaration
class Player
{
public:
	Weapon weapon;
	float precision;
	int life;

	//Constructor prediseñado
	Player() :weapon(static_cast <Weapon>(rand() % static_cast<int>(Weapon::MAX))),
		precision(rand() % 10 / 10.f),
		life(100) {};

	void attack(Zombie &Z);
	bool isAlive()
	{
			return life > 0;
	}
};


class Zombie
{
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	//Contructor prediseñado
	Zombie() :distanceToPlayer(20 + rand() % (200 - 20)),
			  speed(((float)rand()) / (float)20), 
			  damage(((float)rand()) / (float)20), life(100) {};


	void attack(Player &P)
	{
		if (distanceToPlayer==0)
		{
			P.life = P.life - damage;
		}
		else
		{
			distanceToPlayer = distanceToPlayer - 1;
		}

	}
	bool isAlive()
	{
		return life > 0;
	}
};

void Player::attack(Zombie &Z)
{
	/*int damage;
	switch (weapon)
	{
	case Weapon::FISTS:
		damage = 0.0 * precision;
		break;
	case Weapon::GUN:
		damage = 1.0 * precision;
		break;
	case Weapon::SHOTGUN:
		damage = 2.0 * precision;
		break;
	case Weapon::REVOLVER:
		damage = 3.0 * precision;
		break;
	case Weapon::SNIPER:
		damage = 4.0 * precision;
		break;
	case Weapon::MACHINE_GUN:
		damage = 5.0 * precision;
		break;
	default:
		break;
	}
	Z.life = Z.life - damage;*/  //Poco eficiente

	Z.life -= static_cast<int>(static_cast<int>(weapon) * precision);	//Muy eficiente


}


