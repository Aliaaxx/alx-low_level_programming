#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - is a function that copies a string.
 *
 * @dest: the first Argument of the function
 * @src: the second Argument of the function
 * @n: the third Argument of the function
 *
 * Return: Return value: the pointer to dest (Suceess)
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
