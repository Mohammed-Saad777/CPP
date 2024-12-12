#include<iostream>
#include<climits>

using namespace std;


void printarr(char *arr , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(char arr[] , int n )
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
        arr[prev+1] = curr;
    }

    printarr(arr , n);
}


int main()
{
    char arr[]={'z','c','t','k','y','e','i','o'};

    int n=sizeof(arr) / sizeof(char);

    insertionsort(arr , n);

    return 0;
}