#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - is a function thats checks if the charcter is
 * in lowercase.
*/

void jack_bauer(void)
{
int i,j,k,r;
for (i=48; i<51;i++)
{
for (j=48;j<52;j++)
{
for (k=48;k<54;k++)
{
for (r=48;r<58;r++)
{
putchar(i);
putchar(j);
putchar(':');
putchar(k);
putchar(r);
putchar('\n');
}   
}
}
}
}
