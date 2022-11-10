#include <stdio.h>
#include <string.h>

typedef char example[50];

typedef struct
{
    char name[50];
    char password[50];
    int id;
} User;

int main() 
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    example a = "hihello";
    
    User user1 = {"John Doe", "password123", 123456789};
    User user2 = {"Weeknd", "password321", 987654321};

    printf("\n");
    printf("User 1 Name: %s\nUser 1 Password: %s\nUser 1 id: %d\n", user1.name, user1.password, user1.id);
    printf("\n");
    printf("User 2 Name: %s\nUser 2 Password: %s\nUser 2 id: %d", user2.name, user2.password, user2.id);
    printf("\n\n");

    return 0;
}
