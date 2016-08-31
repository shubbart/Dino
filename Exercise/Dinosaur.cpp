#include <iostream>
#include "DinoAttack.h"
#include <ctime> 

using std::string;

int randRange(int start, int end)
{
	srand(time(NULL));
	return rand() % (end - start + 1) + start;
}



Dinosaur createDino()
{
	Dinosaur dino;
	dino.name = "DEFAULT";

	char tempName[80];

	printf("Name the dinosaur: \n");
	std::cin >> dino.name;
	printf("How much health does it have: \n");
	scanf_s("%d", &dino.health);
	printf("How strong is it: \n");
	scanf_s("%d", &dino.str);

	return dino;
}


Player createPlayer()
{
	Player player;
	int Pweapon;

	printf("Select your weapon: 1: Bow and Arrow 2: Sword and Shield 3: Battle Axe: \n");
	scanf_s("%d,", &Pweapon);

	if (Pweapon == 1)
	{
		player.weapon = 5 + randRange(1, 10);
	}

	if (Pweapon == 2)
	{
		player.weapon = 10;
		player.health = 150;
	}

	if (Pweapon == 3)
	{
		player.weapon = 15;
	}

	return player;
}

void main()
{
	Player player = createPlayer();
	Dinosaur dino1 = createDino();

	printf("Dinosaur created: \n");
	printf("Name: %s \nHealth: %d \nStrength: %d \n", dino1.name.c_str(), dino1.health, dino1.str);

	system("pause");

	int attack;
	int playerDamage;
	int dinoDamage;

	while (dino1.health > 0 && player.health > 0)
	{
		printf("Attack the dinosaur by pressing 1 or 2.\n1 = Weapon attack and 2 = Wild attack. \n");
		scanf_s("%d", &attack);

		if (attack < 1 || attack > 2)
		{
			printf("Please input a valid attack.\n\n");
		}

		if (attack == 1)
		{
			playerDamage = (randRange(0, 15) + player.weapon);
			dinoDamage = (randRange(0, 10) + dino1.str);

			dino1.health = dino1.health - playerDamage;
			player.health = player.health - dinoDamage;

			printf("Player dealt %d damage!\n", playerDamage);
			printf("%s's health: %d\n", dino1.name.c_str(), dino1.health);
			printf("%s dealt %d damage!\n", dino1.name.c_str(), dinoDamage);
			printf("Player's health: %d\n\n", player.health);
		}

		else if (attack == 2)
		{
			playerDamage = (randRange(0, 60) + player.weapon);
			dinoDamage = (randRange(15, 40) + dino1.str);

			dino1.health = dino1.health - playerDamage;
			player.health = player.health - dinoDamage;

			printf("Player dealt %d damage!\n", playerDamage);
			printf("%s's health: %d\n", dino1.name.c_str(), dino1.health);
			printf("%s dealt %d damage!\n", dino1.name.c_str(), dinoDamage);
			printf("Player's health: %d\n\n", player.health);
		}

		if (player.health <= 50)
		{
			int healing;
			healing = randRange(0, 15);
			player.health = player.health + healing;
			printf("Player regained %d health!\n", healing);
		}

		if (dino1.health <= 50)
		{
			dino1.str = dino1.str + 5;
			printf("%s is in a rage! Attack has increased!\n", dino1.name.c_str());
		}

		if (player.health <= 0)
		{
			printf("You have died!\n");
			system("pause");
		}

		if (dino1.health <= 0)
		{
			printf("The dinosaur has died! You win!\n");
			system("pause");
		}
	}

}