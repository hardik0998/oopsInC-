#include<iostream>
using namespace std;

class hero{
    int health;
    char level;

    public:
    hero(){
        cout<<"Constructor called"<<endl;
    }

    hero(int power){
        cout<<"this "<<this<<endl;
        // This keyword stores adress of current object , it acts like a pointer
        this->power = power;
    }


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