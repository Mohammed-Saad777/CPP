#include<iostream>

using namespace std;

int main()
{
    int num,table=0;
    cout<<"enter the number for print table ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        table=num*i;
        cout<<num<<"*"<<i<<"="<<table<<endl;
    }
    
    return 0;
}