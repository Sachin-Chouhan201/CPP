#include<iostream>
using namespace std;
/*
***
***
***
***
***
***
***
***
************
************



*/
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<3*n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"*";
			//cout<<"ll_S.A.C.H.I.N_ll";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4*n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	system("pause");
}
