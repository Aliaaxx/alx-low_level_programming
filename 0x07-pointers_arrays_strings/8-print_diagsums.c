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
int i, j, d1 = 0, d2 = size - 1;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[d1][d1];
d1++;
sum2 += a[d2][d2];
d2--;
}
printf("%d, %d\n", sum1, sum2);    
}
