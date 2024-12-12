#include <iostream>
using namespace std;
class student{
    char roll_no[20],stu_name[20],course_name[20],father_name[20];
    char dod[20];
    public:
    void get_input()
    {
        cout<<"enter roll no =";
        cin>>roll_no;
        cout<<"enter student name =";
        cin>>stu_name;
        cout<<"enter course name =";
        cin>>course_name;
        cout<<"enter father name =";
        cin>>father_name;
        cout<<"enter dod =";
        cin>>dod;
    }
    void display()
    {
        cout<<"student roll no ="<<roll_no<<endl ;
        cout<<"student name ="<<stu_name<<endl;
        cout<<"student course name ="<<course_name<<endl ;
        cout<<"student father name ="<<father_name<<endl ;
        cout<<"student dod ="<<dod<<endl ;
    }


};
class exam : public student
{
    int mark1,mark2,mark3,total;
    float per;
    public:
    void subject()
    {
        cout<<endl<<"enter english marks = " ;
        cin>>mark1;
        cout<<"enter math marks = ";
        cin>>mark2;
        cout<<"enter oops marks = ";
        cin>>mark3;
    }
    void mark_display()
    {
        cout<<"english marks ="<<mark1<<endl ;
        cout<<"math marks ="<<mark2<<endl ;
        cout<<"oops marks ="<<mark3 <<endl;
        total=mark1+mark2+mark3;
        per=(100*total)/300;
        cout<<"Total marks of subject = "<<total<<endl ;
        cout<<"Total percentage of subject ="<<per<<endl ;


    }
};

int main() {
    exam st1;
    st1.get_input();
    st1.subject();
    st1.display();
    st1.mark_display();


    return 0;
 }
