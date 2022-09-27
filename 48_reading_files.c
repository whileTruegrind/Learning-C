#include <stdio.h>

void creating48txt();

int main() 
{
    printf("\n");
    
    creating48txt();

    FILE *pF = fopen("48.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("Reading File...\n\n");
    }
    
    while(fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pF);
    remove("48.txt");
    
    printf("\n\n");

    return 0;
}

void creating48txt()
{
    FILE *pF = fopen("48.txt","w");
    fprintf(pF, "Roses are red\nViolets are blue");
    fclose(pF);
}