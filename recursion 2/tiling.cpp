#include<iostream>
using namespace std;

int tilingProblem(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

//    // vertical
//     int ans1 = tilingProblem(n-1);

//     //horizontal
//     int ans2 = tilingProblem(n-2);

//     return ans1+ans2;

    //optimize

    return tilingProblem(n-1) + tilingProblem(n-2);
}

int main()
{
    int n = 4;
    cout<<tilingProblem(n)<<endl;
    return 0;
}