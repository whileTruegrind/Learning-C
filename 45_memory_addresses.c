/*
    - memory = An array of bytes of RAM (STREET)
    - memory block = A single unit (byte) within memory, used to hold some value (person)
    - memory address = The address of where a memory block is located (house address)
*/

#include <stdio.h>

int main() 
{
    printf("\n");

    char a;
    char b[3];
    int c;
    int d[3];

    printf("      Size of char (IN BYTES): %d\n", sizeof(a));
    printf("Size of (3 * char) (IN BYTES): %d\n", sizeof(b));
    printf("       Size of int (IN BYTES): %d\n", sizeof(c));
    printf(" Size of (3 * int) (IN BYTES): %d\n", sizeof(d));

    printf("\n");

    printf("Memory address of \"a\": %p\n", &a);
    printf("Memory address of \"b\": %p\n", &b);
    printf("Memory address of \"c\": %p\n", &c);
    printf("Memory address of \"d\": %p\n", &d);

    printf("\n");

    return 0;
}
