/* 
    - while loop = repeats a section of code possibly unlimited number of times
    - A while loop might not execute at all 
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[250];
    
    printf("\nWhat is your name?: ");
    fgets(name, 250, stdin);
    
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nWhat is your name?: ");
        fgets(name, 250, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hi %s",name);

    return 0;
}