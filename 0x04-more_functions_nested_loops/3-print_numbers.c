#include <stdio.h>
#include "main.h"

/**
 * print_numbers - is a function that prints the numbers,
 * from 0 to 9, followed by a new line.
*/
void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
}
