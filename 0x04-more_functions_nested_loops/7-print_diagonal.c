#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - is a function that draw a diagonal line
 *
 * @n: the Argument of the function
 */

void print_triangle(int size)
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
for (j = 0; j < i; j++)
{
if (j == i - 1)
{
putchar(92);  
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
