#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 96;
while (letter < 122)
{
letter += 1;
if (letter == 101 || letter == 113)
{
letter += 1;
}
putchar(letter);
}
putchar('\n');
return (0);
}
