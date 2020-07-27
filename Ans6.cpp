//Check whether a number is prime
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cout<<"Enter a number \n";
    cin>>n;
        for(i=1;i<n/2;i++)
        {
          if(n%i==0)
          {
            c++;
          }
        }  
        if(c==1)
        cout<<"Number is prime ";
        else
        cout<<"Number is not prime";

    return 0;
}
    