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
        int sign = 1; // Initialize sign as positive
        unsigned int res = 0;
        int i = 0;

        // Handle signs
        if (s[i] == '-')
        {
                sign = -1;
                i++;
        }
        else if (s[i] == '+')
        {
                i++;
        }

        // Process digits
        while (s[i] >= '0' && s[i] <= '9')
        {
                // Check for overflow before adding new digit
                if (res > (INT_MAX / 10) || (res == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
                {
                        // Overflow case
                        if (sign == 1)
                                return INT_MAX;
                        else
                                return INT_MIN;
                }

                // Update result
                res = res * 10 + (s[i] - '0');
                i++;
        }

        // Apply sign and return result
        return sign * res;
}
