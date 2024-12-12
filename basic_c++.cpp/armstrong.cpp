//only for 3 digit number
#include<iostream>

using namespace std;

int main()
{
    int num,c,var,arm;
    cout<<"enter the number";
    cin>>num;
    c=num;
    while(num!=0)
    {
        var=num%10;
        arm=arm+(var*var*var);
        num=num/10;
    }
    if(arm==c)
    {
        cout<<"number is armstrong number";
    }
    else
    {
        cout<<"not armstrong number";
    }
    return 0;

}