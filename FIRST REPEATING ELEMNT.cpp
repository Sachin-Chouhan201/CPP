#include<bits/stdc++.h>
using namespace std;
int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO FIND FIRST REPEATING ELEMNT IN AN ARRAY  \n Enter Number Of Elements Of Array :- ";
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
        b[i]=-1;
        int ans=INT_MAX;;
    for(int i=0;i<n;i++)
	{       
	    if(b[a[i]]!=-1)
		{
		      ans=min(b[a[i]],ans);
	    }
	    else
	    {   
			b[a[i]]=i;    	
		}
	     
	}
	cout<<a[ans]<<endl;
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

