#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO PRINT ELEMNET IN SPIRAL ORDER A 2-DIMENSIONAL(2-D) ARRAY ";
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
	cout<<"The Elemnts In Spiral Order are \n";
	int rs=0,cs=0,re=n-1,ce=m-1;
	while(re>=rs&&ce>=cs)
	{
			for(int i=cs;i<=ce;i++)
			{
				cout<<a[rs][i]<<" ";
			}
			rs++;
		
			for(int i=rs;i<=re;i++)
			{
				cout<<a[i][ce]<<" ";
			}
			ce--;
		
			for(int i=ce;i>=cs;i--)
			{
				cout<<a[re][i]<<" ";
			}
			re--;
		
			for(int i=re;i>=rs;i--)
			{
				cout<<a[i][cs]<<" ";
			}
			cs++;
	}
	cout<<"\n\n\n\n\n";
	system("pause");
	return 0;
}

