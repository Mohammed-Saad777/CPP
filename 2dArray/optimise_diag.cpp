#include<iostream>
using namespace std;

int diagonalSum(int mat[][3], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+mat[i][i];
        if(i!=n-i-1)
        {
            sum=sum+mat[i][n-i-1];
        }
    }

    cout<<"sum is = "<<sum;

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

    diagonalSum(matrix2 , 3);
   
    return 0;
}