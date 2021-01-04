#include<iostream>
using namespace std;

int bintodec(int n)
{
     int ans=0;
	 int x=1;
	 while(n)
	 {
	     int y=n%10;
		 ans=ans+x*y;
		 x=x*2;
		 n=n/10;	
     }	
     return ans;
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT BINARY INTO DECIMAL NUMBER USING FUNCTION \n Enter Binay Any NUMBER :- ";
	int n;
	cin>>n;  
    cout<<"\n\n\nThe Decimal Value of "<<n<<" is "<<bintodec(n);
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

