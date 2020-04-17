#pragma once
#include <iostream>
#include <string>
#include <random> 

class Player
{
public:
	int Health;
	int Attack;
	int Experience;
	Player(int a, int b, int c);
	void PlayerStats();
};