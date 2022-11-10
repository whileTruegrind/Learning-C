#include <stdio.h>
#include <ctype.h>

int main() 
{
    char unit;
    float temp;

    printf("Is the temperature in C or F?: ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        double tempinc;
        double x;

        printf("Enter the temperature in Celsius without units: ");
        scanf("%lf",&tempinc);

        x = (tempinc * 1.8) + 32;

        printf("%0.2lf degree Celsius in Fahrenheit = %0.2lf degree Fahrenheit\n\n",tempinc,x);
    }
    else if (unit == 'F')
    {
        double tempinf;
        double x;
        
        printf("Enter the temperature in Fahrenheit without units: ");
        scanf("%lf",&tempinf);

        x = (tempinf - 32) * 0.5556;

        printf("%0.2lf degree Fahrenheit in Celsius = %0.2lf degree Celsius\n\n",tempinf,x);
    }
    else
    {
        printf("Enter a valid unit of temperature\n\n");
    }

    return 0;
}