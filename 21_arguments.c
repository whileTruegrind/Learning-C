#include <stdio.h>

void birthday(char name[], int age) // parameters and function should contain em
{
    printf("\nHey %s! Happy Birthday!\n",name);
    printf("You are %d years old now!\n\n",age);
}

int main() 
{
    char name[25];
    int age;
    
    printf("\n\nWhat's your name?: ");
    scanf("%s",&name); // assigning name by user 

    printf("What's your age now?: ");
    scanf("%d",&age); // assigning age by user

    birthday(name, age); // function won't work without arguments
    
    return 0;
}