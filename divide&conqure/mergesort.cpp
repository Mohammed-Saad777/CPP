// #include<iostream> //complexity = O(nlogn)
// #include<vector>
// using namespace std;

// void merge(int arr[], int si, int mid, int ei) //conquer  space complexity 0(n)
// {
//     vector<int> temp;
//     int i = si; // 1st half k starting point
//     int j = mid+1; //2nd hals k starting point

//     while(i<=mid && j<=ei)//1 and 2 half k end
//     { 
//         if(arr[i]<= arr[j])
//         {
//             temp.push_back(arr[i++]);
//         }

//         else
//         {
//             temp.push_back(arr[j++]);
//         }
//     }

//         while(i<=mid)
//         {
//             temp.push_back(arr[i++]);
//         }

//         while(j<=ei)
//         {
//             temp.push_back(arr[j++]);
//         }

//         //vector -> original array

//         for(int idx = si , x=0; idx<=ei; idx++)
//         {
//             arr[idx] = temp[x++];
//         }
    
// }

// void mergeSort(int arr[], int si, int ei ) //O(logn)
// {
//     if(si>=ei) //si==ei then all elemnts are seperated
//     {
//         return;
//     }
//     int mid = si+(ei-si)/2;
//     mergeSort(arr, si , mid); //left half
//     mergeSort(arr, mid+1, ei); //right half

//     merge(arr, si, mid, ei);//conquer

// }

// void printArr(int arr[] , int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main()
// {
//     int arr[9] = {7,27,58,955,252,8985,47,26,3};
//     int n = 9;
//     mergeSort(arr, 0, n-1);
//     printArr(arr  ,n);
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

class String {
    string value;

public:
    // Constructor without initializer list
    String(const string& str) {
        value = str; // Assign value inside the constructor
    }

    // Overload the == operator
    bool operator==(const String& other)  {
        return value == other.value;
    }
};

int main() {
    string input1, input2;

    cout << "Enter first string: ";
    cin >> input1;

    cout << "Enter second string: ";
    cin >> input2;

    String str1(input1), str2(input2);

    if (str1 == str2)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;

    return 0;
}
