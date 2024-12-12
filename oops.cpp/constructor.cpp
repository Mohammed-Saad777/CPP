#include<iostream>
#include<string.h>
using namespace std;

class car{
    
private:
    string name;
    string color;

public:
    car(){
        cout<<"contructor without parametrised\n";
    }
   // car(string nameval , string colorval)
    car(string name , string color){
        // cout<<"contructor is called object is created\n";
        // name = nameval; // both name and col. are in private so it is not assicible outside the class 
        // color = colorval;//thats why we make getters;
        cout<<"constructor with parametrised\n";
        this->name = name;
        this->color = color;

        
    } // automatically invoke ho jata hai..

    void start(){
        cout<<"car has started\n";
    }

    void stop(){
        cout<<"car has stopped\n";
    }

    //getter
    string getname(){
        return name;
    }

    string getcolor(){
        return color;
    }



};

int main()
{
    car c0;
    car c1("maruti 800", "white");

  //  c1.start();
    cout<<"car name = "<<c1.getname()<<"\ncar color = "<<c1.getcolor()<<endl;
    return 0;
}



