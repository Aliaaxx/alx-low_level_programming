#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - is a function that locates a character in a string.
 *
 * @s: the first Argument of the function
 * @c: the second Argument of the function
 *
 * Return: Returns a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found (Suceess)
 */
char *_strchr(char *s, char c)
{
s = strchr(s, c);
return (s);
}
