#include<iostream>

using namespace std;

int sum(int a, int b)  //parameters
{
    int sum=a+b;
    return sum ;
}

int mul(int a, int b)
{
    int mul=a*b;
    return mul ;
}

int main()
{
    int s,m;
    s=sum(2,4); // arguments
    m=mul(4,2);
    cout<<"sum is "<<s<<endl;
    cout<<"multiply is "<<m<<endl;
    return 0;
}

