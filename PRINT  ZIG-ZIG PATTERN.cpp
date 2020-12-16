#include<iostream>
using namespace std;

/*
   

			              
	1	    *	*   *   *
	2	   * * * * * * * *
	3	  *   *   *   *   *   
                                            		                                            
*/

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT  ZIG-ZIG PATTERN \n  Enter The Number OF Rows  ";
	int n;
	cin>>n;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i+j)%4==0||((i==2)&&((j)%4==0)))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

