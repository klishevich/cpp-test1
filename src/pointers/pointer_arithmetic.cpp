#include <iostream>
using namespace std; 
void geeks() 
{ 
	//Declare an array 
	int v[3] = {10, 100, 200}; 
	
	//declare pointer variable 
	int *ptr; 
	
	//Assign the address of v[0] to ptr 
	ptr = v; 
	
	for (int i = 0; i < 3; i++) 
	{ 
			cout << "Value at ptr = " << ptr << "\n"; 
			cout << "Value at *ptr = " << *ptr << "\n"; 
			
			// Increment pointer ptr by 1 
			ptr = ptr + 1; 
	} 
} 

//Driver program 
int main() 
{ 
	geeks(); 
} 
