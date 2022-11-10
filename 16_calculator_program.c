#include <stdio.h>

int main() 
{
    double num1;
    char operator[2];
    double num2;
    double result;

    printf("\n\nEnter number 1: ");
    scanf("%lf",&num1);
    
    printf("Enter an operator (+ - * /): ");
    scanf("%s",&operator[2]);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    switch (operator[2])
    {
        case '+':
            result = num1 + num2;
            printf("%0.2lf + %0.2lf = %0.2lf\n\n",num1,num2,result);
            break;
        case '-':
            result = num1 - num2;
            printf("%0.2lf - %0.2lf = %0.2lf\n\n",num1,num2,result);
            break;
        case '*':
            result = num1 * num2;
            printf("%0.2lf * %0.2lf = %0.2lf\n\n",num1,num2,result);
            break;
        case '/':
            result = num1 / num2;
            printf("%0.2lf / %0.2lf = %0.2lf\n\n",num1,num2,result);
            break;
        default:
            printf("Enter a valid operator");
    }

    return 0;
}