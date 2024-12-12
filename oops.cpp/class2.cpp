#include<iostream>
using namespace std;

class Student
{
   // private:
    //string name;

    public:
    string name;
    float cgpa;

    void getpercentage(){
        cout<<(cgpa*10)<<endl;
    }
};

int main()
{
    Student s1;
    s1.name = "saad";

    s1.cgpa = 9.67;

    cout<<s1.name<<endl;    
    cout<<s1.cgpa<<endl;

    s1.getpercentage();

    return 0;
}