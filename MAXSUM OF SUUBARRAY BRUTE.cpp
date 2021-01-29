#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT MAXIMUM SUM OF SUBARRAY WITH GIVEN  ARRAY (BRUTE) \n Enter Number Of Elements Of Array :- ";
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
    cout<<"\n\n\n\n";
    int maxs=INT_MIN;
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{  
		    int sum=0;
		    for(int k=i;k<=j;k++)
    		  sum=sum+a[k];
		   maxs=max(maxs,sum);
		}
	}
	cout<<"\nThe Maximum Sum Of Sub-Array is \n"<<maxs;
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

