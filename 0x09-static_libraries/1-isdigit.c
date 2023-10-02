#include <stdio.h>
#include "main.h"

/**
 * _isdigit - is a function thats checks for a digit
 *
 *@c: the Argument of the function
 *
 * Return: return 1 if 'c' is a digit
 * other return 0 (Success)
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
return (0);
}
