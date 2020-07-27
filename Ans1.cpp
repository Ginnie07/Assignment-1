//To find greatest of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max=0;
    cout<<"Enter 3 numbers \n";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c)
    max=a;
    else if(b>a&&b>c)
    max=b;
    else
    max=c;
    cout<<"Greatest number is "<<max<<endl;
    return 0;

}
