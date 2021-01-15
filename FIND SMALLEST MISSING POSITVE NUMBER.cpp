#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO FIND FIND SMALLEST MISSING POSITVE NUMBER IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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
    int b[n];
    for (int  i=0;i<n;i++)
        b[i]=0;
    for(int i=0;i<n;i++)
	{       
	    if(a[i]&&b[a[i]]!=-1)
		{
		      b[a[i]]=1;
	    }   
	}
	int ans=-1;
	for(int i=1;i<n;i++)
	{       
	    if(b[i]==0)
		{
			ans=i;
			break;
	    }   
	}
	cout<<ans<<endl;
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

