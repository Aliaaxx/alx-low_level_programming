#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array of integers.
 *
 * @width: The First Argument of the Function
 * @height: The Second Argument of the Function
 *
 * Return: Returns NULL
 */
int **alloc_grid(int width, int height)
{
int *ptr;
int i, j;
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
