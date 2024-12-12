
// #include<iostream>
// using namespace std;
// #define size 4

// void push(int *arr, int size, int *top, int value) 
// {
//     if (*top == size - 1) {  
//         cout << "Stack overflow" << endl;
//     } else {
//         (*top)++;  
//         arr[*top] = value;
//         cout << "Pushed: " << arr[*top] << endl;  
          
//     }
// }

// int main() {
//     int arr[size] = {1, 2, 3, 5};
//     int top = 3; 
//     push(arr, size, &top, 5);
//     return 0;
// }


#include<iostream>
using namespace std;
#define size 4

void push(int *arr, int size, int *top, int value) 
{
    if (*top == size - 1) {  
        cout << "Stack overflow" << endl;
    } else {
        (*top)++;  
        arr[*top] = value;
        cout << "Pushed: " << arr[*top] << endl;  
    }
}

int main() {
    int arr[size] = {1, 2, 3, 5};
    int top = 2;  
    push(arr, size, &top, 10);
    return 0;
}
