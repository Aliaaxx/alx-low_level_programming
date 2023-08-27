#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - is a function that reverses a string.
 *
 * @s: the Argument of the function
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int i;
puts(s);
for (i = strlen(s) - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
