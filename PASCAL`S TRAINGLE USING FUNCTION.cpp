#include<iostream>
using namespace std;

int fact(int n)
{ 
   int f=1;
   for(int i=2;i<n;i++)
   {
   	f=f*i;
   }
   return f;
	
}
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT PASCAL`S TRAINGLE USING FUNCTION \n Enter Number of Rows  :- ";
	int n;
	cin>>n;
	cout<<"\n\n\n";
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<=i;j++)
	  {
	     cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
      }
    cout<<endl;
    }
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

