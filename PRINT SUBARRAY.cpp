#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT SUBARRAY WITH GIVEN  ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>a[i]; 
	cout<<"\n\n\n";
	
    cout<<"\nThe Element Of Array Are \n ";
	for(int i=0;i<n;i++)
	       cout<<a[i]<<" \t";        

    cout<<"\n\n\n\n ";
    cout<<"\nThe Element Of Sub-Array are \n";
    cout<<"\n\n\n\n";
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{  
		    cout<<"->  ";
		    for(int k=i;k<=j;k++)
    		  cout<<a[k]<<"  ";
		cout<<"\t";   
		}
		cout<<endl;
	}
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

