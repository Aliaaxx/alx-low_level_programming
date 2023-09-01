#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - is a function that copies memory area.
 *
 * @dest: the first Argument of the function
 * @src: the second Argument of the function
 * @n: the third Argument of the function
 *
 * Return: Returns a pointer to the memory area s (Suceess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
