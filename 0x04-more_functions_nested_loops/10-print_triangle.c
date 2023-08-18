#include <stdio.h>
#include "main.h"

/**
 * print_triangle - is a function that draw a triangle
 *
 * @size: the Argument of the function
 */
void print_triangle(int size)
{
int i, j, k, count = size;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j == count)
{
for (k = count; k <= size; k++)
{
putchar('#');
}
count--;
break;
}
else
{
putchar(' ');
}
}
putchar('\n');
}
}
}
