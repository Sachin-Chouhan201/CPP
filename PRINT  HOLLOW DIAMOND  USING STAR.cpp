#include<iostream>
using namespace std;

/*
             		 
					  *
					 * *
					*   *    
	        	   *     *
                  *		  *
                 *		   *
				*			*    
		       *			 *
			  *				  *        
			 *				   *
			*         			*      
		   *					 *
		  *						  *
		 *						   *
	    *							*
	   *							 *
	  *								  *
	 *							       *
	 *							       *
	  * 							  *
	   *							 *
	    *                           *
		 *						   *
		  *						  *
	       *					 *
	        *                   *
	         *				   *
	          *			      *
	           *			 *
	    	    *			*   
	             *		   *
				  *   	  *
				   *	 *
				    *   *
				     * *
				      *
					 					  
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT HOLLOW DIAMOND USING STAR   \n";
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
    	
		for(int j=0;j<=2*i;j++)           //FOR STARS
	    {   if((j==0)||(j==2*i))
		    cout<<"*";  
			else
			cout<<" ";  
    	}		
	cout<<endl;			
	}
	cout<<" ";	
	for(int i=n;i>0;i--)
	{
	   for(int j=1;j<2*i;j++)           //FOR STARS
	    {   
	        if((j==1)||(j==(2*i-1)))
		    cout<<"*";  
			else
			cout<<" "; 
	    
    	}
    	cout<<endl;
    	cout<<"  ";
    	for(int j=0;j<n-i;j++)           //FOR SPACES 
	    {
	    	cout<<" ";   
    	}			
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

