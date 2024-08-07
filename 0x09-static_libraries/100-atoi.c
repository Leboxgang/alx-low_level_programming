#include <limits.h>
#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to convert.
 *
 * Return: the integer value.
 */
int _atoi(char *s)
{
    int sign = 1, i = 0;
    unsigned int res = 0;

    while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
    {
        if (res > (INT_MAX / 10) || (res == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
            return (sign == 1 ? INT_MAX : INT_MIN);

        res = (res * 10) + (s[i] - '0');
        i++;
    }
    res *= sign;
    return (res);
}
