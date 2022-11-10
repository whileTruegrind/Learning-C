/* 
    - ENUM 
        -- A user defined type of named integer identifiers
        -- Helps us to make a program more readable 
*/

#include <stdio.h>

// enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat}; // Default value starts with 0
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7}; // But we values can assign ourselves 

int main() 
{
    printf("\n");

    enum Day today = Sun;

    // printf("%d", today); // enums are NOT STRINGS, but they can be treated as int

    if (today == Sun || today == Sat)
    {
        printf("It's the weekend");
    }
    else
    {
        printf("It's a weekday");
    }

    printf("\n\n");

    return 0;
}
