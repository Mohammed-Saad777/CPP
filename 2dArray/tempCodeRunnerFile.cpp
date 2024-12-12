#include<iostream>

using namespace std;

bool search(int mat[][4], int m, int n, int key)
{
    int i=0, j=n-1;
    while(i<m && j>=0)
    {
        if(mat[i][j] == key)
        {
            cout<<"key is found at index ("<<i<<","<<j<<")";
            return true;
        }

        else if(mat[i][j]>key)
        {
            //left
            j--;
        }
        
        else
        {
            i++;
        }
    }

    cout<<"key is not found\n";
    return false;
}

int main()
{
    int matrix [4][4] = {{10,20,30,40},
                         {15,25,35,45},
                         {27,29,37,48},
                         {32,33,39,50}};

    search(matrix, 4, 4, 33);

    return 0;
}