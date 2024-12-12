#include<iostream>
#include<string.h>

using namespace std;

void toUpper(char word[], int n)
{
    for(int i=0; i<n; i++)
    {
       // char ch = word[i]; //for more comfortable
        if(word[i]>='A' && word[i]<='Z')
        {
            continue;
        }
        else
        word[i]= word[i]-'a' + 'A';
    }
}

void toLower(char word[], int n)
{
    for(int i=0; i<n; i++)
    {
        char ch = word[i];
        if(ch>='a' && ch<='z')
        {
            continue;
        }
        else
        word[i]= ch-'A' + 'a';
    }
}

int main()
{
    char word[] = "ApPle";
    toUpper(word,strlen(word));

    cout<<word<<endl;

    toLower(word,strlen(word));

    cout<<word<<endl;
    return 0;
}