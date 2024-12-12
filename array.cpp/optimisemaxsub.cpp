#include<iostream>
#include<climits>

using namespace std;

void maxsubarr2(int *arr , int n)
{
    int maxsum = INT_MIN;
    for(int start=0 ; start<n ; start++)
    {
        int currsum = 0;
        for(int end=start ; end<n ;end++)
        {
            currsum+=arr[end];
            maxsum = max(currsum , maxsum);
        }
    }
    cout<<"maximum subarray is = "<<maxsum;
}

int main()
{
    int arr[6]={2,-3,6,-5,4,2};

    int n=sizeof(arr)/sizeof(int);

    maxsubarr2(arr,n);

    return 0;
}
