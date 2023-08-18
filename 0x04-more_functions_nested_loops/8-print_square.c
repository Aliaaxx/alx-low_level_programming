#include <stdio.h>
#include "main.h"

/**
 * print_square - is a function that prints a square.
 *
 * @size: the Argument of the function
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
