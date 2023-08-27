#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - is a function that reverses a string.
 *
 * @str: the Argument of the function
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int i, half, len = strlen(str);
if (len % 2 == 0)
{
half = len / 2;
for (i = half; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
else
{
half = (len + 1) / 2;
for (i = half; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');  
}
}
