#include "main.h"

/**
 * print_line - draw a straight line in terminal
 * @n: input integer
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
