#include<iostream>
using namespace std;

int dectobin(int n)
{
	int ans=0,x=1;
    while(x<=n)
    {
    	x=x*2;
	}
	x/=2;
	while(x>0)
	{
		int ld=n/x;
		n=n-ld*x;
		x=x/2;
		ans=ans*10+ld;
	}
	return ans;
}


int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT DECIMAL INTO BINARY NUMBER USING FUNCTION \n Enter Decimal Any NUMBER :- ";
	int n;
	cin>>n;  
	cout<<"\n\n\n";
	cout<<"The Decimal Number "<<n<<" In BINARY Number is "<<dectobin(n)<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

