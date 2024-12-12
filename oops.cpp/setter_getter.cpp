#include<iostream>

using namespace std;

class student {

    private:
        string name;
        float cgpa;

    public:

    void percentage()
    {
        cout<<(cgpa*10)<<endl;
    }

    //setters

    void setname(string nameval){
        name = nameval;
    }

    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }

    //getters  // value return krte hai

    string getname(){
        return name ;
    }

    float getcgpa(){
        return cgpa;
    }


};

int main()
{
    student s1;
    s1.setname("saad");
    s1.setcgpa(9.23);

    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;

    return 0;

}