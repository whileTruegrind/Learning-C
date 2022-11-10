#include <stdio.h>
#include <math.h>

int main() 
{
    // USE <math.h> TO USE MATH FUNCTIONS

    double A = sqrt(9); // Sq root of a number
    double B = pow(2,4); // pow(a,b) where a = base & b = power
    int C = round(3.8);  // round a number acc to math
    int D = ceil(2.1); // rounds number to next integer (ceiling)
    int E = floor(2.9); // rounds number to prev integer (floor)
    double F = fabs(-100); // tells how far a number is from ZERO (removes sign for negative no.s)
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\nA = %lf",A);
    printf("\nB = %lf",B);
    printf("\nC = %d",C);
    printf("\nD = %d",D);
    printf("\nE = %d",E);
    printf("\nF = %lf",F);
    printf("\nG = %lf",G);
    printf("\nH = %lf",H);
    printf("\nI = %lf",I);
    printf("\nJ = %lf\n\n",J);
    
    return 0;
}