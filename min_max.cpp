#include<iostream>
using namespace std;
int  main()
{
    int a,b;
    cin>>a>>b;
    int min,max;
    if(a>b)
    {
        min=b;
        max=a;
    }
    else
    {
        min=a;
        max=b;
    }
    cout<<"Max = "<<max<<"\n Min = "<<min;
    return 0;
}