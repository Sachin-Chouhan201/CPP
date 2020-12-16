#include<iostream>
using namespace std;

/*


						 1
						2 2
					   3 3 3
					  4 4 4 4
		             5 5 5 5 5
		            6 6 6 6 6 6
		           7 7 7 7 7 7 7
		          8 8 8 8 8 8 8 8
		         9 9 9 9 9 9 9 9 9
						     					
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT PYRAMID PATTERN FOR NUMBER\n";
	cout<<"Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{   
		for(int j=0;j<=n-i;j++)
	    {      
	    	cout<<" ";
    	}    
				 
		for(int j=0;j<i;j++)
		{
			cout<<i<<" ";	
		} 
	    	
	cout<<endl;			
	}	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

