#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM FOR STDL SORT IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";	
	sort(arr,arr+n);
    cout<<"\nThe Element Of Array Are In Sorted (ASENDING) Order ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" ";  
	cout<<"\n\n\n";	    
	sort(arr,arr+n,greater<int>());
    cout<<"\nThe Element Of Array Are In Sorted (DECENDING) Order ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" ";         
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

