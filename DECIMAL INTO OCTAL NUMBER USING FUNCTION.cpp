#include<iostream>
using namespace std;

int dectooct(int n)
{
	int ans=0,x=1;
    while(x<=n)
    {
    	x=x*8;
	}
	x/=8;
	while(x>0)
	{
		int ld=n/x;
		n=n-ld*x;
		x=x/8;
		ans=ans*10+ld;
	}
	return ans;
}


int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT DECIMAL INTO OCTAL NUMBER USING FUNCTION \n Enter Octal Any NUMBER :- ";
	int n;
	cin>>n;  
	cout<<"\n\n\n";
	cout<<"The Octal Number "<<n<<" In Decimal Number is "<<dectooct(n)<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

