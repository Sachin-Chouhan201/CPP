#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
	 int maxsum=INT_MIN;
	int currsum=0;
   
    for(int i=0;i<n;i++)
    {
		currsum=a[i]+currsum;
		if(currsum<0)
		{
			currsum=0;
		}
		maxsum=max(maxsum,currsum);
	}
	return maxsum;
}
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT MAXIMUM CIRCULAR SUBARRAY SUM WITH GIVEN  ARRAY (USING KADANE'S ALGORITHM )  \n Enter Number Of Elements Of Array :- ";
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
    int wrapsum,nonwrapsum;
	nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
    	totalsum+=a[i];
    	a[i]=-a[i];
    	
    	
	}
	wrapsum=totalsum+kadane(a,n);
    cout<<"\n\n\n\n ";
    cout<<"\nThe Max Sum of Element Of Sub-Array "<<max(wrapsum,nonwrapsum);
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

