#include<iostream>
#include<string>
using namespace std;

class user{

    private:
        int id;
        string password;

    public:
        string username;

        user(int id){
            this->id = id;
            cout<<this->id<<endl;
        }

        //setter
        void setpassword(string password){
            this->password = password;
        }

        //getters

        string getpassword()
        {
            return password;
        } 

};

int main()
{
    user u1(101);
    u1.username = "saad";
    u1.setpassword("abcd");

    cout<<"user name = "<<u1.username<<endl<<"password = "<<u1.getpassword();
    return 0;
}
