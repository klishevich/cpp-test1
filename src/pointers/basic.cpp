#include <stdio.h>

void geeks()
{
    int var = 20;
    int *ptr;
    ptr = &var;

    printf("Value at prt = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}

int main()
{
    geeks();
}
