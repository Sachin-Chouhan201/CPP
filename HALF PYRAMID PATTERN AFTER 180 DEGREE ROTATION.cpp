#include<iostream>
using namespace std;

/*
             		 
					  
					 *	
					***    
	        	   *****
                  *******
                 *********
				************    
		       ***************
			  *****************        
			 *******************
			*********************      
		   ***********************
		  *************************
		 ***************************
	    *****************************
	   *******************************
	  *********************************
	  *********************************
	   *******************************
	    *****************************
		 ***************************
		  *************************
	       ***********************
	        *********************
	         *******************
	          *****************
	           ***************
	    	    *************   
	             ***********
				  *********
				   *******
				    *****
				     ***
				      *
					 					  
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT  HALF PYRAMID PATTERN AFTER 180 DEGREE ROTATION  \n";
	cout<<"Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)           //FOR SPACES 
	    {
	    	cout<<" ";   
    	}
    	
		for(int j=0;j<=i;j++)           //FOR STARS
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
