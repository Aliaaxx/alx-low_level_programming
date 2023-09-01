#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - is a function that copies the string
 * pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: the first Argument of the function
 * @src: the second Argument of the function
 *
 * Return: Return value: the pointer to dest (Suceess)
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return (dest);
}
