#include <stdio.h>
#include "main.h"

/**
 * _islower - is a function thats checks for uppercase character.
 *
 *@c: the Argument of the function
 *
 * Return: return 1 if 'c' is uppercase
 * other return 0 (Success)
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
return (0);
}
