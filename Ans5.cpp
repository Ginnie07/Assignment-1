//To find whether a given number is pallindrome or not
#include<iostream>
using namespace std;
int main()
{   int n,rev=0,m,r=0;
    cout<<"Enter a number \n";
    cin>>n;
    m=n;
    while(m>0)
    {
        r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    if(rev==n)
    cout<<"number is pallindrome"<<endl;
    else
    cout<<"number is not pallindrome"<<endl;
}
