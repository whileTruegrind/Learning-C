#include <stdio.h>

double square(double x) // change void to data type of return value
{
    double result = x * x;
    return result;
}

int main() 
{
    double x = square(69);
    
    printf("\n\nSquare of 69 = %.lf\n\n",x);

    return 0;
}