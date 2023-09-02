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
int i, sum = 0;
if (argc == 0)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (argv[i] != atoi(argv[i]))
{
printf("Error\n");
return (1);
break;
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (0);
}
