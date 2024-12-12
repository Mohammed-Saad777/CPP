#include<iostream>

using namespace std;

int sum(int a, int b=1)  //parameters
{
    int sum=a+b;
    return sum ;
}

int mul(int a, int b=2)  // but we did not do the same as a 
{                        // ex. int a=1 it gives error.
    int mul=a*b;
    return mul ;
}

int main()
{
    int s,m;
    s=sum(2); // arguments
    m=mul(4);
    cout<<"sum is "<<s<<endl;
    cout<<"multiply is "<<m<<endl;
    return 0;
}

