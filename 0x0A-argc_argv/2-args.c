#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: The First Argument of the Function
 * @argv: The Second Argument of the Function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
