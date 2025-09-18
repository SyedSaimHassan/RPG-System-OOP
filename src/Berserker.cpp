#include "Berserker.h"

void Berserker::useSpecialAbility(){
    cout << Berserker::getName() << " is using special ability: Furybound Rampage using 10 Fury" << endl;
    Berserker::Fury -= 10;
}