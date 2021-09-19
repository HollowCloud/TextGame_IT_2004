#ifndef IT_2004GAME_MAINCHARACTER_H
#define IT_2004GAME_MAINCHARACTER_H

#include <iostream>
using namespace std;
#include <string>


class MainChar{

    //HERE WE HAVE CREATED A CLASS MAINCHAR, THAT HOLDS ALL ATTRIBUTES
    //OF OUR MAIN CHARACTER

public:
    void gameExp();//LOGIC FOR GAME EXPEREINCE
    int exp = 0; //JUST GIVING A VALUE FOR EXP
    MainChar();
    void initialize_name(string name); //CALLING WHEN WE NEED TO INITIALIZE OUR CHARACTER
    void showStats(); //THIS FUNCTION JUST LISTS ALL THE CURRENT STATS WE HAVE
    void Character_Menu();// MENU FOR CHARACTER
    void StartName();// HERE WE ASK TO TYPE THE NAME

    // GETTERS AND SETTERS
    int getAtk1() const;

    void setAtk(int atk);

    int getHp() const;

    void setHp(int hp);

    // FOR HP AND ATTACK

private:
    //ALL ATTRIBUTES OF CHARACTER ARE IN THE PRIVATE STATE
    string name;
    int HP;
    int maxHP;
    int Atk;
    int level = 0;
    int gold;
    string Inventory;
    //END OF THE CHARACTER ATTRIBUTES

public:

    const string &getInventory() const;// GETTER FOR INVENTORY

    void setInventory(const string &inventory);// SETTER FOR INVENTORY

    int a = 0;// THIS IS THE COUNTER FOR LEVEL

    int g = 0;//THIS IS THE COUNTER FOR GOLD

    int getExp() const;// GETTER FOR EXP

    void setExp(int exp);// SETTER FOR EXP

    void MainChar::gameExp1() { //THIS IS WHERE LEVELLING UP WORKS
        a++;
        setExp(a);
        cout << getExp() << endl;
    }

    void MainChar::gameGold1() { //THIS IS FOR GOLD TO INCREASE
        g += 20;
        setGold(g);
        cout << getGold() << endl;
    }

    int getGold() const;// GETTER FOR GOLD

    void setGold(int gold);// SETTER FOR GOLD


};




#endif //IT_2004GAME_MAINCHARACTER_H
