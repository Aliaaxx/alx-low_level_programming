#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
