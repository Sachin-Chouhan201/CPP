#include<iostream>
using namespace std;
int main()
{ 
    cout<<"\nPROGRAM TO CHECK FOR ELIGINLITY OF VOTEING \n ENTER YOUR AGE ";
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"You Can Vote."<<endl;
    }
    else
    {
        cout<<"Not Eligible To Vote."<<endl;
    }
    return 0;
    system("pause");
}
