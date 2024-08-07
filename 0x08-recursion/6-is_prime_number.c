#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Determines if an integer is a prime number or not
 * @n: Number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively calculates if a number is prime
 * @n: Number to evaluate
 * @i: Iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
    if (i == 1)
        return (1);
    if (n % i == 0 && i > 0)
        return (0);
    return (actual_prime(n, i - 1));
}
