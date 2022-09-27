/*
    - switch:
        - A more efficient alternative to using many "else if" statements
        - also a value to be tested for equality against many cases
*/

#include <stdio.h>

int main() 
{
    char grade;

    printf("\nEnter your letter grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
        case 'A':
            printf("Perfect grade\n\n");
            break;
        case 'B':
            printf("You did good\n\n");
            break;
        case 'C':
            printf("Average\n\n");
            break;
        case 'D':
            printf("Should improve\n\n");
            break;
        default:
            printf("Enter a valid grade\n\n");
            break;         
    }
    return 0;
}