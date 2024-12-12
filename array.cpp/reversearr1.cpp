#include<iostream>

using namespace std;

void printarr(int *arr, int n){
   for(int i=0;i<n;i++)
   cout<<arr[i]<<",";
 }
int main()
{
    int arr []= {55,24234,126,346,346,346,34,43,643,6,4643,634,634,2623,};

    int n=sizeof(arr) / sizeof(int);

    int copyarr [n];

    for(int i=0;i<n;i++)
    {
        int j=n-i-1;

        copyarr[i] = arr[j];
    }

    for(int i=0;i<n;i++)
    {
       arr[i]=copyarr[i];
    }

    cout<<endl;

    printarr(arr,n);

   return 0;
}