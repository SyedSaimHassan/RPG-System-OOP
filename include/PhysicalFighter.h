#pragma once
#include "GameCharacter.h"

class PhysicalFighter:public virtual GameCharacter{
    protected:
        int strength;
    public:
        PhysicalFighter(string n, int h , int m , int l , int s ): GameCharacter (n , h , m , l ) , strength ( s ){
            cout << "Congrats, you have a physical fighter" << endl;
        }
                string getName() override{return name;}

        void attack() override;
        void defend() override{}
        void useSpecialAbility() override{}
        string getCharacterType() override{return "Physical Fighter";}

};