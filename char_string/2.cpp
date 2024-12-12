#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // char work[30];
    // cin>>work;

    // cout<<"your word is :"<<work<<endl;
    // cout<<"length is :"<<strlen(work)<<endl;
    // return 0;

    char work[30];
    cin.getline(work,30,'*');

    cout<<"your word is :"<<work<<endl;
    cout<<"length is :"<<strlen(work)<<endl;
    return 0;
}