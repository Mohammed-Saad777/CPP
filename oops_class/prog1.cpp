#include<iostream>
#include<string>
using namespace std;

class Student{

    private:

    string name;
    float cgpa;

    public:

    void percentage(){

        cout<<(cgpa*10)<<"%"<<endl;
    }

    //setters

    void setname(string nameval){
        name=nameval;
    }

    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }

    //getters

    string getname(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};

int main()
{
    Student s1;
    s1.setname("saad"); // always in brackets
    s1.setcgpa(9.1);

    cout<<"name = "<<s1.getname()<<endl;
    cout<<"cgpa = "<<s1.getcgpa()<<endl;

    s1.percentage();

    return 0;


}