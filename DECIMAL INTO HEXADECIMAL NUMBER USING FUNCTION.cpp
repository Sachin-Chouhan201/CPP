#include<iostream>

using namespace std;

// function to convert decimal to hexadecimal 
void decToHexa(int n) 
{    
    // char array to store hexadecimal number 
    char hexaDeciNum[100]; 
    int num=n;  
    // counter for hexadecimal number array 
    int i = 0; 
    while(n!=0) 
    {    
        // temporary variable to store remainder 
        int temp  = 0; 
          
        // storing remainder in temp variable. 
        temp = n % 16; 
          
        // check if temp < 10 
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
      
    cout<<"The Decimal Number "<<num<<" In Hexadecimal Number is ";
    // printing hexadecimal number array in reverse order 
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNum[j]; 
} 


int main()
{
	system("cls");
	cout<<"\n  PROGRAM TO CONVERT DECIMAL INTO HEXADECIMAL NUMBER USING FUNCTION \n Enter Decimal Any NUMBER :- ";
	int n;
	cin>>n;  
	cout<<"\n\n\n";
	decToHexa(n);
    cout<<"\n\n\n";
    system("pause");
	return 0;
}

