#pragma once
#include "MagicalCaster.h"

class Wizard: public MagicalCaster{
    public:
        Wizard(string n,int h, int m,int l, int i):MagicalCaster(n,h,m,l,i),GameCharacter(n,h,m,l){}
                string getName() override{return name;}

        void useSpecialAbility() override;
        void attack() override{}
        void defend() override{}
        string getCharacterType() override{return "Wizard";}
};