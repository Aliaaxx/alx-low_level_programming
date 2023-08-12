#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int num1 = 0, num2 = 0;
  for (int i = 48; i < 58; i++)
    {
      for (int j = i + 1; j < 58; j++)
	{
	  putchar(i);
	  putchar(j);
          putchar(',');
	  putchar(' ');
	}
    }
  return (0);
}
