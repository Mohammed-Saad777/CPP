#include<iostream>
using namespace std;

class Animal{

public:
    string color;

    void eat(){
        cout<<"eats\n";
    }

    void breath(){
       cout<<"breath";
    }
};

class Fish : public Animal{

public:
    int fins;

    void swim(){
        cout<<"swims";
    }

};

int main()
{
   Animal A1;
   Fish F1;
   A1.eat();
   F1.breath();
   return 0;
}