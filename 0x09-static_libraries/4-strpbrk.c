#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - is a function that searches a string for any of a set of bytes.
 *
 * @s: the first Argument of the function
 * @accept: the second Argument of the function
 *
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found(Suceess)
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
