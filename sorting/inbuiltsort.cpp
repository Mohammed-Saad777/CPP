#include<iostream>
#include<algorithm>

using namespace std;

void printarr(int *arr , int n)
{
    cout<<"sorted array is =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}


int main()
{
    int arr[8] = {2,3,56,1,6,8,3,9};

    sort(arr , arr+8 , greater<int>()); // for decending
    sort(arr , arr+8 , greater<int>()); // for ascending

    printarr(arr , 8);

    return 0;
}