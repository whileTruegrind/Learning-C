/*
    - continue = skips rest of code & forces the next iteration of the loop
    - break = exits a loop/switch
*/

#include <stdio.h>

int main()
{
    printf("\n\n");

    // CONTINUE Statement
    
    for (int i = 1; i <= 20; i++)
    {
        if (i==13)    // skips 13 and continues with the loop
        {
            continue;  
        }
        printf("%d\n",i);
    }

    printf("\n");

    // BREAK Statement

    for (int i = 1; i <= 20; i++)
    {
        if (i==13)    // breaks the loop entirely when it reaches 13
        {
            break;  
        }
        printf("%d\n",i);
    }

    printf("\n");
}