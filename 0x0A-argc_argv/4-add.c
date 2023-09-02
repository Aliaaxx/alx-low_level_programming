#include <stdio.h>
#include <string.c>
#include <stdlib.h>
#include <ctype.h>

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
int i, j, sum = 0, check = 0;
if (argc == 0)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
if (!isdigit(argv[i][j]))
check = 1;
}
if (check == 1)
{
break;
}
else
{
sum += atoi(argv[i]);
}
}
if (check == 1)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", sum);
}
return (0);
}
