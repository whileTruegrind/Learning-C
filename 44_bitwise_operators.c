/* 
    - BITWISE OPERATORS
        - special operators used in bit level programming (knowing binary is important for this topic) 
            -- & = AND
            -- | = OR
            -- ^ = XOR
            -- << = left shift 
            -- >> = right shift 
*/

#include <stdio.h>

int main() 
{
    int x = 6;     //  6 = 00000110
    int y = 12;    // 12 = 00001100
    int z = 0;     //  0 = 00000000

    z = x & y;                  //  4 = 00000100 // All bits should be 1 in order to change result to 1 
    printf("x AND y = %d\n",z);

    z = x | y;                  // 14 = 00001110 // Atleast one bit should be 1 in order to change result to 1
    printf("x OR y = %d\n",z);

    z = x ^ y;                  // 10 = 00001010 // Only one bit needs to be one, if more than one, bit remains unchanged
    printf("x XOR y = %d\n",z);

    z = 6;
    
    z = x << 1;                 // 12 = 00001100 // pushes the digits one place to the left and adds zero at the end (doubles the number)
    printf("x << y = %d\n",z);

    z = 6;

    z = x >> 1;                  // 12 = 00001100 // pushes the digits one place to the right and adds zero at the start (halves the number)
    printf("x >> y = %d\n",z);

    printf("\n");

    return 0;
}
