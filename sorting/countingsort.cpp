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

void countingsort(int *arr , int n)
{
    int freq[100000] = {0}; //frequency array initialize to zero
    int minVal = INT_MAX;
    int maxVal = INT_MIN;


// determination the frequency of each element and find the min and max values
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

    for(int i = minVal , j=0; i<=maxVal; i++)
    {
        while(freq[i]>0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    printarr(arr , n);

}



int main()
{
    int arr[]={1,5,5,3,2,3,3,6,4,7,3,6,3,6,2,1,7,4};

    int n=sizeof(arr) / sizeof(int);

    countingsort(arr , n);

    return 0;
}