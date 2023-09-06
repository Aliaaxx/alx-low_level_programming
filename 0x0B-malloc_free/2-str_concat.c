#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - A function the return the length of thr string
 *
 * @s: The Argument of the Function
 *
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
 * str_concat - A function that concatenates two strings.
 *
 * @s1: The First Argument of the Function
 * @s2: The Second Argument of the Function
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
int i, j = 0;
int len1 = _strlen(s1);
int len2 = _strlen(s2);
int size = len1 + len2;
char *s = (char *)malloc((size + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
if (i < len1)
{
s[i] = s1[i];
}
else
{
s[i] = s2[j];
j++;
}
s[size] = "\0";
}
return (s);
}
