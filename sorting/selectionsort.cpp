#include<iostream>

using namespace std;

void printarr(int *arr , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int *arr , int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minindex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex = j;
            }

        }
        swap(arr[i] , arr[minindex]);
    }

    printarr(arr , n);
}

int main()
{
     int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"enter the element of array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr, n);

    return 0;
   
}