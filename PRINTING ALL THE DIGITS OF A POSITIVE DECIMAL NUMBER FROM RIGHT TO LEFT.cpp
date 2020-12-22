#include<iostream>
using namespace std;

int main()
{
	system("cls");
	int n;
	cout<<"\n  PROGRAM TO PRINTING ALL THE DIGITS OF A POSITIVE DECIMAL NUMBER FROM RIGHT TO LEFT  \n  Enter A Number :- ";
	cin>>n;
	cout<<endl<<endl<<endl;
    while(n)
    {
    	int rem=n%10;
    	cout<<"\t"<<rem<<endl;
    	n=n/10;
	}
	cout<<endl<<endl<<endl;
	system("pause");
	return 0;
}

