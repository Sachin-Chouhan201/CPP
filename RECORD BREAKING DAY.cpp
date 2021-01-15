#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO FIND RECORD BREAKING DAY  \n Enter Total Number Of Elements  :- ";
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
    if(n==1)
    {
    	cout<<"1"<<endl;
		return 0;
	}
	int mx=-1,ans=0;
    for(int i=0;i<n;i++)
	{       
	    if(a[i]>mx&&a[i]>a[i+1])
		{
		      ans++;
	    }
	     mx=max(a[i],mx);
	}
	cout<<ans<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

