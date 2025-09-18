#pragma once
#include <string>
#include <iostream>
#include<vector>
using namespace std;

class GameCharacter
{
protected:
  string name;
  int health;
  int mana;
  int level;
public:
  GameCharacter(string n,int h,int m,int l): name (n) , health (h) , mana (m) , level (l) 
  {
    cout << "The match has started" << endl;
  }
  virtual void attack() = 0;
  virtual void defend() = 0;
  virtual void useSpecialAbility() = 0;
  virtual string getCharacterType() = 0;
  virtual string getName()=0;
  GameCharacter(){}

  virtual ~GameCharacter() {}
  virtual void displayStats()
  {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Mana: " << mana << endl;
    cout << "Level: " << level << endl;
  }
};