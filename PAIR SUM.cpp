#include<bits/stdc++.h>
using namespace std;

void pair1(int a[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
				return;
			}
		}
	}
    cout<<"0";
}

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO CHECK WHEATHER THERE EXIST 2 NUMBER WHOSE SUM IS EQUAL TO GIVEN NUMBER(BRUTE FORCE) ";
	int n,sum;
	cout<<"\nEnter The Number Of Elemnt Of Array ";
	cin>>n;
	int a[n];
	cout<<"Enter The "<<n<<" Elements of Array \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter The Sum ";
	cin>>sum;
	cout<<"\n\n\n\n\n";
	cout<<"Element Of The Arrray Are \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n Required sum "<<sum;
	cout<<"\n\n\n\n\n";
	cout<<"\n Pair Sum Elemnts is ";
	pair1(a,n,sum);
	cout<<"\n\n\n\n\n";
	system("pause");
	
}

