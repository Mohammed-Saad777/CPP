#include<iostream>
using namespace std;

int binarySearch(int arr, int n, int key)
{
int st = 0 ;
int end = n-1;
    while(st<=end)
    {
        int mid = (st+mid) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            st = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

return -1;
}
int main()
{
    int key;
    int arr[] = {2,4,6,3,7,9,12};
    int n = sizeof(arr) / sizeof(int);
    cout<<"enter the key";
    cin>>key;
    cout<<binarySearch(arr , n, key);
}