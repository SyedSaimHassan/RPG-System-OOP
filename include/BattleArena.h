#pragma once

#include "GameCharacter.h"

class BattleArena{
    private:
        vector<GameCharacter*> characters;
    public:
        void addCharacter(GameCharacter* character);
        void startBattle();
        void healAll();
        ~BattleArena(){}
};