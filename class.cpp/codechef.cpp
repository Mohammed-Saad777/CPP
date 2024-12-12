#include<iostream>
using namespace std;

bool isDelicious(long long n)
{
    bool seen[10] = {false};

    while(n>0)
    {
    int digit = n%10;

    if(seen[digit])
    {
        return false;
    }

    seen[digit] = true;
    n/=10;

    }
    return true;
}


int main() {
    int T; 
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R; 
        int count = 0;
        
       
        for (long long i = L; i <= R; i++) {
            if (isDelicious(i)) {
                count++; 
            }
        }
        
       
        cout << count << endl;
    }
    
    return 0;
}