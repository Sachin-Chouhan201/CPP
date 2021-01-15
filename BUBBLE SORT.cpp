#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM FOR BUBBLE SORT IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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
	cout<<"\nUsing Bubble Sort ";
	for(int  i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	    cout<<"\nThe Element Of Array Are In "<<i+1<<" Iteration Is ";
     	for(int k=0;k<n;k++)
	        cout<<arr[k]<<" ";        
	    cout<<"\n\n\n";	
    
	
	}
    cout<<"\nThe Element Of Array Are In Sorted Order ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" ";        

    system("pause");
	return 0;
}

