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
	cout<<"\n  PROGRAM TO PRINT BINARY COEFFICIENT (nCr) NUMBER \n Enter N and R  :- ";
	int n,r;
	cin>>n>>r;
	cout<<"\n\n\n  Binary Coefficien (nCr) of "<<n<<" is  "<<(fact(n))/(fact(n-r)*fact(r));
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

