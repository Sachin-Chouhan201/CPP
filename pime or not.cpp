#include<iostream>
using namespace std;

int main()
{   
    system("cls");
    cout<<"PROGRAM TO CHECCK WHEATHER A NUMBER IS PRIME OR NOT "<<endl;
    int n;
    cout<<"Enter A Number ";
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
            if((n%i)==0)          // FOUND A FACTOR OF N
            {
                cout<<"Not a Prime "<<endl<<i<<endl;
                break;
            }

    }
    if(i==n)                     // LOOP HAS COMPLETED ALL ITERATION 
    {
        cout<<"Prime Number "<<endl;
    }
    if(i==1)
    {
        cout<<"IT IS A CO-PRIME "<<endl;        
    }        
    system("pause");
    
    return 0;
}
