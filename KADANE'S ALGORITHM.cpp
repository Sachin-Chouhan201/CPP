#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT MAX SUM OF SUBARRAY WITH GIVEN  ARRAY (KADANE'S ALGORITHM )  \n Enter Number Of Elements Of Array :- ";
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

    int maxsum=INT_MIN;
	int currsum=0;
    cout<<"\n\n\n\n ";
    for(int i=0;i<n;i++)
    {
		currsum=a[i]+currsum;
		if(currsum<0)
		{
			currsum=0;
		}
		maxsum=max(maxsum,currsum);
		
	}
    cout<<"\nThe Max Sum of Element Of Sub-Array "<<maxsum;
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

