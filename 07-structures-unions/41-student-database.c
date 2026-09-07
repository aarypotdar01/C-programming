/*
 * Problem: Create a student database using structures
 * Concept: Structures, arrays of structures and user input
 *
 * Description:
 * This program stores and displays information about multiple
 * students using a structure.
 */

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main(void)
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Database ---\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
