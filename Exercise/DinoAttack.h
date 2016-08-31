#pragma once
#include <iostream>
#include <string>

// Created by: Shawn Hubbart <shawn.hubbart@gmail.com> 

// Header files are for declarations.
// Source files are for definitions.

using std::string;

int randRange(int start, int end);

struct Dinosaur
{
	string name;
	int health;
	int str;
};

struct Player
{
	int health = 100;
	int weapon;
};

Dinosaur createDino();

Player createPlayer();