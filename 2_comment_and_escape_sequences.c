 /* 
    - Escape Sequence: Character combination consisting of backslash \
    - followed by a letter or combination of digits.
    - They specify actions within a line or string of text.
    - \n = newline
    - \t = tab 
*/

#include <stdio.h>

int main() 
{
    // simple table
    printf("1\t2\t3\t\n4\t5\t6\t\n7\t8\t9\t");
    
    // mark table example
    printf("\n\ns.no.\t\tsubject\t\tcredits\t\tgrade\n\
    1\t\tMath\t\t4\t\tB\n\
    2\t\tPhysics\t\t5\t\tA+\n\
    3\t\tBEEE\t\t5\t\tA\n\
    4\t\tWS\t\t3\t\tC\n\
    5\t\tEnglish\t\t3\t\tB\n");

    // Adding Quotes
    printf("\"Pizza is real\"\n");

    // Adding backslash
    printf("\\Pizza is real\\");
    
    return 0;
}