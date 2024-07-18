#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and checks if successful.
 * @b: Amount of memory to allocate in bytes.
 *
 * Return: A pointer to the allocated memory, or terminate with status 98 if it fails.
 */
void *malloc_checked(unsigned int b)
{
    void *i;

    i = malloc(b);
    if (i == NULL)
        exit(98);
    return (i);
}
