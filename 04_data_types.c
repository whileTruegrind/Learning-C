#include <stdio.h>
#include <stdbool.h>

int main() 
{
    char a = 'Z'; // single character %c
    char b[] = "abcd"; // array of characters %s

    float c = 3.12345678987654321; // 4 bytes (32 bits precision) 6 - 7 digits %f
    double d = 3.12345678987654321; // 8 bytes (64 bits precision) 15 - 16 digits %lf

    bool e = true; // 1 - true ; 0 - false %d

    char f = 100; // 1 byte (-128 to +127) %d %c
    // %c prints the number's character representation
    // https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/ASCII-Table-wide.svg/2560px-ASCII-Table-wide.svg.png
    unsigned char g = 255; // 1 byte (0 to +255) %d %c

    short h = 32767; // 4 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 123456789; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 123456789; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 8736478267836287648; // 8 bytes (-9 to +9 quintillion)
    unsigned long long int m = 3829378923899983; // 8 bytes (0 to +18 quintillion)

    printf("Float c = %0.15f\n",c);
    printf("Float c more than 7 digits = %0.15f\n",c);
    printf("Bool e = %d\n",e);

    return 0;
}