#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - is a function thats prints the alphabet,
 * in lowercase, 10 times followed by a new line
*/
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
}
