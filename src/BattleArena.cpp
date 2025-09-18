#include "BattleArena.h"

void BattleArena::addCharacter(GameCharacter* character){
    BattleArena::characters.push_back(character);
}
void BattleArena::healAll(){
    for (auto *chr : BattleArena::characters){
        chr->defend();   
    }
}
void BattleArena::startBattle(){
    int idx = 0;
    while (BattleArena::characters.size()){
        idx += 1;
        if (idx%2 == 0){
            for (auto *chr : BattleArena::characters){
                chr->useSpecialAbility();
            }
        }
        else{
            for (auto *chr : BattleArena::characters){
                chr->useSpecialAbility();
            }
        }
        break;  
    }
}