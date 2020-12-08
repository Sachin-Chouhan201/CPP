#include<iostream>
using namespace std;
int main()
{   cout<<"PROGRAM TO COMPARE THREE NUMBERS \n ENTER THREE NUMBER ";
    int a,b,c;
    cin>>a>>b>>c;
   cout<<" THE MAXIMUM OF THREE NUMBER IS  ";
    if(a>b)
    {
        if(a>b)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    system("pause");
    return 0;
}
