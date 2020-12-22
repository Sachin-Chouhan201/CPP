#include<iostream>
using namespace std;

int main()
{
	system("cls");
	int n;
	cout<<"\n  PROGRAM TO PRINT THE REVERSES OF A NUMBER  \n  Enter A Number :- ";
	cin>>n;
	int rev=0;
	int num=n;
	cout<<endl<<endl<<endl;
    while(n)
    {
    	int rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
	}
	cout<<"\tThe Reverse Of The "<<num<<" Is "<<rev<<endl;
	cout<<endl<<endl<<endl;
	system("pause");
	return 0;
}

