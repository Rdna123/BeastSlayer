#include "PlayerClass.h"

Player::Player(int a, int b, int c)
{
	Health = a;
	Attack = b;
	Experience = c;
};
void Player::PlayerStats()
{
	std::cout << "Health: " << Health << "Attack: " << Attack << "Experience: " << Experience << std::endl;
};