#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO PRINT MATRIX MULTIPLICATION OF 2-DIMENSIONAL(2-D) ARRAY ";
	int n1,n2,m1,m2;
	cout<<"\nEnter The Order of 1st Matrix ";
	cin>>n1>>m1;

	int a[n1][m1];
	cout<<"Enter The "<<n1*m1<<" Elements of The Matrix-I \n";
	for(int i=0;i<n1;i++)
	{ 
        for(int j=0;j<m1;j++)
        {
      		cin>>a[i][j];
		}
	}
	cout<<"\n\n\n\n\n";

    cout<<"\nEnter The Order of 2nd Matrix ";
	cin>>n2>>m2;
	
	
	int b[n2][m2];
	cout<<"Enter The "<<n2*m2<<" Elements of The Matrix-II \n";
	for(int i=0;i<n2;i++)
	{ 
        for(int j=0;j<m2;j++)
        {
      		cin>>b[i][j];
		}
	}
	cout<<"\n\n\n\n\n";
		
	if(m1!=n2)
	{
		cout<<"\nThe Multipication Of The Two Matrix is Not Posible!!!!! ";
		system("pause");
		return 0;
	}
	
	cout<<"The "<<n1*m1<<" Elements of The Matrix-I is\n";
	for(int i=0;i<n1;i++)
	{ 
        for(int j=0;j<m1;j++)
        {
      		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	cout<<"The "<<n2*m2<<" Elements of The Matrix-II is\n";
	for(int i=0;i<n2;i++)
	{ 
        for(int j=0;j<m2;j++)
        {
      		cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	
	int c[n1][m2];
	for(int i=0;i<n1;i++)
	{ 
        for(int j=0;j<m2;j++)
        {
      		c[i][j]=0;
		}
		cout<<endl;
	}
	
	for(int i=0;i<n1;i++)
	{ 
        for(int j=0;j<m2;j++)
        {
			for(int k=0;k<m1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		cout<<endl;
	}
	
	
    cout<<"\n\n\n\n\n";
	cout<<"The Matrix Multiplication is \n";
	for(int i=0;i<n1;i++)
	{ 
        for(int j=0;j<m2;j++)
        {
      		cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	cout<<"\n\n\n\n\n";
	system("pause");
	return 0;
}

