#pragma once
#include "Wizard.h"

class Necromancer:public Wizard{
    protected:
        int souls;
    public:
        Necromancer(string n, int h,int m,int l, int i,int s): Wizard(n,h,m,l,i),souls(s),GameCharacter(n,h,m,l){}
        string getName() override{return name;}
        void attack() override{}
        void defend() override{}
        string getCharacterType() override { return "Necromancer"; }
        void useSpecialAbility() override;
};