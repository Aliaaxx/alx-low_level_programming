#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - is a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: the Argument of the function
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i;
for (i = strlen(str)-1; i >= 0; i--)
{
putchar(str[i]);
}
putchar('\n');
}
