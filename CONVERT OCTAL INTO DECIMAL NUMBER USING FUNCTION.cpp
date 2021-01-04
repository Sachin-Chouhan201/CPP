#include<iostream>
#include<cmath>
using namespace std;

int octtodec(int num)
{

    int r=0,x=1;
	while(num)
	{
		r=r+(num%10)*x;
		num=num/10;
        x=x*8;
    }
    return r;
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT OCTAL INTO DECIMAL NUMBER USING FUNCTION \n Enter Octal Any NUMBER :- ";
	int n;
	cin>>n;
	cout<<"\n\n\n";
	cout<<"The Octal Number "<<n<<" In Decimal Number is "<<octtodec(n)<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

