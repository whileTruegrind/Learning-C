/* 
    -Variable 
        -- Allocated space in memory to store a value.
        -- We refer to a variable's name to access stored value.
        -- That variable now behaves as if it was the value it contains.
        -- BUT we need to declare what type of data we are storing. 
*/

#include <stdio.h>

int main() 
{
    
    
    int x;        // declaration
    x = 100;
    
    int age = 1000; // declaration and initialization
    
    float gpa = 7.1; // float type

    char grade ='A'; // char Stores single character

    char name[] = "John Doe"; // array of char and is technically an array not string

    printf("I am %s\n", name);
    printf("I am %d years old\n", age);
    printf("My grade is %c\n", grade);
    printf("My gpa is %0.1f\n", gpa);

    return 0;
}