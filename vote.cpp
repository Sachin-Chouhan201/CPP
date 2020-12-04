#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"You Can Vote.";
    }
    else
    {
        cout<<"Not Eligible To Vote.";
    }
    return 0;
}