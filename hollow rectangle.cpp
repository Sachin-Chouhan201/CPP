#include<iostream>
using namespace std;

/*
             
    ***********
	*		  *
	*		  *
	*		  *
	*         *
	*         *
	*         *
	*         *
	*		  *
	***********        

*/
int main()
{
	system("cls");
	cout<<"\n PROGRAM TO PRINT A HOLLOW RECTANGLE  \n Enter The Number OF Row And Columns ";
	int r,c;
	cin>>r>>c;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
	    {   if(i==0||i==r-1||j==0||j==c-1)
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

