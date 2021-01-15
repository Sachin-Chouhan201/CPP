#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM FOR LINEAR SEARCH IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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
    for(int i=0;i<n;i++)
	{  
		if(x==arr[i])
		{
			cout<<"\nElement Of Array Is Found At Index "<<i<<"  And positon "<<i+1<<" the element is "<<arr[i];
			return 0;
		}
	}
	cout<<" Elements of Array Is Not Found ";
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

