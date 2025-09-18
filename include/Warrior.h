#pragma once
#include "PhysicalFighter.h"

class Warrior:public PhysicalFighter{
    protected:
        int Honor;
    public:
        Warrior(string n,int h,int m,int l,int s, int H):PhysicalFighter(n,h,m,l,s),Honor(H),GameCharacter(n,h,m,l){}
                string getName() override{return name;}

        void useSpecialAbility() override;
        void attack() override{}
        void defend() override{}
        string getCharacterType() override{return "Warrior";}
};