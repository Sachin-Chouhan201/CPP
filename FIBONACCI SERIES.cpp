#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINTING FIRST N TERMS OF FIBONACCI SERIES WITH STARTING TERMS AS 0,1 \n  Enter The Term N  ";
    //int n;
	long int n;
	cin>>n;
	cout<<"\n\n\n";
	if(n==1)
	{
		cout<<"\t0\n";
	} 
	else if(n==2)
	{
		cout<<"\t0 1\n";
	}
	else
	{
		int c,a=0,b=1,i=3;
		cout<<"\t"<<a<<" "<<b<<" ";
		while(i<=n)
		{
		    c=a+b;
			cout<<c<<" ";
			a=b;
			b=c;
			i++;			
		}
		cout<<"\n";
	}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

