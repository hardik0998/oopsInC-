// Static Allocation
#include<iostream>
#include"hero.cpp"

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