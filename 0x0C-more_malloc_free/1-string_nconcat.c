#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate to s1.
 *
 * Return: If the function fails, it returns NULL. Otherwise, a pointer to the
 * newly allocated space in memory containing s1 followed by the first n bytes
 * of s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int x, y, z;
    char *s;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (x = 0; s1[x]; x++)
        ;
    for (y = 0; s2[y]; y++)
        ;

    if (y > n)
        y = n;

    s = malloc(sizeof(char) * (x + y + 1));
    if (s == NULL)
        return (NULL);

    for (z = 0; z < x; z++)
        s[z] = s1[z];
    for (z = 0; z < y; z++)
        s[z + x] = s2[z];
    s[x + y] = '\0';

    return (s);
}
