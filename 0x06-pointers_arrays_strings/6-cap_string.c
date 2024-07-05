#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;
	int cap_next = 1;

	while (str[index] != '\0')
	{
		if (cap_next && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			cap_next = 0;
		}

		if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
		    str[index] == ',' || str[index] == ';' || str[index] == '.' ||
		    str[index] == '!' || str[index] == '?' || str[index] == '"' ||
		    str[index] == '(' || str[index] == ')' || str[index] == '{' ||
		    str[index] == '}')
		{
			cap_next = 1;
		}

		index++;
	}

	return str;
}
