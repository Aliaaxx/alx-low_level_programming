#include <stdio.h>
#include <stdlib.h>

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
int i, result = 1;
if (argc != 2)
{
for (i = 1; i < argc; i++)
{
result *= atoi(argv[i]); 
printf("%d\n", result);
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
