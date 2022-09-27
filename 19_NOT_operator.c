/* 
    - LOGICAL OPERATOR - NOT (!)
        - ! (NOT) Reverses the state of condition will execute only if reversed condition is true 
*/

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    bool sunny = false;

    if (!sunny)
    {
        printf("It is cloudy outside");
    }
    else
    {
        printf("It is sunny outside");
    }

    return 0;
}