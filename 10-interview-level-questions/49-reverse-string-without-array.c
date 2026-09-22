#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Find the length of the string */
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    /* Reverse the string in the same array */
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];

        str[i] = str[length - 1 - i];

        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
