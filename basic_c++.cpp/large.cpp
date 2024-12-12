// #include<iostream>

// using namespace std;

// int main()
// {
//     int n1,n2;
//     cout<<"enter the numbers";
//     cin>>n1;
//     cin>>n2;

//     if(n1>n2)
//     {
//         cout<<n1<<"is greater"<<endl;
//     }
//     else
//     {
//         cout<<n2<<"is greater"<<endl;
//     }
//     return 0;
// }


#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"enter the number=";
    cin>>num;

    if(num%2==0)
    {
        cout<<num<<"is even"<<endl;
    }
    else
    {
        cout<<num<<"is odd"<<endl;
    }
    return 0;
}