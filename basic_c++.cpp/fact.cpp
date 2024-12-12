#include<iostream>

using namespace std;

int main()
{
    double fact=1,num;
    cout<<"enter the number ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of the givin number is " <<fact;
    return 0;
}