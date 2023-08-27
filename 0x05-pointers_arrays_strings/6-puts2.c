#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: the Argument of the function
 *
 * Return: nothing
 */
void puts2(char *str)
{
int i, len = strlen(str) - 1;
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
putchar(str[i]);
}
putchar('\n');
}
