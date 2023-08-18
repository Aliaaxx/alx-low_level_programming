#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - is a function that draw a diagonal line
 *
 * @n: the Argument of the function
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
//if (j == i - 1)
//{
putchar(92);  
//}    
//else
//{
//putchar(' ');
//}
}
putchar('\n');
}
}
}
