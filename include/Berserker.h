#pragma once
#include "Warrior.h"

class Berserker:public Warrior{
    protected:
        int Fury;
    public:
        Berserker(string n, int h, int m, int l,int s, int H, int F): Warrior(n,h,m,l,s,H),Fury(F),GameCharacter(n,h,m,l){}
        void attack() override{}
        void defend() override{}
        string getCharacterType() override{return "Berserker";}
        string getName() override{return name;}
        void useSpecialAbility() override;
};