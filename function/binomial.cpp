#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}

int bincoff(int n,int r)
{
    int val1= factorial(n);
    int val2= factorial(r);
    int val3= factorial(n-r); //for exmaple if we call factorial (a) int bincoff then it will n for factorial
                              //what mattersis its value, that is 2,4,8 . not the name wheather it is n,r or z

    int result= val1/(val2*val3);

    return result;
}

int main()
{
    cout<<factorial(5,2)<<endl;
    return 0;
}