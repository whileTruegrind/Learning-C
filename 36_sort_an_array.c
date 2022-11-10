#include <stdio.h>

void sortint (int arrayint[], int sizeint)
{
    for (int i = 0; i < sizeint - 1; i++)                // size - 1 because if all elements get sorted except one, that one gets sorted automatically
    {
        for (int j = 0; j < sizeint - i - 1; j++)        // - i  because an element is already sorted
        {
            if (arrayint[j] > arrayint[j+1])
            {
                int temp = arrayint[j];
                arrayint[j] = arrayint[j+1];
                arrayint[j+1] = temp;
            }
        }
    }
}

void printArrayint (int arrayint[], int sizeint)
{
    for (int i = 0; i < sizeint; i++)
    {
        printf("%d ", arrayint[i]);
    }
}

void sortchar (char arraychar[], int sizechar)
{
    for (int i = 0; i < sizechar - 1; i++)
    {
        for (int j = 0; j < sizechar - i - 1; j++)
        {
            if (arraychar[j] > arraychar[j+1])
            {
                char temp = arraychar[j];
                arraychar[j] = arraychar[j+1];
                arraychar[j+1] = temp;
            }
        }
    }
}

void printArraychar (char arraychar[], int sizechar)
{
    for (int i = 0; i < sizechar; i++)
    {
        printf("%c ", arraychar[i]);
    }
}

int main() 
{
    printf("\n");
    int arrayint[] = {9, 4, 3, 5, 8, 1, 0, 2, 6, 7};
    int sizeint = sizeof(arrayint)/sizeof(arrayint[0]);
    sortint (arrayint, sizeint);
    printArrayint (arrayint, sizeint);
    printf("\n");

    char arraychar[] = {'F','E','D','C','B','A','G'};
    int sizechar = sizeof(arraychar)/sizeof(arraychar[0]);
    sortchar (arraychar, sizechar);
    printArraychar (arraychar, sizechar);
    printf("\n\n");

    return 0;
}