#include <stdio.h>

int main() 
{
    FILE *pF = fopen("47.txt","w");
    fprintf(pF, "My name is Rishi"); // Overwrites if already exists ; Use "a" mode instead of "w" if you wanna append
    fclose(pF);
    
    if(remove("47.txt") == 0)
    {
        printf("File deleted successfully!");
    }
    else
    {
        printf("File not deleted");
    }

    return 0;
}