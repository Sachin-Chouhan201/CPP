#include<iostream>
using namespace std;

/*
             
          ***********
	     ***********
	    ***********
	   ***********
	  ***********
	 ***********
	***********

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT A SOLID RHOMBUS  \n Enter The Number OF Row  ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
	    { 
		    cout<<" ";
    	}
    	
		for(int j=0;j<n;j++)
	    {   
		    cout<<"*";
    	}
		cout<<endl;		
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

