#include "main.h"
/**
 * print numbers - print numbbers from 0-9
 *
 * No return
 */

void print_numbers(void)
{
	int pr;

	for (pr = 48; pr<= 57; pr++)
	{
		_putchar(pr);
	}
	_putchar('\n');
}
