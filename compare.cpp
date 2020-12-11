#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"\n PROGAM TO COMPARE TWO NUMBERS \n ENTER TWO NUMBERS ";
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
    system("pause");
    return 0;
}
