#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes from src to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int a, b;

    a = 0;
    while (dest[a] != '\0')
    {
        a++;
    }

    b = 0;
    while (b < n && src[b] != '\0')
    {
        dest[a] = src[b];
        a++;
        b++;
    }

    dest[a] = '\0';
    return (dest);
}
