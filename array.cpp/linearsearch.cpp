#include<iostream>

using namespace std;

int linearsearch(int *arr ,int n ,int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,43,13,62};
    
    int n=sizeof(arr)/sizeof(int);

    cout<<linearsearch(arr,n,100);
    return 0;
}

