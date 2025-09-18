#pragma once
#include "PhysicalFighter.h"
#include "MagicalCaster.h"

class Paladin:public PhysicalFighter, public MagicalCaster{
    protected:
        int HolyPower;
    public:
        Paladin(string n,int h,int m,int l,int i,int s,int H):PhysicalFighter(n,h,m,l,s),MagicalCaster(n,h,m,l,i),HolyPower(H),GameCharacter(n,h,m,l){}
        void attack() override{}
        void defend() override{}
        string getName() override{return name;}
        string getCharacterType() override{return "Paladin";}
        void useSpecialAbility() override;
};