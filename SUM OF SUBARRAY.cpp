#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT SUM OF SUBARRAY IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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

    cout<<"\n\n\n\nSum Of The Subarray Are :- ";
	int SUM=0;
    cout<<"\n\n\n ";
    for(int i=0;i<n;i++)
	{  SUM=0;     
	   for(int j=i;j<n;j++)
	   {
	      SUM+=arr[j];     
	      cout<<SUM<<" \t";
	   }
	}
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

