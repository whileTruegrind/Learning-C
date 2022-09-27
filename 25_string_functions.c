// REMOVE "//" TO USE CODE

#include <stdio.h>
#include <string.h>

int main() 
{
    char string1[] = "JoHn";
    char string2[] = "DoE";

    //strlwr(string1);                                  // converts a string to lowercase     
    //strupr(string1);                                  // converts a string to uppercase
    //strcat(string1, string2);                         // appends string2 to end of string1
    //strncat(string1, string2, 1);                     // appends n characters from string2 to string 1
    //strcpy(string1, string2);                         // copy string2 to string1
    //strncpy(string1, string2, 1);                     // copy n characters of string2 to string1

    //strset(string1, '?');                             // sets all characters of a string to a given character
    //strnset(string1, 'x', 1);                         // sets the first n characters of a string to a given character
    //wstrrev(string1);                                 // reverses a string

    int result = strlen(string1);                     // returns string length as int
    //int result = strcmp(string1, string2);            // string compare all characters
    //int result = strncmp(string1, string2, 5);        // string compare n chracters
    //int result = strcmpi(string1, string1);           // string compare all characters (ignore case)
    //int result = strnicmp(string1, string1, 1);       // string compare n characters (ignore case)
    
    printf("\n%s\n", string1);
    printf("\n%d\n\n", result);

    return 0;
}