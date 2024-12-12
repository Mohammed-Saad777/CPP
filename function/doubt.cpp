#include<iostream>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}


 int sum(int a, int b)
{
    cout<<(a+b)<<endl;
    return 0;
}

double sum(double a, double b)
{
    cout<<(a+b)<<endl;
    return 0;
}
int main()
{
    cout<<sum(2,3);
    sum(12,13);
    sum(1.5,1.3);
    return 0;
}