#include <stdio.h>

int main() 
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d",&age);
    
    if (age >= 18)
    {
        printf("You are eligible for a credit card\n\n");
    }
    else if (age <= 0)
    {
        printf("Enter a valid age\n\n");
    }
    else
    {
        printf("You are not eligible for a credit card\n\n");
    }
    return 0;
}