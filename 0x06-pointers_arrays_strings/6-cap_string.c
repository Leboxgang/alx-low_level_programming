#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
    int index = 0;
    int capitalize_next = 1;

    while (str[index] != '\0')
    {
        if (capitalize_next && (str[index] >= 'a' && str[index] <= 'z'))
        {
            str[index] -= 32;
            capitalize_next = 0;
        }

        if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
            str[index] == ',' || str[index] == ';' || str[index] == '.' ||
            str[index] == '!' || str[index] == '?' || str[index] == '"' ||
            str[index] == '(' || str[index] == ')' || str[index] == '{' ||
            str[index] == '}')
        {
            capitalize_next = 1;
        }
        else if (str[index] >= '0' && str[index] <= '9')
        {
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }

        index++;
    }

    return str;
}
