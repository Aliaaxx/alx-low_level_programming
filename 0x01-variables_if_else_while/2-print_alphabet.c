#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter += 1;
}
putchar('\n');
return (0);
}
