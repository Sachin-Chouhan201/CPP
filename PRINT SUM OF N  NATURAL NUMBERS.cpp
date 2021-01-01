#include<iostream>
using namespace std;
 int sumn(int n)
 {
 	return (n*(n+1))/2;
 }

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT SUM OF N  NATURAL NUMBERS \n Enter Any NUMBER :- ";
	int n;
	cin>>n;
	cout<<"\n\n\n  Sum Of "<<n<<" Natural Number Is "<<sumn(n);
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

