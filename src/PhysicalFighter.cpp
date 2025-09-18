#include "PhysicalFighter.h"

void PhysicalFighter::attack()
{
    cout << "The character " << PhysicalFighter::getCharacterType()<< " is attacking with strength:" << strength << endl;
}