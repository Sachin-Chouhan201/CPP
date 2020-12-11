#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"\n PROGRAM TO PRINT TABLE OF ANY NUMBER ";
    int n;
    cout<<"Enter A Number For Table  ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
    }
    system("pause");
    return 0;
}
