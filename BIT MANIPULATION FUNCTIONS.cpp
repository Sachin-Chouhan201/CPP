#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
	//return(n>>pos)&1;	alernative method
	return(n&(1<<pos)!=0);
}



int setBit(int n,int pos)
{
	return(n|(1<<pos));
}



int usetBit(int n,int pos)
{	
	if(pos<0) return n;
	return(n&~(1<<pos));
}



int clearBit(int n,int pos)
{
	int mask=~(1<<pos);
	return n&mask;
}



int updateBit(int n,int pos,int value)
{
	int mask=~(1<<pos);
	n= n&mask;				//clear bit
	return(n|(value<<pos));     //set bit
}



int toggelBit(int n,int pos)
{
	return (n xor(1<<pos));	//xor=^ pre defined
} 

int main()
{
	system("cls");
	cout<<"\nPROGRAM  ";
	cout<<"\n\n\n\n\n";
	//get ith BIT
	//   5->101 = 1
	cout<<"Get BIT OF 5 At position 2 -> "<<getBit(5,2)<<endl;
	cout<<"\n\n\n\n\n";
	//set ith BIT
	//   9->1001= 1101(13)
	cout<<"Set BIT OF 13 At position 2 -> "<<setBit(9,2)<<endl;
	cout<<"\n\n\n\n\n";
	//uset ith BIT
	//  21->10101 = 10001(17)
	cout<<"Uset BIT OF 21 At position 2 -> "<<usetBit(21,2)<<endl;
	cout<<"\n\n\n\n\n";
	//clear ith BIT
	//  5->0101 ,pos=2->0010,=0001
	cout<<"clear BIT OF 5 At position 2 -> "<<clearBit(5,2)<<endl;
	cout<<"\n\n\n\n\n";
	//update ith BIT
	//  5->0101 ,pos->1,=0111(7)
	cout<<"update BIT OF 5 At position 1 to 1 -> "<<updateBit(5,1,1)<<endl;
	cout<<"\n\n\n\n\n";
	//toggel ith BIT
	//  5->0101 ,pos->1=10101(7)  turn 0to 1 and vice-versa
	cout<<"Toggel BIT OF 5 At position 3  -> "<<toggelBit(5,3)<<endl;
	cout<<"\n\n\n\n\n";
	
	system("pause");
	return 0;
}

