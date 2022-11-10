/* 
    - PSEUDO RANDOM NUMBERS
        -- A set of values or elements that are statistically random
        -- Do not use this for cryptographic security 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));    // Makes sure the numbers are different each time

    int number1 = (rand() % 6) + 1; // % 6 because the number is always under 6 and +1 to get 6 and avoid zero (considering a dice)
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    // int number4 = (rand() % 6) + 0; // Use this if you want 0 to 6

    int total = number1 + number2;

    printf("\n");
    
    printf("%d\n", number1);
    printf("%d\n", number2);
    // printf("%d\n", number3);
    
    printf("\nTotal = %d",total);

    printf("\n\n");

    return 0;
}
