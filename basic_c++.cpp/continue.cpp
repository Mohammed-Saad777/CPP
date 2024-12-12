// using break and do while

#include<iostream>

using namespace std;

int main()
{
    int num;

    //using do while loop
    do{
        cout<<"enter the number = ";
        cin>>num;
        if(num%10==0)
        continue;
        cout<<"you entered"<<num<<endl;
    }
    while(true);

    // by while loop
    // while(true)
    // {
    //     cout<<"enter the number";
    //     cin>>num;
    //     if(num%10==0)
    //     continue;
    //     else
    //     cout<<"you entered"<<num<<endl;

    // }
    
    return 0;
}