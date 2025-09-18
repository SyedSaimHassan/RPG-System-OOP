#include "Necromancer.h"


void Necromancer::useSpecialAbility(){
    cout << Necromancer::getCharacterType() << " is using special ability:Gravecaller's Pact using 10 souls" << endl;
    Necromancer::souls -= 10;
}