#include <iostream>

int main()
{
    std::cout << std::endl;

    int myVar = 10;
    std::string myString = "myVar: " + std::to_string(myVar);
    std::cout << myString << std::endl;

    int *ptr = &myVar;
    *ptr = 20;
    std::cout << "ptr: " << ptr << std::endl;
    std::string myString2 = "myVar: " + std::to_string(myVar);
    std::cout << myString2 << std::endl;

    int **ptr2 = &ptr;
    **ptr2 = 30;
    std::string myString3 = "myVar: " + std::to_string(myVar);
    std::cout << myString3 << std::endl;

    return 0;
}
