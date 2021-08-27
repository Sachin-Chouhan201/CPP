#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"\nPROGRAM TO PRINT MATRIX TRAVERSE A 2-DIMENSIONAL(2-D) ARRAY ";
	int n,m;
	cout<<"\nEnter The Order of  Matrix ";
	cin>>n>>m;
   	int a[n][m];	
	cout<<"Enter The "<<n*m<<" Elements of The Matrix\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<m;j++)
        {
      		cin>>a[i][j];
		}
	}
	cout<<"\n\n\n\n\n";
	cout<<"The "<<n*m<<"The Original Matrix is\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<m;j++)
        {
      		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
