#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:

    int salary;
    string subject;
};

class student{
    public:

    string rollno;
    float cgpa;
};

class TA : public teacher, public student{
    public:
    
    string name;

};

int main()
{
    TA t1;
    t1.name = "saad";
    t1.rollno = "2345";
    t1.subject = "c++";
    t1.cgpa = 9.1;

    cout<<t1.name<<endl;
    cout<<t1.rollno<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa;

    return 0;
}
