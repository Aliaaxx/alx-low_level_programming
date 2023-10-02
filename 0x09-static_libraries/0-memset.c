#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 *
 * @s: the first Argument of the function
 * @b: the second Argument of the function
 * @n: the third Argument of the function
 *
 * Return: Returns a pointer to the memory area s (Suceess)
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
