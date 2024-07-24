#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true, else -1
 * @array: array of integers
 * @size: size of elements in the array
 * @cmp: pointer to function used for comparison
 * Return: index of the first element for which the cmp function does not return 0, or -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}
