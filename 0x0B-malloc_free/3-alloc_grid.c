#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **grid = (int **)malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
