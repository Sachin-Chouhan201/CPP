
#include<iostream>
using namespace std;

bool isprime(int n)
{
	if(n<=1) return 0;
	if(n==2||n==3)  return 1;
	if(n%2==0||n%3==0) return 0;
	for(int i=5;i*i<n;i+=6)
	   if(n%i==0||n%(i+2)==0) return 0;
	return 1;	
}
int main()
{
	system("cls");
	cout<<"\nOPTIMISED APPROACH TO CHECK A NUMBER IS PRIME OR NOT";
	int n;
	cout<<"\nEnter A Number To Check For Prime OR Not  ";
	cin>>n;
	if(isprime(n))cout<<"\nThe Given Number @@ "<<n<<" @@ Is Prime \n\n\n\n";
	else 		  cout<<"\nThe Given Number "<<n<<" Is Not Prime !!!! \n\n\n\n";
	system("pause");
	return 0;
}
