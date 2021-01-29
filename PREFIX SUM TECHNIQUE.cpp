#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT MAX SUM SUBARRAY WITH GIVEN  ARRAY (PREFIX SUM TECHNIQUE)  \n Enter Number Of Elements Of Array :- ";
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

    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++)
    {
    	currsum[i]=currsum[i-1]+a[i-1];
	}
	int maxsum=INT_MIN;
    cout<<"\n\n\n\n";
    for(int i=1;i<=n;i++)
    {
    	int sum=0;
    	for(int j=0;j<n;j++)
    	{  
		     sum=currsum[i]-currsum[j];
			 maxsum=max(maxsum,sum); 
		}
		cout<<endl;
	}
    cout<<"\nThe Maximum-Sum Element Of Sub-Array is "<<maxsum;
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

