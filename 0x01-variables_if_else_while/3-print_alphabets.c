#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char low_letter = 97;
char up_letter = 65;
while (low_letter <= 122)
{
putchar(low_letter);
low_letter += 1;
}
while (up_letter <= 90)
{
putchar(up_letter);
up_letter += 1;
}
putchar('\n');
return (0);
}
