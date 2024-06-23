#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 *
 * Return: Always 0.
 */

int main(void)
{
    int number;

    for (number = 0; number < 10; number++)
    {
        putchar(number + '0');
    }

    putchar('\n');

    return (0);
}
