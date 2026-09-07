/*
 * Problem: Print a string using pointers only
 * Concept: Pointers, strings and pointer arithmetic
 *
 * Description:
 * This program accepts a string and prints it using a pointer
 * without using array indexing.
 */

#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;

    printf("String: ");

    while (*ptr != '\0' && *ptr != '\n')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
