#include<iostream>
using namespace std;

int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO PRINT FACTORIAL OF A NUMBER  \n Enter A Number :- ";
	int n;
	cin>>n;
	int num=n;
	int fac=1;
    cout<<endl<<endl<<endl;
	while(n)
    {
        fac=fac*n;
		n--;	
	}
    cout<<"  Factorial OF The "<<num<<"! is "<<fac<<endl<<endl<<endl;
	system("pause");
	return 0;
}

