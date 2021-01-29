#include<bits/stdc++.h>
using namespace std;

void pairsum(int a[],int n,int k)
{
	int low=0,high=n-1;
	while(low<high)
	{
			if((a[low]+a[high])==k)
			{
				cout<<a[low]<<" "<<a[high]<<endl;
				return;
			}
			else if((a[low]+a[high])>k)
			{
				high--;
			}
			else
			{
				low++;
			}
	}
    cout<<"0";
}

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO CHECK WHEATHER THERE EXIST 2 NUMBER WHOSE SUM IS EQUAL TO GIVEN NUMBER(OPTIMISED APPROACH) ";
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
	sort(a,a+n);
	cout<<"\n Pair Sum Elemnts is ";
	pairsum(a,n,sum);
	cout<<"\n\n\n\n\n";
	system("pause");
	
}

