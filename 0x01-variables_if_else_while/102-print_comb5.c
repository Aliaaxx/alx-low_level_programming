#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, r;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
for (r = 49; r < 58; r++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(r);
if (i == 57 && j == 56 && k == 57 && r == 57 )
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
}
}
putchar('\n');
return (0);
}
