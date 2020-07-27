//To find second max and second min number from an integer array
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp=0;
    cout<<"Enter no. of elements in an array \n";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Second largest number is "<<a[n-2]<<endl;
    cout<<"Second lowest number is "<<a[1]<<endl;
    return 0;
}
