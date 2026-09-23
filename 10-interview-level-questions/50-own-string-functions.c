#include <stdio.h>

/* Custom strlen() */
int my_strlen(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

/* Custom strcpy() */
void my_strcpy(char destination[], char source[])
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

/* Custom strcmp() */
int my_strcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

/* Custom strcat() */
void my_strcat(char destination[], char source[])
{
    int i = 0;
    int j = 0;

    /* Find the end of destination */
    while (destination[i] != '\0')
    {
        i++;
    }

    /* Copy source to the end of destination */
    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }

    destination[i] = '\0';
}


int main(void)
{
    char str1[100];
    char str2[100];
    char copy[100];
    char combined[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    /* Remove newline from str1 */
    int len1 = my_strlen(str1);

    if (len1 > 0 && str1[len1 - 1] == '\n')
    {
        str1[len1 - 1] = '\0';
    }

    /* Remove newline from str2 */
    int len2 = my_strlen(str2);

    if (len2 > 0 && str2[len2 - 1] == '\n')
    {
        str2[len2 - 1] = '\0';
    }

    /* strlen() */
    printf("\nLength of first string: %d\n", my_strlen(str1));

    /* strcpy() */
    my_strcpy(copy, str1);

    printf("Copied string: %s\n", copy);

    /* strcmp() */
    int result = my_strcmp(str1, str2);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string comes before second string.\n");
    }
    else
    {
        printf("First string comes after second string.\n");
    }

    /* strcat() */
    my_strcpy(combined, str1);
    my_strcat(combined, str2);

    printf("Concatenated string: %s\n", combined);

    return 0;
}
