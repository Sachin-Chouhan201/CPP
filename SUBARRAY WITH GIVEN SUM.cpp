#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO FIND SUBARRAY WITH GIVEN SUM IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
	int n,s;
	cin>>n>>s;
	
	int a[n];
	cout<<"Enter "<<n<<" Elements Of Array ";
	for(int i=0;i<n;i++)
	       cin>>a[i];
		     
	cout<<"\n\n\n";
	
    cout<<"\nThe Element Of Array Are \n ";
	for(int i=0;i<n;i++)
	       cout<<a[i]<<" \t";        

    cout<<"\n\n\n\n ";
    int i=0,j=0,st=-1,en=0,sum=0;
    while(j<n&&sum+a[j]<=s)
    {
    	sum+=a[j];
    	j++;
	}
	if(sum==s)
	{
		cout<<i+1<<" "<<j+1<<endl;
		return 0;
	}
	while(j<n)
    {
    	sum+=a[j]; 
		while(sum>s)
		{
			sum=sum-a[i];
			i++;
			if(sum==s)
			{
	    		st=i+1;
	    		en=j+1;
	    		break;
			}
			j++;
  		 }
		
	}
		cout<<st<<" "<<en<<endl;	
	cout<<"\n\n\n";
    system("pause");
	return 0;
}

