#include<iostream>

using namespace std;

int main()
{
    int a=0,b=1,c,num;
    cout<<"enter the range of the series";
    cin>>num;
    cout<<a<<" "<<b;

    for(int i=2;i<=num;i++)
    {
        c=a+b;
        cout<<" "<<c<<" ";
        a=b;
        b=c;
    }
   

}