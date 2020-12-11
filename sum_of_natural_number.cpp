#include<iostream>
using namespace std;
int main()
{   
    system("clr");
    cout<<"PROGAM TO PRINT THE SUM OF NATURAL NUMBER"<<endl;
    int n;
    cout<<"ENTER A NUMBER ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum "<<sum<<endl;
    system("pause");
    return 0;
}
