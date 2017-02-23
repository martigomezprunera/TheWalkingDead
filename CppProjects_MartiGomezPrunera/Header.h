#include <iostream>
#include <string>
#include <ctime>

//Enumeracion fuerte
enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie; //Forward Declaration
class Player
{
public:
	Weapon weapon;
	float precision;
	int life;
	Player();

private:
	void attack(Zombie &Z)
	{
		int damage;
		switch (weapon)
		{
		case Weapon::FISTS:
			damage = 0 * precision;
			break;
		case Weapon::GUN:
			damage = 1 * precision;
			break;
		case Weapon::SHOTGUN:
			damage = 2 * precision;
			break;
		case Weapon::REVOLVER:
			damage = 3 * precision;
			 
			break;
		case Weapon::SNIPER:
			damage = 4 * precision;
			break;
		case Weapon::MACHINE_GUN:
			damage = 5 * precision;
			break;
		default:
			break;
		}
		Z.life = Z.life - damage;
	}
	bool isAlive()
	{

	}
};

Player::Player()
{
}


class Zombie
{
public:
	int disntanceToPlayer;
	float speed;
	float damage;
	int life;
	Zombie();

private:
	void attack(Player &P)
	{

	}
	bool isAlive()
	{

	}
};

Zombie::Zombie()
{
}

