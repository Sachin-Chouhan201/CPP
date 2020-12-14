#include<iostream>
using namespace std;

/*
   	          						1
   	          					2	1	2
    	    			    3	2	1	2	3
  			    	    4   3 	2	1	2	3	4			
    				5   4   3 	2	1	2	3	4	5	
    		 	6	5   4   3 	2	1	2	3	4	5	6	
    		7   6	5	4   3	2	1	2	3	4	5	6	7
    	8	7   6	5	4   3	2	1	2	3	4	5	6	7	8
 	9	8  	7	6	5   4   3	2	1	2	3	4	5	6	7	8	9
*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT  PATTERN PALIDROMIC PATTERN \n";
	cout<<"Enter The Number OF Rows ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n-i;j++)
	    {      
	    	cout<<"  ";
    	}    		 
		for(int j=i;j>1;j--)
		{
			cout<<j<<" ";	
		} 
		for(int j=0;j<i;j++)
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

