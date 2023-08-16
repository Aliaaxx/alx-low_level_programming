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

int print_last_digit(int n)
{
int digit;
digit = n % 10;  
_putchar(digit);
return (digit);
}
