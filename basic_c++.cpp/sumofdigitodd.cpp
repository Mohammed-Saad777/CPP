#include<iostream>

using namespace std;

int main()
{
    int num,rem,sum=0;
    cout<<"enter the number = ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        if(rem%2!=0)
        {
        sum=sum+rem;
        }
        num=num/10;
    }
    cout<<"the sum of digit is ="<<sum<<endl;
    return 0;
}


