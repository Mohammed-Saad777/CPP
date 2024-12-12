#include<iostream>

using namespace std;

int mul(int a, int b)
{
    return a*b;
}

int main()
{
    mul(10,20);
    cout<<"multiplication is "<<mul(10,20);
    return 0;
}