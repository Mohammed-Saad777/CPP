#include<iostream>
using namespace std;

int fibonacii(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return fibonacii(n-1) +fibonacii(n-2);
}

int main()
{
    cout<<fibonacii(6);
    return 0;
}