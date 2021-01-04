#include<iostream>
using namespace std;

int hextodec(string n)
{
	int ans=0,x=1;
	int s=n.size();
	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0'&&n[i]<='9')
		{
			ans=ans+x*(n[i]-'0');
		}
		else if(n[i]>='A'&&n[i]<='F')
		{
			ans=ans+x*(n[i]-'A'+10);
		}
			else if(n[i]>='a'&&n[i]<='f')
		{
			ans=ans+x*(n[i]-'a'+10);
		}
		x=x*16;
	}
	return ans;
}


int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT HEXADECIMAL INTO DECIMAL NUMBER USING FUNCTION \n Enter Hexadecimal Any NUMBER :- ";
	string n;
	cin>>n;  
	cout<<"\n\n\n";
	cout<<"The Hexadecimal Number "<<n<<" In Decimal Number is "<<hextodec(n)<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

