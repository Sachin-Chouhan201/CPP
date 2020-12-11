#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"PROGRAM TO CHECK WHAETHER CHARCTER IS AN VOWEL OR CONSONANT \n ENTER YOUR AGE ";
    char c;
    int isl,isu;
    cout<<"Enter An Alphabet : ";
    cin>>c;
    isl=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isu=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isl||isu)
    {
        cout<<c<<"      Is A Vowel. "<<endl;
    }
    else
    {
        cout<<c<<"      Is A Consonant "<<endl;
    }
    system("pause");
    return 0;
}
