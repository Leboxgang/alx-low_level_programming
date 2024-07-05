#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @n: input string
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 'a' + 'A';
		}
		i++;
	}
	return n;
}
