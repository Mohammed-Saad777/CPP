#include<iostream>

using namespace std;

int main()
{
    int num,rev,res;
    cout<<"enter the number ";
    cin>>num;

    // while(num>0)
    // {
    //     rev=num%10;               // basic logic not used 
    //     cout<<rev;
    //     num=num/10;
    // }
    // cout<<endl;

    while(num>0)
    {
        rev=num%10;
        res=res*10+rev;
        num=num/10;
    }
    cout<<"the reverse no is = "<<res;


    return 0;

}