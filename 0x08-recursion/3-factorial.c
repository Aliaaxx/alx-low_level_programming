#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - is a function that returns the factorial of a given number.
 *
 * @n: the Argument of the function
 *
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
