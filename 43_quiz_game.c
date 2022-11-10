#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("\n");

    char userAnswer;
    int score = 0;
    
    char questions[][500] = {"1 - What is the capital of India?", 
                             "2 - What is the capital of England?",
                             "3 - What is the capital of Sri Lanka?"};

    char options[][500] = {"    A. New Delhi", "    B. Chennai", "    C. Mumbai", "    D. Kolkata",
                           "    A. Washington, D.C.", "    B. Paris", "    C. London", "    D. Berlin",
                           "    A. Kuala Lumpur", "    B. Bangkok", "    C. Kandy", "    D. Colombo"};

    char answers[] = {'A','C','D'}; 

    int numberofQuestions = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i < numberofQuestions; i++)
    {
        printf("%s\n", questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        do
        {
            printf("Your Answer? [A (or) B (or) C (or) D]: ");
            scanf(" %c", &userAnswer); // prevent input buffer?
            printf("\n");
            userAnswer = toupper(userAnswer);
        } while (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D');

        if (userAnswer == answers[i])
        {
            printf("Correct!\n\n");
            score++;
        }
        else
        {
            printf("Wrong Answer!\n");
            printf("Correct Answer: %c\n\n", answers[i]);
        }
    }
    printf("Your Score: %d\n\n", score);
}