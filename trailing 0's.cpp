// C program to illustrate builtin functions of 
// GCC compiler 
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int num = 4; 
	int clz = 0; 
	int ctz = 0; 
	int pop = 0; 
	int parity = 0; 

	pop = __builtin_popcount(num); 
	printf("Number of one's in %d is %d\n", num, pop); 

	parity = __builtin_parity(num); 
	printf("Parity of %d is %d\n", num, parity); 

	clz = __builtin_clz(num); 
	printf("Number of leading zero's in %d is %d\n", num, clz); 

	// It only works for unsigned values 
	clz = __builtin_clz(-num); 
	printf("Number of leading zero's in %d is %d\n", -num, clz); 

	ctz = __builtin_ctz(num); 
	printf("Number of trailing zero's in %d is %d\n", num, ctz); 

	return 0; 
} 

