#include<iostream>
using namespace std;

int diagonalSum(int mat[][3], int n)
{
    int sum=0;
    //time complexity O(n^2)
    for(int i=0; i<n; i++) //row
    {
        for(int j=0; j<n; j++) //coloumn
        {
            if(i==j)
            {
                sum+=mat[i][j];
            }
            else if(j == n-i-1)//if 3*3 then vo upar hi condition ok hojaigi
            {               //and vo common element of add nhi karega;
                sum+=mat[i][j];
            }
        }
    }
    cout<<"sum is = "<<sum<<endl;
    return sum;
}

int main()
{
    // int matrix[4][4] = {{1,2,3,4},
    //                     {5,6,7,8},
    //                     {9,10,11,12},
    //                     {13,14,15,16}};

    // diagonalSum(matrix, 4);

    
    int matrix2[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    
    diagonalSum(matrix2, 3);

    return 0;
}