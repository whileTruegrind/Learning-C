#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    double gpa;
} Student;

int main() 
{
    printf("\n");

    Student student1 = {"Dwight", 9.9};
    Student student2 = {"Michael", 9.75};
    Student student3 = {"Karen", 9.6};
    Student student4 = {"Creed", 9.4};

    Student students[] = {student1, student2, student3, student4};
    
    int size = sizeof(students)/sizeof(students[0]);

    for (int i = 0; i < size; i++)
    {
        int x = i+1;
        printf("Student %d Name: %s\n", x, students[i].name);
        printf("Student %d GPA: %0.2lf\n\n", x, students[i].gpa);
    }

    return 0;
}
