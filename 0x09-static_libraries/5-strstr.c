#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - is a function that locates a substring.
 *
 * @haystack: the first Argument of the function
 * @needle: the second Argument of the function
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.(Suceess)
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
