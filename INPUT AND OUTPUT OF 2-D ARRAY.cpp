#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO INPUT AND OUTPUT A 2-DIMENSIONAL(2-D) ARRAY ";
	int n,m;
	cout<<"\nEnter The Number Of Elemnt Of Rows in 2-D Array ";
	cin>>n;
	cout<<"\nEnter The Number Of Elemnt Of Rows in 2-D Array ";
	cin>>m;
    int a[n][m];	
	cout<<"Enter The "<<n*m<<" Elements of The 2-D Array\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<m;j++)
        {
      		cin>>a[i][j];
		}
	}
	cout<<"\n\n\n\n\n";
	cout<<"The "<<n*m<<" Elements of The 2-D Array Are\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<m;j++)
        {
      		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	system("pause");
	return 0;
}

