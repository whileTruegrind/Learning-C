// nested loops = a loop inside of another loop

#include <stdio.h>

int main() 
{
    int rows;
    int columns;
    char symbol;

    printf("\n\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Enter a symbol: ");
    scanf("%c", &symbol);
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}