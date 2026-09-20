#include <stdio.h>

struct StudentStruct
{
    int rollNo;
    float marks;
    char grade;
};

union StudentUnion
{
    int rollNo;
    float marks;
    char grade;
};

int main(void)
{
    struct StudentStruct s;
    union StudentUnion u;

    printf("--- Structure ---\n");

    s.rollNo = 12;
    s.marks = 95.5;
    s.grade = 'A';

    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    printf("\nSize of Structure: %zu bytes\n", sizeof(s));


    printf("\n--- Union ---\n");

    u.rollNo = 12;
    printf("Roll Number: %d\n", u.rollNo);

    u.marks = 95.5;
    printf("Marks: %.2f\n", u.marks);

    u.grade = 'A';
    printf("Grade: %c\n", u.grade);

    printf("\nSize of Union: %zu bytes\n", sizeof(u));

    return 0;
}
