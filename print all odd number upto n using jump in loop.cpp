#include <iostream>
using namespace std;
int main()
{  
    system("cls");
    int n;
    cout<<"PROGRAM TO PRINT ODD NUMBER UPTO N "<<endl;
    cout<<"Enter A Number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
 cin>>n;
 system("pause");
    return 0;
}
