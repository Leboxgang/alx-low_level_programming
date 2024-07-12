#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a = 0;

    for (; a < n; a++)
    {
        s[a] = b;
    }

    return (s);
}
