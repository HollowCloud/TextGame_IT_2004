using namespace std;
#include <string>
#include "MainCharacter.h"
#include <iostream>

#ifndef IT_2004GAME_GAME_H
#define IT_2004GAME_GAME_H

class Game {
    // HERE WE ARE CREATING A PUBLIC ATTRIBUTES/FUNCTIONS FOR GAME CLASS
    // IT IS ALL TO USE IT IN GAME.CPP FILE WHERE WE HAVE OUR MAIN MENU
public:
    static void MainMenu();
    void Explore_Area();
    void Rest();

    int getInventory() const; //GETTER FOR INVENTORY

    void setInventory(int inventory); //SETTER FOR INVENTORY

    int Inventory; // INVENTORY ITSELF(WE WILL CHOOSE THE ITEMS)

    string weapon; //MAIN WEAPON OF MC

    string passive; //SECONDARY EQUIPMENTS OF MC

    string passive1;

    int choice;

    const string EnemyWeapon = "Shield"; //WE HAVE IDENTIFIED WEAPON OF ENEMY IN ADVANCE


private:

    MainChar mainChar;

};


#endif //IT_2004GAME_GAME_H
