#include <stdio.h> 
#define INCREMENT(x) ++x 
int main() 
{ 
	// char *ptr = (char*)"GeeksQuiz"; 
	char const *ptr = "GeeksQuiz";
	int x = 10; 
	printf("%s ", INCREMENT(ptr)); 
	printf("%d", INCREMENT(x)); 
	return 0; 
} 
