#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int x)
{
	int s=0,e=n;
	while(s<=e)
	{
		int m=(s+e)/2;
		if(arr[m]==x)
		{
			return m;
		}
		else if(arr[m]>x)
		{
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	return -1;
}
int main()
{
	system("cls");
	cout<<"\n  PROGRAM FOR BINARY SEARCH SEARCH IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	int x;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";
    cout<<"\nEnter The Element to be Searched ";
	cin>>x;	       
	cout<<"\n\n\n";
	cout<<binarysearch(arr,n,x);
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

