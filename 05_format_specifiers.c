/* 
    - format specifier % = defines and formats a type of data to be displayed
        -- %c = character
        -- %s = string (array of characters)
        -- %f = float
            --- %0.1
            --- number after point = decimal precision
            --- number before point = number of characters to print (NOTE: Adds empty space if not enough characters) 
            --- %1 = minimum feild width
        -- %lf = double
        -- %d = integer
        -- %- = left align
*/

#include <stdio.h>

int main() 
{
    float item1 = 5.12;
    float item2 = 10.0089;
    float item3 = 100.99;

    printf("Item 1: $%.0f\n",item1);      // rounds off
    printf("Item 2: $%-9.2f\n",item2);    // rounds off, prints six chars incl a space, left aligns
    printf("Item 3: $%.0f\n",item3);      // rounds off

    return 0;
}