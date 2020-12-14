#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n PROGRAM FOR CALCULATOR  \n Enter 2 Number ";
	int n1,n2;
	cin>>n1>>n2;
	cout<<"\n Enter The Operator  ";
	char op;
	cin>>op;
	switch(op)
	{
		case '+':
			     cout<<"SUM OF TWO NUMBER IS "<<n1+n2<<endl;
				 break;
     	case '-':
			     cout<<"SUBTRACTION OF TWO NUMBER IS "<<n1-n2<<endl;
				 break;	
		case '*':
			     cout<<"PRODUCT OF TWO NUMBER IS "<<n1*n2<<endl;
				 break;		
		case '/':
			     if(n2!=0)
			     cout<<"DIVISION OF TWO NUMBER IS "<<n1/n2<<endl;
			     else
			     cout<<"DIVISON OF NUMBER IS NOT POSSIBLE "<<endl;
				 break;	
		case '%':
			     cout<<"REMINDER OF TWO NUMBER IS "<<n1%n2<<endl;
				 break;			 
		default :
				 cout<<"\nPLEASE ENTER A VALID OPERATOR "<<endl;
				 break;			 
	}	
	system("pause");
	return 0;
}

