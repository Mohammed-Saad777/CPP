#include<iostream>
#include<string.h>

using namespace std;

bool ispalindrome(char ch[] , int n)
{
    int st = 0, end=n-1;
    while(st<=end)
    {
        if(ch[st++]!=ch[end--])
        {
            cout<<"not a palindrome";
            return false;
        }
    }
    cout<<"it is valid palindrome";
    return true;
}

int main()
{

char ch[] = "racecar";

ispalindrome(ch, strlen(ch));

return 0;

}