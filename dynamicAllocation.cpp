#include<iostream>
#include"hero.cpp"
using namespace std;


int main(){

hero *superHero = new hero;

superHero->name="Goku";
superHero->power=100;
superHero->setHealth(100);
superHero->setLevel('A');
cout<<"Name is " << superHero->name << endl;
cout<<"Power "<<superHero->power<<endl;
cout<<"Health "<<superHero->getHealth()<<endl;
cout<<"Level "<<superHero->getLevel()<<endl;





}