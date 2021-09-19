#include <iostream>
using namespace std;
#include "Game.h"
#include "Enemy.h"
#include <string>

using namespace std;

void Game::MainMenu() { //THIS IS OUR MAINMENU WHERE YOU CAN START OR LEAVE
    MainChar mc;
    Game g;
    while (true) { //BASIC LOOP FOR MENU

        cout << "" << endl;
        cout << "1. Start the game\n";
        cout << "2. Exit\n" << endl;

        int selection;
        cout << "Your Option: "; //MAKING YOUR CHOICE
        cin >> selection;
        if (selection == 1) {
            mc.StartName(); //THIS FUNCTION IS CALLED FOR IDENTIFYING YOUR NAME
            mc.Character_Menu(); //THIS IS RESPONSIBLE FOR OTHER MENU, MY PARTNER WILL EXPLAIN IT
        } else if (selection == 2) { //FOR LEAVING
            break;
        }

    }
}

void Game::Explore_Area() { //EXPLORE, MEANS THAT WE WILL FIND AN ENEMY AND FIGHT/RUN FROM HIM
    Game g;
    MainChar mc;
    Vrag v;

    //THESE ARRAYS ARE FOR PEEKING ITEMS YOU WANT TO HAVE DURING THE FIGHT!!!

    string Invent[3] = { "Sword", "Ring", "Magic boots"};
    string Invent1[3] = { "Katana", "jacket", "pen"};
    string Invent2[3] = { "Machete", "Sun glasses", "Classic tie"};

    //AND THIS IS WHERE YOU WILL DECIDE(TALKING ABOUT THE ITEMS)
    cout << endl;
    cout << "Choose the items" << endl;
    cout << "1. Sword, Ring, Magic boots" << endl;
    cout << "2. Katana, jacket, pen" << endl;
    cout << "3. Machete, Sun glasses, Classic tie" << endl;

    cin >> Inventory;


    //IF ELSE STATEMENTS ARE FOR YOUR CHOICE, ITEMS WILL VARY DUE TO YOUR CHOICE
    if (Inventory == 1) {
        weapon = Invent[0];
        passive = Invent[1];
        passive1 = Invent[2];
    }
    else if (Inventory == 2){
        weapon = Invent1[0];
        passive = Invent1[1];
        passive1 = Invent1[2];
    }
    else if (Inventory == 3) {
        weapon = Invent2[0];
        passive = Invent2[1];
        passive1 = Invent2[2];
    }

    cout << endl;
    //FINALLY, FIGHT STARTS, FACING OUR ENEMY

    cout << "You have met the Enemy" << endl;
    cout << "Actions:" << endl;
    cout << "1. Fight"<< endl;
    cout << "2. Run and Heal"<< endl;

    int actions;
    cin >> actions;
    //YOUR DECISION, TO RUN OR TO FIGHT
    if (actions == 1) {
        //THIS ALL SCRIPTED FIGHT, YEAH WE COULDN'T THINK OF ANOTHER
        //WAY TO IMPLEMENT THE FIGHT SCENE...

            cout << "----------------" << endl;
            cout << "You did the attack" << endl;
            cout << "You hit with " << weapon << endl;
            v.setHp(v.getHp() - mc.getAtk1());
            cout << "Enemy HP = " << v.getHp() << endl;
            cout << "Enemy hit you" << endl;
            mc.setHp(mc.getHp() - v.getAtk());
            cout << "Your HP = " << mc.getHp() << endl;
        cout << endl;
        cout << "You did the attack" << endl;
        cout << "You hit with " << weapon << endl;
        v.setHp(v.getHp() - mc.getAtk1());
        cout << "Enemy HP = " << v.getHp() << endl;
        cout << endl;

        cout << "----------------" << endl;
        cout << "Enemy hit you" << endl;
        mc.setHp(mc.getHp() - v.getAtk());
        cout << "Your HP = " << mc.getHp();
        cout << endl;
        cout << "You did the attack" << endl;
        cout << "You hit with " << weapon << endl;
        v.setHp(v.getHp() - mc.getAtk1());
        cout << "Enemy HP = " << v.getHp() << endl;
        cout << endl;

        cout << "----------------" << endl;
        cout << "Enemy hit you" << endl;
        mc.setHp(mc.getHp() - v.getAtk());
        cout << "Your HP = " << mc.getHp();
        cout << endl;
        cout << "You did the attack" << endl;
        cout << "You hit with " << weapon << endl;
        v.setHp(v.getHp() - mc.getAtk1());
        cout << "Enemy HP = " << v.getHp() << endl;
        cout << endl;

        cout << "----------------" << endl;
        cout << "Enemy hit you" << endl;
        mc.setHp(mc.getHp() - v.getAtk());
        cout << "Your HP = " << mc.getHp();
        cout << endl;
        cout << "You did the attack" << endl;
        cout << "You hit with " << weapon << endl;
        v.setHp(v.getHp() - mc.getAtk1());
        cout << "Enemy HP = " << v.getHp() << endl;
        cout << "----------------" << endl;
        cout << endl;

        cout << "Your " << weapon << ", " << passive << ", " << passive1 << " are broken(((" << endl;
        cout << "" << endl;
        cout << "----------------" << endl;
        cout << "YOU WIN!!!" << endl;
        cout << "----------------" << endl;

        cout << endl;

        //WE CAN MAKE A DECISION IF WE WANT TO LOOT THE ENEMY, OR WE WANT TO LEAVE WITHOUT HIS ITEM~~

        cout << "1. Loot" << endl;
        cout << "2. Leave" << endl;

        cin >> choice;

        //IF YOU HAVE LOOTED THE ENEMY, YOU WILL GAIN HIS SPECIAL WEAPON...

        if (choice == 1) {
            cout << "You are looting the enemy"<< endl;
            cout << "You have earned: " << EnemyWeapon << endl;
            cout << "you have earned: " << mc.getGold() << endl;
        }

        cout << "You are damaged, you need to heal" << endl;
        g.Rest();
    }

    //OTHERWISE, YOU WILL NEED TO HEAL...
    else if (actions == 2) {
        if(mc.getHp() == 100){
            cout << "Sorry, your HP is full~~" << endl;
        }
        else
            g.Rest();
    }

}

int Game::getInventory() const { //GETTER FOR THE INVENTORY WITH  A BODY
    return Inventory;
}

void Game::setInventory(int inventory) { //THE SAME THING WITH SETTER
    Inventory = inventory;
}

void Game::Rest() { //THIS FUNCTION IS FOR HEALING YOURSELF BESIDE THE FIRE
    string Invent[1] = {EnemyWeapon};

    MainChar mc;
    Game g;
    int counter = 4;
    Vrag v;
    cout << "You have found peaceful place" << endl;
    cout << "Your Health: ";
    cout << mc.getHp() - v.getAtk()*counter << endl;
    cout << "~Now you are sitting beside the fire and healing~" << endl;
    cout <<  "Your current HP is: " << mc.getHp() << endl; //JUST RETURNS OUR TOTAL HP
    cout << endl;
}