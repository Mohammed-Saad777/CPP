#include<iostream>
using namespace std;

int friendProblem(int n)
{
    if(n == 1 || n==2)
    {
        return n;
    }

    return friendProblem(n-1) + (n-1) * friendProblem(n-2);
}

int main()
{
    cout<<friendProblem(4)<<endl;
    return 0;
}
