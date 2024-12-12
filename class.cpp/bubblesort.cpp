#include<iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;

}

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++) //comparision
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] ,arr[j+1]);
            }
        }
    }

    printarr(arr, n);
}

int main()
{
    int arr[] = {8,7,5,89,24,59,-1,-2};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    return 0;
}