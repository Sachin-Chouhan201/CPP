#include<bits/stdc++.h>
using namespace std;
class student
{
	int rno; 
	string name;
	int m1,m2,m3,sum;
	public:
	
	void getData()             //funtion for input data
	{
		cout<<"\n Enter Your Name     ";
	//	cin>>name;
		getline(cin,name);
		cin.ignore();
		cout<<"\n Enter Your Roll No  ";
		cin>>rno;
		cin.ignore();
		cout<<"\n Enter Marks of subject- 1  ";
		cin>>m1;
		cin.ignore();
		cout<<"\n Enter Marks of subject- 2  ";
		cin>>m2;
		cin.ignore();
		cout<<"\n Enter Marks of subject- 3  ";
		cin>>m3;
		cout<<"\n\n\n";
    } 
    
	void showData()			//function for outputting data
	{	
	    cal();
		cout<<"\n Name is\t"<<name<<endl;
		cout<<"\n Roll no is\t"<<rno<<endl;
		cout<<"\n Marks of subject -1\t"<<m1<<endl;
		cout<<"\n Marks of subject -2\t"<<m2<<endl;
		cout<<"\n Marks of subject -3\t"<<m3<<endl;
		cout<<"\n The Sum of 3 subject marks is "<<sum<<endl;
		cout<<"\n The Avrage Marks are \t"<<sum/3<<endl<<endl;
	}	
	
    void cal()			//function for calculating sum
    {
			sum=0;    	
    		sum =m1+m2+m3;
	 	
	}
	
};

int main()
{	
	system("cls");
	student x; 
	x.getData(); 
	x.showData();
	system("pause");
	return 0;
}
