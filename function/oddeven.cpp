#include<iostream>

using namespace std;

bool isEven(int n)
{
    if(n%2==0)
    return true;
    else
    return false;
}

int main()
{
    isEven(6);
    cout<<isEven(6);

    return 0;
}