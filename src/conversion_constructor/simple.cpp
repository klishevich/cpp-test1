#include <iostream> 

class MyClass { 
	int a, b; 

public: 
	MyClass(int i) 
	{ 
		a = i; 
		b = i; 
	} 
	void display() 
	{ 
		std::cout << " a = " << a << " b = " << b << "\n"; 
	} 
}; 

int main() 
{ 
	MyClass object(10); 
	object.display(); 

	// Single parameter conversion constructor is invoked. 
	object = 20; 
	object.display(); 
	return 0; 
} 
