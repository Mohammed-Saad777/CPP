#include<iostream>

using namespace std;

void printsubarray(int *arr , int n)
{
    for(int start=0 ; start<=n-1; start++)
    {
        for(int end=start ; end<n ; end++)
        {
           // cout<<"(" << start << ","<<end <<") "; for index print;
           for(int i=start;i<=end;i++)
           {
            cout<<arr[i];
           }
           cout<<",";
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
    return 0;
}