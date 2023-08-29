#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - is a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: the first Argument of the function
 * @size: the second Argument of the function
 *
 * Return: Nothing(Suceess)
 */
void print_diagsums(int *a, int size)
{
int i, j = size - 1, d1 = size + 1, index_d1 = 0, index_d2 = 0 ;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
index_d1 = d1 * i;
index_d2 = j;
sum1 += (*(a + index_d1));
sum2 += *(a + index_d2);
j += (size - 1);
}
printf("%d, %d\n", sum1, sum2);    
}
