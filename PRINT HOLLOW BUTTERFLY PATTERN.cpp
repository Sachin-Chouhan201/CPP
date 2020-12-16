#include<iostream>
using namespace std;

/*
             
    *					   *
	**					  **
	* *					 * *
	*  *				*  *
	*	*			   *   *
	*	 *			  *	   *
	*	  *			 *	   *
	*	   *	    *      *    
	*		*      *	   *       
	*		 *    *        *  
	*		  *  *		   * 
	*		   **		   *        
	*		   **		   *
	*         *  *		   *
	*		 *    *		   * 
	*		*	   *	   *    
	*	   *        *	   * 
	*	  *			 *	   *
	*    *			  *	   *   
	*   *			   *   * 
	*  *				*  *
	* * 				 * *
	**					  **
	*					   *
	
	
	
	
	   
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT HOLLOW BUTTERFLY PATTERN  \n Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
	    {   
	        if(i<2||j==0||j==i)
		    cout<<"*";
		    else
		    cout<<" ";
    	}
    	
    	for(int j=2;j<(2*(n-i));j++)
	    {   
		    cout<<" ";
    	}
    	
    	for(int j=0;j<=i;j++)
	    {   
		    if(i<2||j==0||j==i)
		    cout<<"*";
		    else
		    cout<<" ";
    	}
		cout<<endl;			
	}
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
	    {   
		   if(i<2||j==0||j==i)
		    cout<<"*";
		    else
		    cout<<" ";
    	}
    	
    	for(int j=2;j<(2*(n-i));j++)
	    {   
		    cout<<" ";
    	}
    	
    	for(int j=0;j<=i;j++)
	    {   
		    if(i<2||j==0||j==i)
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

