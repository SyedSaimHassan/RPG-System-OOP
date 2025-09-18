#include "Warrior.h"

void Warrior::useSpecialAbility(){
    cout << PhysicalFighter::getName() << " is using ability: Oathbreaker's Bane using 10 Honor" << endl;
    Warrior::Honor -= 10;
}
