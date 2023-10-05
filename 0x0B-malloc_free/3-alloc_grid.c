#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: The First Argument of the Function
 * @height: The Second Argument of the Function
 *
 * Return: Returns NULL
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
