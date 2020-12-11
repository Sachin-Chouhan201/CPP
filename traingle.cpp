#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"\n PROGRAM IS TO CHECK TYPE OF TRAINGALE \n ENTER THREE SIDES OF RECTANGLE ";
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3)
    {
        cout<<"This Is An Equilateral Traingle. \n";
    }
    else if(s1==s2||s1==s3||s2==s3)
    {
        cout<<"This Is An Isoseles Traingle. \n";
    }
    else
    {
        cout<<"This Is A Scalene Triangle. \n";
    }
    system("pause");
    return 0;
}
