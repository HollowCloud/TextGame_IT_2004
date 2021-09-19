#include <iostream>
#include "Enemy.h"

Vrag::Vrag() {
    name = "Enemy"; // give stats for our enemy
    HP = 100;
    Atk = 20;
    gold = 50;
    exp = 100;
}

int Vrag::getAtk() const { // getter and setter
    return Atk;
}

void Vrag::setAtk(int atk) { // getter and setter
    Atk = atk;
}

int Vrag::getHp() const { // getter and setter
    return HP;
}

void Vrag::setHp(int hp) { // getter and setter
    HP = hp;
}


