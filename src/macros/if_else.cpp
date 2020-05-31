#include <stdio.h>
#include <iostream>
// #define TEST_MACROS

int main() 
{
	#if (defined( TEST_MACROS ))
	int var = 20;
	#else
	int var = 21;
	#endif
	
	printf("Value at prt = %d \n", var);
} 
