#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of
 * a number
 *
 *@n: the Argument of the function
 *
 * Return: return 0 (Success)
*/

int print_last_digit(long int n)
{
int digit1, digit2;
if (n < 0)
{
n = n * -1;
}
digit1 = n % 10;
digit2 = digit1 + 48;
_putchar(digit2);
return (digit1);
}
