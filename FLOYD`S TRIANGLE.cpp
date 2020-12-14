#include<iostream>
using namespace std;

/*
             
    1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT FLOYD`S TRIANGLE  \n Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
    int a=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
	    {   
		    cout<<a<<" ";
		    a++;
    	}
		cout<<endl;			
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

