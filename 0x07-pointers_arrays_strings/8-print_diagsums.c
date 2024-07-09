#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the array
 * @size: Size of the array (number of rows and columns)
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0, y;

    for (y = 0; y < size; y++)
    {
        sum1 += a[y * size + y];
        sum2 += a[y * size + (size - y - 1)];
    }
    printf("%d, %d\n", sum1, sum2);
}
