#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si; 
    int j = mid+1;

    while(i<=mid && j<=ei)
    { 
        if(arr[i]<= arr[j])
        {
            temp.push_back(arr[i++]);
        }

        else
        {
            temp.push_back(arr[j++]);
        }
    }

        while(i<=mid)
        {
            temp.push_back(arr[i++]);
        }

        while(j<=ei)
        {
            temp.push_back(arr[j++]);
        }

       

        for(int idx = si , x=0; idx<=ei; idx++)
        {
            arr[idx] = temp[x++];
        }
    
}

void mergeSort(int arr[], int si, int ei )
{
    if(si>=ei) 
    {
        return;
    }
    int mid = si+(ei-si)/2;
    mergeSort(arr, si , mid); 
    mergeSort(arr, mid+1, ei); 

    merge(arr, si, mid, ei);

}

void printArr(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[9] = {7,27,58,955,252,8985,47,26,3};
    int n = 9;
    mergeSort(arr, 0, n-1);
    printArr(arr  ,n);
    return 0;
}