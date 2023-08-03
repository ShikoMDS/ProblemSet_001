#include "character.h"

int main()
{
    Character Wizard("Wizard", "Staff", 4);
    Character Rogue("Rogue", "Dagger", 5);
    Character Archer("Archer", "Bow", 3);
    Character Soldier("Soldier", "Sword", 6);

    Wizard.displayWeapon();
    Rogue.displayWeapon();
    Archer.displayWeapon();
    Soldier.displayWeapon();

    return 0;
}
