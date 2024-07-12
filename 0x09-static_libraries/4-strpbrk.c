#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: a pointer to the character in s that matches one of the characters in accept, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return (s);
        }
        s++;
    }

    return (NULL);  // Return NULL if no matching character is found
}
