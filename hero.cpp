#include<iostream>
#include<string>
using namespace std;

class hero{
    int health;
    char level;

    public:
    int power;
    string name;
    
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health  = h;

    }
      char getLevel(){
        return level;
    }
    void setLevel(char l){
        level  = l;

    }
};