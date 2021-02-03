#include<bits/stdc++.h>
using namespace std;

int main()
{
	system("cls");
	cout<<"\nPROGRAM TO PALINDROME OF A STRING ";
	char st[20];
	cout<<"\nEnter The String ";
	cin>>st;
	int s=0;
		cout<<"\n\n\n\n\n";
	for(s=0;st[s]!='\0';s++);
	for(int i=0;i<=s/2;i++)
	{
		if(st[i]!=st[s-i-1])
		{   cout<<i;
			cout<<"The Given String "<<st<<" Is Not A Plaindrome!!!!!!!";
			return 0;
		}
	}
	cout<<"The Given String "<<st<<" Is A Plaindrome";
	cout<<"\n\n\n\n\n";
	system("pause");
	return 0;
}

