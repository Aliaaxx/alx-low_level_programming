#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring.
 *
 * @s: the first Argument of the function
 * @accept: the second Argument of the function
 *
 * Return: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept(Suceess)
 */
unsigned int _strspn(char *s, char *accept);
{
return (strspn(s, accept));
}
