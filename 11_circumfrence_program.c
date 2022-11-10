#include <stdio.h>

int main() 
{
    const double PI = 3.14159265358;
    const double T = 2;
    double r;

    printf("\nEnter radius of the circle to find circumference & area: ");
    scanf("%lf",&r);

    double c =  T * PI * r;
    double a =  PI * r * r;
    
    printf("\n\nThe circumference of the circle = %lf\n",c);
    printf("The area of the circle = %lf\n\n",a);

    return 0;
}