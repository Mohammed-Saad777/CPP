#include<iostream>
#include<climits>

using namespace std;


void printarr(int *arr , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[] , int n )
{
    for(int i=1; i<n; i++)
    {
        int curr = arr[i];

        int prev = i-1;

        while(prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev] , arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;  //why this is used discord
    }

    printarr(arr , n);
}

int main()
{
    int arr[]={15,154,61,46,46,13,6,32,6,3,234,32,32,};

    int n=sizeof(arr) / sizeof(int);

    insertionsort(arr , n);

    return 0;
}