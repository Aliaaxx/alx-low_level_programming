#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - is a function that prints a string in reverse.
 *
 * @s: the Argument of the function
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (s[0] != '\0')/*or if(*s)*/
{
_print_rev_recursion(s+1);
putchar(*s);
}
}
