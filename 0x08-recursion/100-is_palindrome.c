#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * check_palindrome - is a function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: the First Argument of the funcion.
 * @start: the Second Argument of the funcion.
 * @end: the Third Argument of the funcion.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - is a function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: the Argument of the function.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
int end = strlen(s) - 1;
return (check_palindrome(s, 0, end));
}
