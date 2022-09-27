/*
    -Pointers
        - A "variable-like" reference that holds a memory address to another variable, array etc.
        - Some tasks are performed more easily with pointers
        - "*" = indirection operator (value at address)
*/

#include <stdio.h>

void printAge(int age, int *pAge);

int main() 
{
    int age = 18;
    int *pAge = &age; // p and Capital first character for good practice

    printf("\n");
    
    printf("Value of age = %d\n", age);
    printf("Address of age = %p\n\n", &age);
    
    printf("Value of pAge = %p\n", pAge);
    printf("Value at stored address = %d\n\n", *pAge); // Dereferencing
    
    printf("Size of age = %d bytes\n", sizeof(age));
    printf("Size of pAge = %d bytes\n\n", sizeof(pAge));

    printAge(age, pAge);

    printf("\n");

    return 0;
}

void printAge(int age, int *pAge)
{
    printf("You are %d years old\n", age);
    printf("You are %d years old\n", pAge);
}