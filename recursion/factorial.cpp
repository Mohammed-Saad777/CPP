#include<iostream>
using namespace std;

int fact(int n){

    if(n==0)
    return 1;

    return n*fact(n-1);
}

int main()
{
        long double ans=fact(15);
        cout<<ans;
        return 0;
}