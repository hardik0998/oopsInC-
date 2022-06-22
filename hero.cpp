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

// copy constructor
    hero(hero& temp){   // pass by reference
        cout<<"copy constructor created"<<endl;
        this->power = temp.power;
        this->name = temp.name;
    }

    int power;
    string name;
    
    // print function 
    void print(){
        cout<<"Power "<<this->power<<endl;
        cout<<"Name "<<this->name<<endl;
    }

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



    ~hero(){
        cout<<"destructor called"<<endl;
    }
};