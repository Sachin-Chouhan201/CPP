#include<iostream>
#include<climits>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT MAX AND MIN ELEMENT OF ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";
	int ma=INT_MIN,mi=INT_MAX;
	for(int i=0;i<n;i++)
	{
		ma=max(ma,arr[i]);
		mi=min(mi,arr[i]);
	}
	cout<<"Maximum Number "<<ma<<"\nMinimum Number "<<mi<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

