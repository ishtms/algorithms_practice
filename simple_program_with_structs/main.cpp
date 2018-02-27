/*
    Challenge  - 
    In designing a game, we decide we want to have monsters, because everyone likes fighting monsters.
    Declare a struct that represents your monster. The monster should have a type that can be one of the following:
    an ogre, a dragon, an orc, a giant spider, or a slime. If you’re using C++11, use an enum class for this.
    If you’re using an older compiler, use an enumeration for this.

    Each individual monster should also have a name (use a std::string), as well as an amount of health that represents how 
    much damage they can take before they die. Write a function named printMonster() that prints out all of the struct’s members.
    Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

    Your program should produce the following output:

    This Ogre is named Torg and has 145 health.
    This Slime is named Blurp and has 23 health.
*/

#include <iostream>

// Enumeration for Monster's type

enum class MonsterType {
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME,
};

// Struct to hold Monsters data

struct Monster {
    std::string name;
    int health;
    MonsterType type;
};

// Function to print the monster details

void printMonster(Monster monster){
    std::string monsterName;

    if(monster.type == MonsterType::OGRE){
        monsterName = "Ogre";
    }else if(monster.type == MonsterType::DRAGON){
        monsterName = "Dragon";
    }else if(monster.type == MonsterType::ORC){
        monsterName = "Orc";
    }else if(monster.type == MonsterType::GIANT_SPIDER){
        monsterName = "Giant Spider";
    }else if(monster.type == MonsterType::SLIME){
        monsterName = "Slime";
    }

    std::cout << "This " << monsterName << " is named " << monster.name << " and has " << monster.health << " health." << std::endl;
}

int main(void){

    Monster monsterOne = { "Torg", 145, MonsterType::OGRE };
    Monster monsterTwo = { "Blurp", 25, MonsterType::SLIME };

    printMonster(monsterOne);
    printMonster(monsterTwo);

    return 0;
}