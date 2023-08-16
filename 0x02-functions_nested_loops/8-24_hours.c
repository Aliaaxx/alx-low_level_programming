#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - is a function thats checks if the charcter is
 * in lowercase.
*/

void jack_bauer(void)
{
int i, j, k, r;
for (i = 48; i < 51; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 54; k++)
{
for (r = 48; r < 54; r++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(r);
_putchar('\n');
}
}
}
}
}
