#include<iostream> // divide and conquer + pivot and partition based
using namespace std;

void printarr(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[] , int si, int ei)
{
    int i=si-1;
    int pivot = arr[ei];
    for(int j= si; j<ei; j++)
    {
        if(arr[j]<= pivot) //i = q , j = p
        {
            i++; // create the space and then store
            swap(arr[i] , arr[j]);
        }
    }

    i++;
    swap(arr[i] , arr[ei]);

    //pivot index
    return i;
}


void quicksort(int arr[] , int si , int ei)
{

    if(si>=ei)
    {
        return ;
    }

    int pivotidx = partition(arr , si, ei);
    quicksort(arr , si , pivotidx-1); // left half
    quicksort(arr , pivotidx+1 , ei); //right half

}

int main()
{
    int arr[] = {8,3,6,2,1,9};
    int n = sizeof(arr) / sizeof(int);

    quicksort(arr , 0 , n-1);
    printarr(arr , n);

    return 0;
}