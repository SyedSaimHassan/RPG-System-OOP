#pragma once
#include "GameCharacter.h"

class MagicalCaster:public virtual GameCharacter{
    protected:
        int intelligence;
    public:
        MagicalCaster(string n, int h,int m, int l, int i): GameCharacter(n,h,m,l),intelligence(i){
            cout << "Congrats, you have a magical caster" << endl;
        }
        string getName() override{return name;}
        void attack() override;
        void defend() override{}
        void useSpecialAbility() override{}
        string getCharacterType() override{return "Magical Caster";}

};