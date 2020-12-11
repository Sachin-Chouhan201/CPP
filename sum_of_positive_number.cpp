#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"\n PROGRAM TO PRINT SUM OF POSITIVE NUMBER \n";
    int num;
    int sum=0;
    cout<<"Program For SUM Of Positive Number "<<endl;
    cout<<"Enter A Positive Number :- ";
    cin>>num;
    while(num>=0)
    {
        sum=sum+num;
        cout<<"Enter A Number :- ";
        cin>>num;
    }
    cout<<"Sum "<<sum<<endl;
 	system("pause");
    return 0;
}
