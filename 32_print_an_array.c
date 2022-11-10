#include <stdio.h>

int main() 
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%d bytes\n",sizeof(prices));

    printf("\n");

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) // sizeof(prices)/sizeof(prices[0]) = allows us to add and remove elements freely
    {
        printf("%lf\n",prices[i]);
    }

    printf("\n\n");

    return 0;
}