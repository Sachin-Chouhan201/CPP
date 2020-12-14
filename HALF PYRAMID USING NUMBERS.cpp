#include<iostream>
using namespace std;

/*
             
    1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	1 2 3 4 5 6
	1 2 3 4 5 6 7
	1 2 3 4 5 6 7 8
	        

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT HALF PYRAMID PATTERN USING NUMBERS  \n Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
	    {   
		    cout<<j+1<<" ";
    	}
		cout<<endl;			
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

