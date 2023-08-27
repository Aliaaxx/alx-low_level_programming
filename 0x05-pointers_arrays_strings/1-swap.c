#include "main.h"

/**
 * reset_to_98 - is a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
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
