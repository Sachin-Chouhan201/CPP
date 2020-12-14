#include<iostream>
using namespace std;

/*
             
    1
	0 1
	1 0 1
	0 1 0 1
	1 0 1 0 1
	0 1 0 1 0 1 
	1 0 1 0 1 0 1
	0 1 0 1 0 1 0 1	
	1 0 1 0 1 0 1 0 1
	0 1 0 1 0 1 0 1 0 1        

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT 0-1 PATTERN   \n Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
	    {   if((i+j)%2==0)
		    cout<<"1 ";
		    else
		    cout<<"0 ";
    	}
		cout<<endl;			
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

