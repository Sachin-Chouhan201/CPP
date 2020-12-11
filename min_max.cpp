#include<iostream>
using namespace std;
int  main()
{
    system("cls");
    cout<<"\n PROGRAM TO PINT MAXIMUM AND MINIMUM OF GIVEN NUMBER \n";
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
    system("pause");
}
