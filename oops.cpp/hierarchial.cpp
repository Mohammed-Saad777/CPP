#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    
    void eat()
    {
        cout<<"can eat\n";
    }

    void breadth()
    {
        cout<<"breadth\n";
    }
};

class bird : public Animal{

    public:

    void fly(){
        cout<<"can fly";
    }
};

class fish : public Animal{

    public:

    void swim(){
        cout<<"is swim\n";
    }
};

class mammal : public Animal{

    public:

    void walk(){
        cout<<"is walk";
    }
};

int main()
{
    bird b1;
    b1.breadth();

    return 0 ;
}
