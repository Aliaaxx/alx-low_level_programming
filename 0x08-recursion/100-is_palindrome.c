#include <stdio.h>
#include <string.h>
#include "main.h"

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
int len = strlen(s);
int i, end = strlen(s) - 1, check = 0;
for (i = 0; i < len/2; i++)
{
if (s[i] == s[end])
{
check = 0;
}
else
{
check = 1;
break;
}
end--;
}
if (check == 0)
return (1);
else
return(0);
}
