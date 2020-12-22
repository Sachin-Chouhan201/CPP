#include<iostream>
using namespace std;

int main()
{

int Q;
cout<<"\n  PROGRAM TO CHECK WHEATER A NUMBER IS ARMSTRING OR NOT   \n  Enter A Number :- ";
cin >> Q;
int sum=0,num=Q;

while(Q)
{
   int rem=Q%10;
   Q=Q/10;
   sum=sum+rem*rem*rem;
}

if(num==sum)
{
   cout<<"  It  Is Armstrong \n";
}
else
{
   cout<<"  It  Is Not Armstrong\n";
}
    return 0;
}
