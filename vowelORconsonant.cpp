#include<iostream>
using namespace std;
int main()
{
    char c;
    int isl,isu;
    cout<<"Enter An Alphabet : ";
    cin>>c;
    isl=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isu=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isl||isu)
    {
        cout<<c<<" Is A Vowel. ";
    }
    else
    {
        cout<<c<<" Is A Consonant ";
    }
    return 0;
}