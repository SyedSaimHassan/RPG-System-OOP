#include "Berserker.h"

void Berserker::useSpecialAbility(){
    cout << Berserker::getCharacterType() << " is using special ability: Furybound Rampage using 10 Fury" << endl;
    Berserker::Fury -= 10;
}