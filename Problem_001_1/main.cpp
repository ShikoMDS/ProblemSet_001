/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand

(c) 2023 Media Design School

File Name : main.cpp
Usage : Entry point for Problem 1 of Problem Set 1. 
Description : This program creates sword instances by taking in parameters
	for both base and sub-classes, then calls the display function to print
	its properties.
Author : Shikomisen (Ayoub Ahmad)
Mail : ayoub.ahmad@mds.ac.nz
**************************************************************************/

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