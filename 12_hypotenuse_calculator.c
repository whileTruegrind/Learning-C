#include <stdio.h>
#include <math.h>

int main() 
{
    double adjacent;
    double opposite;
    
    printf("\n\nEnter length of adjacent side: ");
    scanf("%lf",&adjacent);

    printf("Enter length of opposite side: ");
    scanf("%lf",&opposite);

    double hypotenuse = sqrt((adjacent * adjacent) + (opposite * opposite));
    printf("Length of hypotenuse = %lf\n\n",hypotenuse);

    return 0;
}