#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp=0,key=0;
    cout<<"Enter no. of elements in an array \n";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"The Sorted Array Is \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" " ;
    }
    cout<<endl;
    return 0;
}



