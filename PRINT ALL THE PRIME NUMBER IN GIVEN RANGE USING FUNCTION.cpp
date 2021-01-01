#include<iostream>
using namespace std;
bool prime(int n)
{
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT ALL THE PRIME NUMBER IN GIVEN RANGE USING FUNCTION \n Enter Any Two NUMBER :- ";
	int a,b;
	cin>>a>>b;
	cout<<"\n\n\n Prime Number in Given Range "<<a<<"-"<<b<<"  Are:- ";
	for(int i=a;i<=b;i++)
	{
		if(prime(i))
		{ 
			cout<<i<<" ";
		}
	}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

