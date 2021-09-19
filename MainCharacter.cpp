#include <iostream>
using namespace std;
#include <string>
#include <utility>
#include "MainCharacter.h"
#include "Game.h"

MainChar::MainChar() { // here we get the character him name HP Atk gold exp level and inventory
    name = "Player";
    HP = 100;
    maxHP = 120;
    Atk = 20;
    gold = 0;
    exp = 0;
    level = 0;
    Inventory = "";
}

int MainChar::getHp() const { // getter and setter to HP
    return HP;
}

void MainChar::setHp(int hp) {
    HP = hp;
}

int MainChar::getAtk1() const { // getter to attack
    return Atk;
}


void MainChar::initialize_name(string name) {
    this->name = name;
}
void MainChar::StartName(){
    cout << "Enter Your Name: " << endl;
    cin >> name;
    initialize_name(name);
}

void MainChar::gameExp() {
    gameExp1();
}

/*void MainChar::gameGold() {
    gameGold1();
}*/

void MainChar::showStats(){ // function for stats, with this function we can see the name hp atk gold and level
    cout << "" << endl;

    string string1= this->name;

    cout << "Name: " << string1 << endl;

    cout << "HP: " << HP << endl;

    cout << "Atk: " << Atk << endl;

    cout << "Gold: ";
    gameGold1();

    cout << "Level: ";
    gameExp1();

    cout << endl;

}


void MainChar::Character_Menu() { // its menu
    MainChar c;
    Game game;

    int n;
    cout << endl;
    cout << "1. Explore" << endl;
    cout << "2. Have a Rest" << endl;
    cout << "3. Show Personal Stats" << endl;
    cout << "4. Back to Menu" << endl;

    cin >> n;

    while(true){
        if(n == 1){
            game.Explore_Area();
            Character_Menu();
            break;
        } else if(n == 2){
            game.Rest();
            Character_Menu();
            break;
        } else if(n == 3){
            showStats();
            Character_Menu();
            break;
        } else if(n == 4){
            Game::MainMenu();
            break;
        }
    }
}

int MainChar::getGold() const { // gettet and setter for GOLD
    return gold;
}

void MainChar::setGold(int gold) {
    MainChar::gold = gold;
}

int MainChar::getExp() const { // getter and setter to EXP
    return exp;
}

void MainChar::setExp(int exp) {
    MainChar::exp = exp;
}

const string &MainChar::getInventory() const { // getter and setter to inventory
    return Inventory;
}

void MainChar::setInventory(const string &inventory) {
    Inventory = inventory;
}




