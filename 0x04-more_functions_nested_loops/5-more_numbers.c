#include <stdio.h>
#include "main.h"

/**
 * more_numbers - is a function that prints the numbers,
 * from 0 to 9, followed by a new line.
*/
void more_numbers(void)
{
int i, j;
char arr[] = {"1011121314"}; 
for (i = 48; i < 58; i++)
{
putchar(i);
if (i == 57)
{
for (j = 0; j < 10; j++)
putchar(arr[j]);
}
} 
putchar('\n');
}
