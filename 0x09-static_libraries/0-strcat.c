#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - is a function that appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte.
 *
 * @dest: the first Argument of the function
 * @src: the second Argument of the function
 *
 * Return: Return value: the pointer to dest (Suceess)
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
