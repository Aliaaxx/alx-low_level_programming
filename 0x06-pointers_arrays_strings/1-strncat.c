#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - is a function that The _strncat function is similar 
 * to the _strcat function, except that it will use at most n 
 * bytes from src; and src does not need to be null-terminated if 
 * it contains n or more bytes.
 *
 * @dest: the first Argument of the function
 * @src: the second Argument of the function
 * @n: the thirdd Argument of the function
 *
 * Return: Return value: the pointer to dest (Suceess)
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
