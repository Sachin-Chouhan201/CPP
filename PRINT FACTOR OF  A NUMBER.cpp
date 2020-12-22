#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT FACTOR OF A GIVEN NUMBER \n Enter Any NUMBER :- ";
	int n;
	cin>>n;
	cout<<"\n\n\n  Factor of "<<n<<" are :- ";
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{ 
			cout<<i<<" ";
		}
	}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

