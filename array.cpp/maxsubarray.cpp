// sum of the subarray and maximum also find...
#include<iostream>
#include<climits>

using namespace std;

void maxSubarraySum1(int *arr , int n)
{

    int maxSum = INT_MIN;
    for(int start=0 ; start<n ; start++)
    {
        for(int end=start; end<n; end++)
        {
            int currSum = 0;
            for(int i=start;i<=end;i++)
            {
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(maxSum,currSum);   //new to us to find max i  c++  max
        }                                   // for max 3 we have max(a,max(b,c));
        cout<<endl;
        
    }
    cout<<"maximum subarray sum = "<<maxSum << endl;
}

int main()
{
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxSubarraySum1(arr,n);
    return 0;

}