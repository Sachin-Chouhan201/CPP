#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM FOR INSERTION SORT IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";
	
    cout<<"\nThe Element Of Array Are ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" ";        

    cout<<"\n\n\n\n";
	cout<<"\nUsing Selection Sort ";
	for(int  i=0;i<n;i++)
	{
		int cr=arr[i];
		int j=i-1;
		while(arr[j]>cr&&j>=0)
		{
				arr[j+1]=arr[j];
				j--;
		}
		arr[j+1]=cr;
	    cout<<"\nThe Element Of Array Are In "<<i+1<<" Iteration Is ";
     	for(int k=0;k<n;k++)
	        cout<<arr[k]<<" ";        
	    cout<<"\n\n\n";	
	}
    cout<<"\nThe Element Of Array Are In Sorted Order ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" ";        
    cout<<"\n\n\n";	
    cout<<"\n\n\n";	
    system("pause");
	return 0;
}

