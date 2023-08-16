#include <stdio.h>
#include "main.h"

/**
 * print_sign - is a function thats checks the sign of the number
 *
 *@n: the Argument of the function
 *
 * Return: return 1 if the number is positive and return 0 if the
 * number is zero other return -1 (Success)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
