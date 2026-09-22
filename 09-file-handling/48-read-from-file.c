#include <stdio.h>

int main(void)
{
    FILE *file;
    char line[100];

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("--- File Contents ---\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
