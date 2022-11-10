// array = a data structure that can store many values of the same data type.

#include <stdio.h>

int main() 
{
    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;

    printf("\n");
    //printf("%lf",prices[0,5]);
    printf("%0.2lf$",prices[0]);
    printf("\n\n");

    return 0;
}