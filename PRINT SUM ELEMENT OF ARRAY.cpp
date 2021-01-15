#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT SUM ELEMENT OF ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n;
	int sum;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>arr[i];  
	cout<<"\n\n\n";
    cout<<"\N Elements Of Array Are \n";
	for(int i=0;i<n;i++)
	{  
	  sum=sum+arr[i];
	  cout<<arr[i]<<" ";
	}
	cout<<"\nSum Of Elements of Array Is "<<sum;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

