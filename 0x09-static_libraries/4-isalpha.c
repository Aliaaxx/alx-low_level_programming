#include <stdio.h>
#include "main.h"

/**
 * _isalpha - is a function thats checks if the charcter is
 * lowecase or uppercase
 *
 *@c: the Argument of the function
 *
 * Return: return 1 if 'c' is lowercase or uppercase
 * other return 0 (Success)
*/

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 65 && c < 91))
{
return (1);
}
return (0);
}
