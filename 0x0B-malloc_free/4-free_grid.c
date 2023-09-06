#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid.
 *
 * @grid: The First Argument of the Function
 * @height: The Second Argument of the Function
 */
void free_grid(int **grid, int height)
{
int i, j;
for (i = 0; i < height; i++)
{
for (j = 0; j < height; j++)
{
free(grid[i][j]);
}
}
}
