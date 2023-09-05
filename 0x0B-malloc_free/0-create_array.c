#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: The First Argument of the Function
 * @c: The Second Argument of the Function
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (0);
}
else
{
char *arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
}
}
