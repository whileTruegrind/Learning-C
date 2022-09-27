#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';
const char PLAYER2 = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void player2Move();
void computerMove();
char checkWinner();
void printWinner(char);
void printWinnerM(char);

void main()
{
   int game_mode;
   printf("\nNumber of players [1 (or) 2]?: ");
   scanf("%d", &game_mode);

   if (game_mode == 1)
   {
      char winner = ' ';
      int response = 0;

      do
      {
         printf("\n----------------------NEW GAME----------------------\n\n");
         winner = ' ';
         response = ' ';
         resetBoard();

         while(winner == ' ' && checkFreeSpaces() != 0)
         {
            printBoard();

            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
               break;
            }

            computerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
               break;
            }
         }

         printBoard();
         printWinner(winner);

         printf("\n\nWould you like to play again? (ENTER 1 for YES): ");
         scanf("%d", &response);
      } while (response == 1);

      printf("Thanks for playing!");
   }

   else if (game_mode == 2)
   {
      char winner = ' ';
      int response = 0;

      do
      {
         printf("\n----------------------NEW GAME----------------------\n\n");
         winner = ' ';
         response = ' ';
         resetBoard();

         while(winner == ' ' && checkFreeSpaces() != 0)
         {
            printBoard();

            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
               break;
            }

            printBoard();

            player2Move();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
               break;
            }
         }

         printBoard();
         printWinnerM(winner);

         printf("\n\nWould you like to play again? (ENTER 1 for YES): ");
         scanf("%d", &response);
      } while (response == 1);

      printf("Thanks for playing!");
   }
}

void resetBoard()
{
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}
void printBoard()
{
   printf("\n");
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
   printf("\n");
}
int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')
         {
            freeSpaces--;
         }
      }
   }
   return freeSpaces;
}
void playerMove()
{
   int x;
   int y;

   do
   {
      printf("X's Move\n");
      printf("Enter row [1 (or) 2 (or) 3]: ");
      scanf("%d", &x);
      x--;
      printf("Enter column [1 (or) 2 (or) 3]: ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
        printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER;
         break;
      }
   } while (board[x][y] != ' ');
   
}
void player2Move()
{
   int x;
   int y;

   do
   {
      printf("O's Move\n");
      printf("Enter row [1 (or) 2 (or) 3]: ");
      scanf("%d", &x);
      x--;
      printf("Enter column [1 (or) 2 (or) 3]: ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
        printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER2;
         break;
      }
   } while (board[x][y] != ' ');
   
}
void computerMove()
{
   //creates a seed based on current time
   srand(time(0));
   int x;
   int y;

   if(checkFreeSpaces() > 0)
   {
      do
      {
         x = rand() % 3;
         y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y] = COMPUTER;
   }
   else
   {
      printWinner(' ');
   }
}
char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}
void printWinner(char winner)
{
   if(winner == PLAYER)
   {
      printf("YOU WIN!");
   }
   else if(winner == COMPUTER)
   {
      printf("YOU LOSE!");
   }
   else{
      printf("IT'S A TIE!");
   }
}
void printWinnerM(char winner)
{
   if(winner == PLAYER)
   {
      printf("X WINS!");
   }
   else if(winner == PLAYER2)
   {
      printf("O WINS!");
   }
   else{
      printf("IT'S A TIE!");
   }
}