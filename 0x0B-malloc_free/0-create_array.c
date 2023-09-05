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
if (size == 0)
{
return (0);
}
else
{
char *arr = (char *)malloc(size * sizeof(char));
return (*arr);
}
}
