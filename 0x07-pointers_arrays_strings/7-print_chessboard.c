#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - is a function that prints the chessboard.
 *
 * @a: the Argument of the function
 *
 * Return: Nothing(Suceess)
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
