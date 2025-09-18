#include "Paladin.h"

void Paladin::useSpecialAbility(){
    cout << Paladin::getName() << " is using special ability: Judgement of light using 10 Holy Power" << endl;
    Paladin::HolyPower -= 10;
}