#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    for (; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return (&s[i]);
    }

    if (s[i] == c)
        return (&s[i]);

    return (NULL);
}
