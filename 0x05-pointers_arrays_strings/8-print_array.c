#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - is a function that prints n elements of
 * an array of integers, followed by a new line.
 *
 * @a: the first Argument of the function
 * @n: the second Argument of the function 
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
putchar(a[i]);
putchar(',');
putchar(' ');
}
else
putchar(a[i]);
}
putchar('\n');
}
