#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative value if s1 < s2, positive value if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    // After the loop, check if both strings have reached the end ('\0') simultaneously
    // If not, return the difference based on which string terminated first
    return (s1[i] - s2[i]);
}
