// #include<iostream>
// #include<algorithm>

// using namespace std;

// void printarr(int *arr , int n)
// {
//     cout<<"sorted array is =";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<",";
//     }
// }

// void bubblesort(int *arr , int n)
// {
//     for(int i=0; i<n-1 ;i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             if(arr[j]>arr[j+1])  // < for desinding order  
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     printarr(arr,n);
// }

// int main()
// {
//     int arr[]={3,67,4,28,47,98};

//     int n=sizeof(arr) / sizeof(int);

//     bubblesort(arr , n);

//     return 0;
// }


#include<iostream>
#include<algorithm>

using namespace std;

void printarr(int *arr , int n)
{
    cout<<"sorted array is =";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}

void bubblesort(int *arr , int n)
{
    for(int i=0; i<n-1 ;i++)
    {
        bool isSWAP = false;
        cout<<"outer loop  ";
        for(int j=0; j<n-i-1; j++)
        {
            cout<<"inner loop   ";
            if(arr[j]>arr[j+1])  // < for desinding order  
            {
                swap(arr[j],arr[j+1]);
                isSWAP = true;
            }

        }

        if(isSWAP == false)
        // array is already sorted
        return;
    }

    printarr(arr,n);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int n=sizeof(arr) / sizeof(int);

    bubblesort(arr , n);

    return 0;
}