#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"Both Are Equal";
    }
    else if(x>y)
    {
        cout<<"X is Greater Than Y";
    }
    else
    {
        cout<<"Y is Greater Than X";
    }
    return 0;
}