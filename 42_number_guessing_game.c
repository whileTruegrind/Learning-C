#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("\nGuess the number (Enter 0 to give up): ");
        scanf("%d", &guess);
        
        if (guess == 0)
        {
            printf("You gave up!\n");
            break;
        }
        else if (guess < answer)
        {
            printf("Try higher\n");
        }
        else if (guess > answer)
        {
            printf("Try lower\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        
        guesses++;
    } while (guess != answer);

    printf("\n");
    
    printf("The answer is %d\n", answer);
    printf("Took you %d guesses\n", guesses);

    printf("\n");

    return 0;
}
