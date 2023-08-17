#include <stdio.h>
#include "main.h"
/**
 * print_line - is a function that prints a square.
 * @n: the Argument of the function
 * Return: nothing
 */
void print_line(int n)
{
int i;
for(i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
