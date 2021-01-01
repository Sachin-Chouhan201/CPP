#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO ADD TWO NUMBERS USING FUNCTION \n Enter Any Two NUMBER :- ";
	int a,b;
	cin>>a>>b;
	cout<<"\n\n\n  Sum of Two Number Is   "<<add(a,b);
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

