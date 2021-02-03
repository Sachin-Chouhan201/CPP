#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO PRINT LONGEST WORD IN SENTENCE OF A STRING ";
    int n;
	cout<<"\nEnter The number of elements ";
    cin>>n;
    cin.ignore();
	char st[n];//[50];
	cout<<"\nEnter The String ";
//	int j=0;
/*	do
	{
		cin>>st[j];
		j++;
	}while(st[j]!='\0');
*/
    cin.getline(st,n);
    cin.ignore();
	cout<<"\n\n\n\n\n";
	int i=0,currlen=0,maxlen=0,start=0,maxst=0;
	
	while(i<n)//check code wrong
	{
		if(st[i]==' '||st[i]=='\0')
		{
			if(currlen>maxlen)
			{
		     maxlen=currlen;
		     maxst=start;
	     	}
			currlen=0;
			start=i+1;
		}
		else 
		   currlen++;
		if(st[i]=='\0')
		{
			break;
		}
		i++;
	}
	cout<<"In The Given String '"<<st;
	cout<<"' Longest Word Is "<<maxlen<<endl;
	cout<<"The Word is - '";
	for(i=0;i<maxlen;i++)
	{
		cout<<st[maxst+i];
	}
	cout<<"'\n\n\n\n\n";
	system("pause");
	return 0;
}

