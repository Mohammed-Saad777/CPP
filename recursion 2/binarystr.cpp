#include<iostream>
using namespace std;

binString(int n, int lastPlace, string ans)
{
    if(n==0)
    {
        cout<<ans<<endl;
        return 0;
    }
    if(lastPlace != 1)
    {
        binString(n-1 , 0 , ans+ '0');
        binString(n-1 , 1 , ans+ '1');
    }

    else{

        binString(n-1 , 0, ans+ '0');
    }
}

int main()
{
    string ans = "";
    binString(2, 0 ,ans) ;
    return 0;
}