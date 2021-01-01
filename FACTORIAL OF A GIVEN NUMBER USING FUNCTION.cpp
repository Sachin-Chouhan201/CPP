#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT FACTORIAL OF A GIVEN NUMBER USING FUNCTION \n Enter Any NUMBER :- ";
	int n;
	cin>>n;
	cout<<"\n\n\n  Factorial of Number "<<n<<"! is "<<fact(n);
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

