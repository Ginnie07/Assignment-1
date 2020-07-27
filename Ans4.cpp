//To find whether a given string is pallindrome or not
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a string \n";
    char s[100];
    cin>>s;
    int n=strlen(s);
    int i,c=0;
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            cout<<"string is not pallindrome";
            break;
        }
        else
        c++;
    }
    if(c==n/2)
    {
        cout<<"string is pallindrome";
    }
    return 0;
}