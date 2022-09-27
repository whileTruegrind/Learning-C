/* 
    - STRUCT
        -- Collection of related numbers ("Variables")
        -- They can be of different data types
        -- Listed under one name in a block of memory
        -- VERY SIMILAR to classes in other languages (but no methods)
*/

#include <stdio.h>
#include <string.h>

struct Player
{
    char name[120];
    int score;
};

int main() 
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John Doe");
    player1.score = 420;

    strcpy(player2.name, "Weeknd");
    player2.score = 69;

    printf("\nPlayer 1 Name: %s\nPlayer 1 Score: %d\n",player1.name,player1.score);
    printf("\nPlayer 2 Name: %s\nPlayer 2 Score: %d\n\n",player2.name,player2.score);

    return 0;
}
