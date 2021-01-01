#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	cout<<"a "<<a<<"\nb "<<b<<endl;
	cout<<"\nAfter Swapping ";
	temp=a;
	a=b;
	b=temp;
	cout<<endl<<"a "<<a<<"\nb "<<b<<endl;
}
int main()
{
	system("cls");
	cout<<"\n  PROGRAM SWAP TWO GIVEN NUMBER USING FUNCTION \n Enter Any Two NUMBER :- ";
	int a,b;
	cin>>a>>b;
	cout<<"\n\n\n";
	swap(a,b);
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

