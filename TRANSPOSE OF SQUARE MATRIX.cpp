#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO PRINT MATRIX TRANSPOSE A 2-DIMENSIONAL(2-D) ARRAY ";
	int n;
	cout<<"\nEnter The Order of Square Matrix ";
	cin>>n;
    int a[n][n];	
	cout<<"Enter The "<<n*n<<" Elements of The Matrix\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<n;j++)
        {
      		cin>>a[i][j];
		}
	}
	cout<<"\n\n\n\n\n";
	cout<<"The "<<n*n<<"The Original Matrix is\n";
	for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<n;j++)
        {
      		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
		for(int i=0;i<n;i++)
	{ 
        for(int j=i+1;j<n;j++)
        {  
			int temp=a[i][j];
      		a[i][j]=a[j][i];
      		a[j][i]=temp;
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	cout<<"The Matrix Transpose Is \n";
		for(int i=0;i<n;i++)
	{ 
        for(int j=0;j<n;j++)
        {
      		cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	cout<<"\n\n\n\n\n";
	system("pause");
	return 0;
}

