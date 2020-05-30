#include <iostream> 
// extended initializer lists or braced-init-lists

class MyClass { 
	int a, b; 

public: 
	MyClass(int i, int y) 
	{ 
		a = i; 
		b = y; 
	} 
	void display() 
	{ 
		std::cout << " a = " << a << " b = " << b << "\n"; 
	} 
}; 

int main() 
{ 
	MyClass object(10, 20); 
	object.display(); 

	// Multiple parameterized conversion constructor is invoked. 
	object = { 30, 40 }; 
	object.display(); 
	return 0; 
} 
