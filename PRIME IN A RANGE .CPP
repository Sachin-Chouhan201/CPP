#include<iostream>
using namespace std;

int main()
{   
    system("cls");
    cout<<"PROGRAM TO PRINT PRIME NUMBER IN A GIVEN RANGE "<<endl;
    int a,b;
    cout<<"Enter 2 number ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {   int j;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<endl;
        }
    }
    system("pause");
    return 0;
}
