#include <stdio.h>

struct Address
{
    char city[50];
    int pincode;
};

struct Student
{
    int rollNo;
    char name[50];
    float marks;
    struct Address address;
};

int main(void)
{
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("Enter City: ");
    scanf(" %[^\n]", student.address.city);

    printf("Enter Pincode: ");
    scanf("%d", &student.address.pincode);

    printf("\n--- Student Details ---\n");

    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
    printf("City: %s\n", student.address.city);
    printf("Pincode: %d\n", student.address.pincode);

    return 0;
}
