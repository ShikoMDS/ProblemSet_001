#include <iostream>
#include "spell.h"
#include "circle.h"
#include "square.h"

int main()
{
    SpellAreaEffect* CircleSpell1 = new CircleAreaEffect(5.0);
    SpellAreaEffect* SquareSpell1 = new SquareAreaEffect(4.0);

    std::cout << "Circle Area: " << CircleSpell1->calculateArea() << std::endl;
    std::cout << "Square Area: " << SquareSpell1->calculateArea() << std::endl;

    delete CircleSpell1;
    delete SquareSpell1;

    return 0;
}
