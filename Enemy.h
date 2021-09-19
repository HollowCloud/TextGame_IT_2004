#ifndef IT_2004GAME_ENEMY_H
#define IT_2004GAME_ENEMY_H



#include <iostream>
using namespace std;
#include <string>



class Vrag { // class for enemy

public: // create functions
    Vrag();

    int getHp() const;

    void setHp(int hp);

    int getAtk() const;

    void setAtk(int atk);

private:
    string name; // private stats
    int HP;
    int maxHP;
    int Atk;
    int exp;
    int level;
    int gold;

};


#endif //IT_2004GAME_VRAG_H