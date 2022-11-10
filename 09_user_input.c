#include <stdio.h>
#include <string.h>

int main() 
{
    char name[25]; // 
    // max allowed bytes 25; Causes buffer overflow when exceeded

    printf("\n\nWhat is your name?: ");
    fgets(name,25,stdin); // unlike scanf, this can read whitespaces
    name[strlen(name)-1] = '\0';

    int age; // Step 1: Declare variable
    printf("How old are you?: ");
    
    /*  - Step 2: Get value from variable
            - Use scanf, insert format specifier
            - precede variable with "&" - Its the address of the variable */
    scanf("%d",&age); 
    printf("Hi %s, you are %d years old\n",name,age);

    return 0;
}