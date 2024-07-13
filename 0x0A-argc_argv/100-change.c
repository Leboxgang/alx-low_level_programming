#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 *        for an amount of money
 * @argc: argument count
 * @argv: argument vector (array of strings)
 * 
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    int total, count;
    unsigned int i;
    char *p;
    int cents[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    total = strtol(argv[1], &p, 10);
    count = 0;

    if (!*p)
    {
        while (total > 0)
        {
            for (i = 0; i < sizeof(cents) / sizeof(cents[0]); i++)
            {
                if (total >= cents[i])
                {
                    count += total / cents[i];
                    total = total % cents[i];
                }
            }
        }
    }
    else
    {
        printf("Error\n");
        return (1);
    }

    printf("%d\n", count);
    return (0);
}
