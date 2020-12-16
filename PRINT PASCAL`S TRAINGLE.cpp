#include<iostream>
using namespace std;

/*


						 1
						1 1
					   1 2 1
					  1 3 3 1
		             1 4 6 4 1
		            1 5 6 6 5 1
		        						     					
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT PASCAL`S TRAINGLE \n";
	cout<<"Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int k=1;
	for(int i=0;i<=n;i++)
	{   
		for(int j=0;j<=n-i;j++)
	    {      
	    	cout<<" ";
    	}    
				 
		for(int j=0;j<=i;j++)
		{  
		    if(j==0||j==i)
			k=1;
			else
			k=k*(i-j+1)/j;
			cout<<k<<" ";	
		} 
	    	
	cout<<endl;			
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

