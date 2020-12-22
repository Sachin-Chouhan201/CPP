#include<iostream>
using namespace std;

int main()
{

int Q;
cout<<"\n  PROGRAM TO CHECH WHEATER A NUMBER IS PRIME OR NOT   \n  Enter A Number :- ";
cin >> Q;
bool flag = true;
for (int i = 2; i * i <= Q; i++)
{
   if (Q % i == 0) 
   {
        flag =false;
         break;
   }
}
if(Q<=1)
{ 
   cout<<"  Prime\n";
}
if(flag)
{
   cout<<"  Prime\n";
}
else
{
   cout<<"  Not Prime\n";
}
    return 0;
}
