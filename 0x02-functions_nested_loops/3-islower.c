#include <stdio.h>
#include "main.h"

/**
 * _islower - is a function thats checks if the charcter is 
 * in lowercase.
 *
 * Return: return 1 if 'c' is lowercase
 * other return 0 (Success)
*/

int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
return (0);
}
