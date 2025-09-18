#include "Wizard.h"

void Wizard::useSpecialAbility(){
    cout << Wizard::getCharacterType() << " is using special ability: Astral Convergence using 10 mana" << endl;
    Wizard::mana -= 10;
}
