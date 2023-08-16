#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -  is a function thats prints the alphabet,
 * in lowercase, followed by a new line 
*/
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
