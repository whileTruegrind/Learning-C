/*
    - ARITHMETIC OPERATORS
        -- + (addition)
        -- - (subtraction)
        -- * (multiplication)
        -- / (division)
        -- % (modulus = divides and gives remainder)
        -- ++ (increment)
        -- -- (decrement)
*/

#include <stdio.h>

int main() 
{
    int a = 100;
    int b = 10;
    float c = 3;

    int z = a+b;
    
    int y = a/c;
    float x = a/c; // using float to get decimal

    printf("a + b = %d\n", z);
    
    printf("a/c = %d\n", y); // Does not display decimal, rounds off to floor
    printf("a/c = %f\n", x); // Displays decimal point till limit of float and then rounds off

    b++; // 1 inc
    a--; // 1 dec

    printf("a and b now: a = %d & b = %d",a,b);

    return 0;
}