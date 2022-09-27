/* 
    - LOGICAL OPERATOR - AND (&&) 
        - && (AND) checks if given conditions are true and will execute only if all given conditions are true 
*/

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    double temp = 25;
    bool sunny = true;

    if (temp >= 15 && temp <=25 && sunny) // sunny without "== true" defaults to true
    {
        printf("The weather is good");
    }

    return 0;
}