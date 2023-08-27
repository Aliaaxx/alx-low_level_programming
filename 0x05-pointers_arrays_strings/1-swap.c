#include "main.h"

/**
 * swap_int - is a function that swaps the values of two integers.
 *
 * @a: the First Argument of the function
 * @b: the Second Argument of the function
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
