#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - is a function that reverses a string.
 *
 * @s: the Argument of the function
 *
 * Return: nothing
 */
void rev_string(char *s)
{
char str;
int i, half = strlen(s) / 2;
int len = strlen(s) - 1;
for (i = 0; i < half; i++)
{
str =  s[i];
s[i] = s[len - i];
s[len - i] = str;
}
}
