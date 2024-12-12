#include<iostream>
#include<string.h>
using namespace std;

void reverse(char ch[], int n)
{
    int st=0, end= n-1;
    
    while(st<=end)
    {
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
}

int main()
{
    char ch[] = "geetanjali institude of technial studies, udaipur";

    reverse(ch, strlen(ch));

    cout<<ch<<endl;

    return 0;
}