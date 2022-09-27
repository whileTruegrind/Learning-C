/* 
    - augmented assignment operators 
        -- used to replace a statement where an operator
        -- takes a variable as one of its arguments
        -- and then assigns the result back to the same variable
        -- x = x + 1 is same as x += 1 
*/

#include <stdio.h>

int main() 
{
    int x = 10;
    int y = 20;
    int z = 30;

    x = x + 2;
    x += 2;

    y = y - 3;
    y -= 3;

    z = z * 4;
    z *= 4;

    return 0;
}