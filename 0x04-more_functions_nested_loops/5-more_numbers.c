#include <stdio.h>
#include "main.h"

/**
 * more_numbers - is a function that prints the numbers,
 * from 0 to 9, followed by a new line.
*/
void more_numbers(void)
{
int k, i, j;
char arr[] = {"1011121314"}; 
for(k = 0; k < 10; k++)
{
for (i = 48; i < 58; i++)
{
_putchar(i);
if (i == 57)
{
for (j = 0; j < 10; j++)
_putchar(arr[j]);
}
} 
_putchar('\n');
}
}
