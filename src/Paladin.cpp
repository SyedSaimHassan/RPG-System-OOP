#include "Paladin.h"

void Paladin::useSpecialAbility(){
    cout << Paladin::getCharacterType() << " is using special ability: Judgement of light using 10 Holy Power" << endl;
    Paladin::HolyPower -= 10;
}