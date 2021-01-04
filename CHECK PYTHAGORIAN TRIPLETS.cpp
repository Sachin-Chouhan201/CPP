#include<iostream>
using namespace std;

bool py(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
		   if((a*a)==(b*b+c*c))
		     return true;
		   else return false;	 	
		}
		else
		{
			if((c*c)==(b*b+c*c))
		          return true;
		    else return false;
			
		}
	}
	else
	{
	  	if(b>c)
		{
		 
			if((b*b)==(a*a+c*c))
		           return true;
     		 else return false;
		}
		else
		{
			
			if((c*c)==(a*a+b*b))
		          return true;
		    else return false;
			
		}
	
		
	}
}

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CHECK PYTHAGORIAN TRIPLETS \n EnterT hree Nubmer :- ";
	int a,b,c;
	cin>>a>>b>>c;
	if(py(a,b,c))
    cout<<"\n\n\n\n"<<a<<" "<<b<<" "<<c<<" Are Pythagoria`s Triplets  ";
	else
	cout<<"\n\n\n\n"<<a<<" "<<b<<" "<<c<<" Are Not Pythagoria`s Triplets !!!! ";
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

