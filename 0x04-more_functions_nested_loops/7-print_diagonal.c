#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - is a function that draw a diagonal line
 *
 * @n: the Argument of the function
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j == i)
{
putchar('\\');
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
