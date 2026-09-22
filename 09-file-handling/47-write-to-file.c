#include <stdio.h>

int main(void)
{
    FILE *file;

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Name: Aary Potdar\n");
    fprintf(file, "Roll Number: 12\n");
    fprintf(file, "Marks: 99.00\n");

    fclose(file);

    printf("Data written to file successfully.\n");

    return 0;
}
