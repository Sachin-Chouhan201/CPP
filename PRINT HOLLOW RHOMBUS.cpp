#include<iostream>
using namespace std;

/*
             
          ***********
	     *		   *
	    *		  *
	   *		 *
	  *			*
	 *	       *
	***********

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT A HOLLOW RHOMBUS  \n Enter The Number OF Row  ";
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
		    if(i==0||i==n-1||j==0||j==n-1)
		    cout<<"*";
		    else
		    cout<<" ";
    	}
		cout<<endl;		
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

