// using break and do while

#include<iostream>

using namespace std;

int main()
{
    int num;

    // by do while loop
    // do{
    //     cout<<"enter the number = ";
    //     cin>>num;
    //     if(num%10==0)
    //     break;
    //     cout<<"you entered"<<num<<endl;
    // }
    // while(true);

    // by while loop
    while(true)
    {
        cout<<"enter the number";
        cin>>num;
        if(num%10==0)
        break;
        else
        cout<<"you entered"<<num<<endl;

    }
    return 0;
}