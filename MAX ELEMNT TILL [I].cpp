#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO FIND MAX ELEMNT TILL [I] IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";
	
    cout<<"\nThe Element Of Array Are \n\n ";
	for(int i=0;i<n;i++)
	       cout<<arr[i]<<" \t";        

    cout<<"\n\n\n\n ";
	int mx=INT_MIN;
    for(int i=0;i<n;i++)
	{       
	    mx=max(mx,arr[i]);     
	    cout<<mx<<" \t";
	}
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

