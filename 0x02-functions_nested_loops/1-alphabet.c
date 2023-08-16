#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
