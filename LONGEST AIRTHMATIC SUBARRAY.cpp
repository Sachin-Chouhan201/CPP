#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO LONGEST AIRTHMATIC SUBARRAY IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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

    cout<<"\n\n\n\n ";
	int pd=a[1]-a[0];
	int cr=2;
	int ans=INT_MIN;
    for(int i=2;i<n;i++)
	{       
	    if(pd==a[i]-a[i-1])
		{
		 
		  cr++;     
	    }
	    else
	    {   
	    	cr=2;
	    	pd=a[i]-a[i-1];
		}
	     ans=max(ans,cr);
	}
	cout<<ans<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

