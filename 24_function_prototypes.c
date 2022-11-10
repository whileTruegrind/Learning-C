/*
    - FUNCTION PROTOTYPES
        -- WHAT IS IT?
            --- Function declaration , w/o a body, before main()
            --- Ensures that calls to a function are made with the correct arguments
        -- IMPORTANT NOTES
            --- Many C compilers do not check for parameter matching
            --- Missing arguments will result in unexpected behaviour
            --- A function prototype causes the compiler to flag an error if arguments are missing
        -- ADVANTAGES
            --- Easier to navigate a program w/ main() at the top
            --- Helps with debugging
            --- Commonly used in header files
*/

#include <stdio.h>

void greet(char name[25], int age); // function prototype

int main() 
{
    char name[25] = "Rishi";
    int age = 18;
    greet(name,age);
    return 0;
}

void greet(char name[25], int age)
{
    printf("\n\nYour name is %s\n",name);
    printf("You are %d years old\n\n",age);
}