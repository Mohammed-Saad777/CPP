#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }

    return -1;
    }
}
int main()
{
    int key;
    int arr[] = {1,3,2,4,6,4,3};
    int n = sizeof(arr) / sizeof(int);
    cout<<"enter the key";
    cin>>key;
    cout<< linearSearch(arr , n , key);
}