// Static Allocation
#include<iostream>
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


class temp{

};


int main(){
hero h1;
h1.power=100;
h1.setHealth(45);
h1.setLevel('A');

cout<<h1.getHealth()<<endl;
cout<<h1.getLevel()<<endl;






// cout<<" size "<<sizeof(h1)<<endl;
temp t1; // This is  a temporary empty class;
// cout<<" size "<<sizeof(t1)<<endl;

}