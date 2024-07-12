#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s which consists of characters from accept
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int r;

    while (*s)
    {
        for (r = 0; accept[r]; r++)
        {
            if (*s == accept[r])
            {
                n++;
                break;
            }
            else if (accept[r + 1] == '\0')
            {
                return (n);
            }
        }
        s++;
    }
    return (n);
}
