#include<iostream>
#include<string>
using namespace std;

class Animal{

    public:

    void eat(){
        cout<<"eats\n";
    }

    void breath(){
        cout<<"breathes\n";
    }
};

class mammals : public Animal{

    public://method 1
    void blood(){
        cout<<"warm";
    }
        //method 2
        string bloodType = "warm";
        //method 3 this is preferred
        mammals(){
            bloodType = "warm";
        }
};

class dog : public mammals{

    public:

    void tailwag(){
        cout<<"dog is wagging the tail";
    }

};

int main()
{
    dog d1;
    d1.breath();
    d1.eat();
    d1.tailwag();
    cout<<d1.bloodType;
   d1.blood();

    return 0;
}


