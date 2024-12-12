#include<iostream>
using namespace std;

class Student {

    //properties   // private
    string name;
    float cgpa;

    //methods  // public
    void getpercentage()
    {
        cout<<(cgpa*10)<<"%\n";
    }
};

int main()
{
    Student s1; //object

    cout<<sizeof(s1);

    return 0;
}