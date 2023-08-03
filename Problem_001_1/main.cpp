#include "sword.h"

int main()
{
	Sword UserSword("Traveler's Sword", 30, 0.5, 98.4);
	Sword UserShortsword("Traveler's Shortsword", 10, 0.4, 40.6);
	Sword ShikoSword("Shiko's Sword", 100, 0.9, 150.0);
	Sword ShikoShortsword("Shiko's Shortsword", 75, 1.0, 75.2);

	UserSword.display();
	UserShortsword.display();
	ShikoSword.display();
	ShikoShortsword.display();

	return 0;
}