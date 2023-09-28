#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - is a function that returns the value
 * of x raised to the power of y.
 *
 * @x: the First Argument of the function.
 * @y: the Second Argument of the function.
 *
 * Return: returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
