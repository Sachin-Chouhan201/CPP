#include<iostream>
using namespace std;

/*
             
    
	***************        
	**************       
	*************        
	************                 
	***********
	**********        
	*********        
	********  
	*******        
	******   
	*****      
	****
	**        
	*

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT INVERTED HALF PYRAMID PATTERN  \n Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
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

