#include <stdio.h>

#define square(x) x*x
int main()
{
	// Expanded as 36/6*6 ->6*6 ->36
	int x = 36/square(6);     //otput is 36
	printf("%d\n", x);
	// Expanded as 36/(6*6) ->36/36 ->1
	x = 36/(square(6)); 
	printf("%d", x);          //output is 1
	return 0;
}

